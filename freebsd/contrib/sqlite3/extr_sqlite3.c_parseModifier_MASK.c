
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef size_t u8 ;
typedef int tx ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_13__ {int iJD; double s; int validJD; int tzSet; int validHMS; int D; int M; int Y; int validTZ; int rawS; int m; int h; int validYMD; } ;
struct TYPE_12__ {int nName; char const* zName; double rLimit; double rXform; int eType; } ;
typedef TYPE_1__ DateTime ;


 int FUNC_0 (TYPE_10__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_10__* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,int*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (char const*,TYPE_1__*) ;
 int FUNC_8 (char const*,double*,int,int ) ;
 int FUNC_9 (char const) ;
 int FUNC_10 (char const) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char const*) ;
 int* VAR_3 ;
 int FUNC_13 (char const*,char*) ;
 int FUNC_14 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_15(
  sqlite3_context *VAR_4,
  const char *VAR_5,
  int VAR_6,
  DateTime *VAR_7
){
  int VAR_8 = 1;
  double VAR_9;
  switch(VAR_3[(u8)VAR_5[0]] ){

    case 'l': {





      if( FUNC_13(VAR_5, "localtime")==0 && FUNC_11(VAR_4) ){
        FUNC_2(VAR_7);
        VAR_7->iJD += FUNC_5(VAR_7, VAR_4, &VAR_8);
        FUNC_1(VAR_7);
      }
      break;
    }

    case 'u': {






      if( FUNC_13(VAR_5, "unixepoch")==0 && VAR_7->rawS ){
        VAR_9 = VAR_7->s*1000.0 + 210866760000000.0;
        if( VAR_9>=0.0 && VAR_9<464269060800000.0 ){
          FUNC_1(VAR_7);
          VAR_7->iJD = (sqlite3_int64)VAR_9;
          VAR_7->validJD = 1;
          VAR_7->rawS = 0;
          VAR_8 = 0;
        }
      }

      else if( FUNC_13(VAR_5, "utc")==0 && FUNC_11(VAR_4) ){
        if( VAR_7->tzSet==0 ){
          sqlite3_int64 VAR_10;
          FUNC_2(VAR_7);
          VAR_10 = FUNC_5(VAR_7, VAR_4, &VAR_8);
          if( VAR_8==VAR_0 ){
            VAR_7->iJD -= VAR_10;
            FUNC_1(VAR_7);
            VAR_7->iJD += VAR_10 - FUNC_5(VAR_7, VAR_4, &VAR_8);
          }
          VAR_7->tzSet = 1;
        }else{
          VAR_8 = VAR_0;
        }
      }

      break;
    }
    case 'w': {







      if( FUNC_14(VAR_5, "weekday ", 8)==0
               && FUNC_8(&VAR_5[8], &VAR_9, FUNC_12(&VAR_5[8]), VAR_1)>0
               && (VAR_6=(int)VAR_9)==VAR_9 && VAR_6>=0 && VAR_9<7 ){
        sqlite3_int64 VAR_11;
        FUNC_4(VAR_7);
        VAR_7->validTZ = 0;
        VAR_7->validJD = 0;
        FUNC_2(VAR_7);
        VAR_11 = ((VAR_7->iJD + 129600000)/86400000) % 7;
        if( VAR_11>VAR_6 ) VAR_11 -= 7;
        VAR_7->iJD += (VAR_6 - VAR_11)*86400000;
        FUNC_1(VAR_7);
        VAR_8 = 0;
      }
      break;
    }
    case 's': {






      if( FUNC_14(VAR_5, "start of ", 9)!=0 ) break;
      if( !VAR_7->validJD && !VAR_7->validYMD && !VAR_7->validHMS ) break;
      VAR_5 += 9;
      FUNC_3(VAR_7);
      VAR_7->validHMS = 1;
      VAR_7->h = VAR_7->m = 0;
      VAR_7->s = 0.0;
      VAR_7->rawS = 0;
      VAR_7->validTZ = 0;
      VAR_7->validJD = 0;
      if( FUNC_13(VAR_5,"month")==0 ){
        VAR_7->D = 1;
        VAR_8 = 0;
      }else if( FUNC_13(VAR_5,"year")==0 ){
        VAR_7->M = 1;
        VAR_7->D = 1;
        VAR_8 = 0;
      }else if( FUNC_13(VAR_5,"day")==0 ){
        VAR_8 = 0;
      }
      break;
    }
    case '+':
    case '-':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9': {
      double VAR_12;
      int VAR_13;
      for(VAR_6=1; VAR_5[VAR_6] && VAR_5[VAR_6]!=':' && !FUNC_10(VAR_5[VAR_6]); VAR_6++){}
      if( FUNC_8(VAR_5, &VAR_9, VAR_6, VAR_1)<=0 ){
        VAR_8 = 1;
        break;
      }
      if( VAR_5[VAR_6]==':' ){





        const char *VAR_14 = VAR_5;
        DateTime VAR_15;
        sqlite3_int64 VAR_16;
        if( !FUNC_9(*VAR_14) ) VAR_14++;
        FUNC_6(&VAR_15, 0, sizeof(VAR_15));
        if( FUNC_7(VAR_14, &VAR_15) ) break;
        FUNC_2(&VAR_15);
        VAR_15.iJD -= 43200000;
        VAR_16 = VAR_15.iJD/86400000;
        VAR_15.iJD -= VAR_16*86400000;
        if( VAR_5[0]=='-' ) VAR_15.iJD = -VAR_15.iJD;
        FUNC_2(VAR_7);
        FUNC_1(VAR_7);
        VAR_7->iJD += VAR_15.iJD;
        VAR_8 = 0;
        break;
      }



      VAR_5 += VAR_6;
      while( FUNC_10(*VAR_5) ) VAR_5++;
      VAR_6 = FUNC_12(VAR_5);
      if( VAR_6>10 || VAR_6<3 ) break;
      if( VAR_3[(u8)VAR_5[VAR_6-1]]=='s' ) VAR_6--;
      FUNC_2(VAR_7);
      VAR_8 = 1;
      VAR_12 = VAR_9<0 ? -0.5 : +0.5;
      for(VAR_13=0; VAR_13<FUNC_0(VAR_2); VAR_13++){
        if( VAR_2[VAR_13].nName==VAR_6
         && FUNC_14(VAR_2[VAR_13].zName, VAR_5, VAR_6)==0
         && VAR_9>-VAR_2[VAR_13].rLimit && VAR_9<VAR_2[VAR_13].rLimit
        ){
          switch( VAR_2[VAR_13].eType ){
            case 1: {
              int VAR_17;
              FUNC_4(VAR_7);
              VAR_7->M += (int)VAR_9;
              VAR_17 = VAR_7->M>0 ? (VAR_7->M-1)/12 : (VAR_7->M-12)/12;
              VAR_7->Y += VAR_17;
              VAR_7->M -= VAR_17*12;
              VAR_7->validJD = 0;
              VAR_9 -= (int)VAR_9;
              break;
            }
            case 2: {
              int VAR_18 = (int)VAR_9;
              FUNC_4(VAR_7);
              VAR_7->Y += VAR_18;
              VAR_7->validJD = 0;
              VAR_9 -= (int)VAR_9;
              break;
            }
          }
          FUNC_2(VAR_7);
          VAR_7->iJD += (sqlite3_int64)(VAR_9*VAR_2[VAR_13].rXform + VAR_12);
          VAR_8 = 0;
          break;
        }
      }
      FUNC_1(VAR_7);
      break;
    }
    default: {
      break;
    }
  }
  return VAR_8;
}
