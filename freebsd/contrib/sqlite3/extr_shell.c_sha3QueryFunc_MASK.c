
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_uint64 ;
typedef int sqlite3_stmt ;
typedef double sqlite3_int64 ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
typedef int SHA3Context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned char const*,int) ;




 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int*,double*,int) ;
 unsigned char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 double FUNC_8 (int *,int) ;
 double FUNC_9 (int *,int) ;
 unsigned char* FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char*,char const*,...) ;
 int FUNC_17 (int *,char const*,int,int **,char const**) ;
 int FUNC_18 (int *,int ,int,int ) ;
 int FUNC_19 (int *,char*,int) ;
 char* FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (char const*) ;

__attribute__((used)) static void FUNC_26(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  sqlite3 *VAR_5 = FUNC_12(VAR_2);
  const char *VAR_6 = (const char*)FUNC_24(VAR_4[0]);
  sqlite3_stmt *VAR_7 = 0;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  int VAR_11;
  const char *VAR_12;
  SHA3Context VAR_13;
  int VAR_14;

  if( VAR_3==1 ){
    VAR_14 = 256;
  }else{
    VAR_14 = FUNC_23(VAR_4[1]);
    if( VAR_14!=224 && VAR_14!=256 && VAR_14!=384 && VAR_14!=512 ){
      FUNC_19(VAR_2, "SHA3 size should be one of: 224 256 "
                                    "384 512", -1);
      return;
    }
  }
  if( VAR_6==0 ) return;
  FUNC_1(&VAR_13, VAR_14);
  while( VAR_6[0] ){
    VAR_10 = FUNC_17(VAR_5, VAR_6, -1, &VAR_7, &VAR_6);
    if( VAR_10 ){
      char *VAR_15 = FUNC_16("error SQL statement [%s]: %s",
                                   VAR_6, FUNC_13(VAR_5));
      FUNC_14(VAR_7);
      FUNC_19(VAR_2, VAR_15, -1);
      FUNC_15(VAR_15);
      return;
    }
    if( !FUNC_22(VAR_7) ){
      char *VAR_16 = FUNC_16("non-query: [%s]", FUNC_20(VAR_7));
      FUNC_14(VAR_7);
      FUNC_19(VAR_2, VAR_16, -1);
      FUNC_15(VAR_16);
      return;
    }
    VAR_8 = FUNC_7(VAR_7);
    VAR_12 = FUNC_20(VAR_7);
    VAR_11 = (int)FUNC_25(VAR_12);
    FUNC_3(&VAR_13,"S%d:",VAR_11);
    FUNC_2(&VAR_13,(unsigned char*)VAR_12,VAR_11);


    while( VAR_0==FUNC_21(VAR_7) ){
      FUNC_2(&VAR_13,(const unsigned char*)"R",1);
      for(VAR_9=0; VAR_9<VAR_8; VAR_9++){
        switch( FUNC_11(VAR_7,VAR_9) ){
          case 129: {
            FUNC_2(&VAR_13, (const unsigned char*)"N",1);
            break;
          }
          case 130: {
            sqlite3_uint64 VAR_17;
            int VAR_18;
            unsigned char VAR_19[9];
            sqlite3_int64 VAR_20 = FUNC_9(VAR_7,VAR_9);
            FUNC_4(&VAR_17, &VAR_20, 8);
            for(VAR_18=8; VAR_18>=1; VAR_18--){
              VAR_19[VAR_18] = VAR_17 & 0xff;
              VAR_17 >>= 8;
            }
            VAR_19[0] = 'I';
            FUNC_2(&VAR_13, VAR_19, 9);
            break;
          }
          case 131: {
            sqlite3_uint64 VAR_21;
            int VAR_22;
            unsigned char VAR_23[9];
            double VAR_24 = FUNC_8(VAR_7,VAR_9);
            FUNC_4(&VAR_21, &VAR_24, 8);
            for(VAR_22=8; VAR_22>=1; VAR_22--){
              VAR_23[VAR_22] = VAR_21 & 0xff;
              VAR_21 >>= 8;
            }
            VAR_23[0] = 'F';
            FUNC_2(&VAR_13,VAR_23,9);
            break;
          }
          case 128: {
            int VAR_25 = FUNC_6(VAR_7, VAR_9);
            const unsigned char *VAR_26 = FUNC_10(VAR_7, VAR_9);
            FUNC_3(&VAR_13,"T%d:",VAR_25);
            FUNC_2(&VAR_13, VAR_26, VAR_25);
            break;
          }
          case 132: {
            int VAR_27 = FUNC_6(VAR_7, VAR_9);
            const unsigned char *VAR_28 = FUNC_5(VAR_7, VAR_9);
            FUNC_3(&VAR_13,"B%d:",VAR_27);
            FUNC_2(&VAR_13, VAR_28, VAR_27);
            break;
          }
        }
      }
    }
    FUNC_14(VAR_7);
  }
  FUNC_18(VAR_2, FUNC_0(&VAR_13), VAR_14/8, VAR_1);
}
