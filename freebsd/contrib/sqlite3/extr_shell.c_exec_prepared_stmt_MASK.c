
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_4__ {scalar_t__ cMode; } ;
typedef TYPE_1__ ShellState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,char**,char**,int*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(
  ShellState *VAR_6,
  sqlite3_stmt *VAR_7
){
  int VAR_8;




  VAR_8 = FUNC_8(VAR_7);

  if( VAR_5 == VAR_8 ){

    int VAR_9 = FUNC_2(VAR_7);
    void *VAR_10 = FUNC_7(3*VAR_9*sizeof(const char*) + 1);
    if( !VAR_10 ){
      VAR_8 = VAR_3;
    }else{
      char **VAR_11 = (char **)VAR_10;
      char **VAR_12 = &VAR_11[VAR_9];
      int *VAR_13 = (int *)&VAR_12[VAR_9];
      int VAR_14, VAR_15;
      FUNC_0(sizeof(int) <= sizeof(char *));

      for(VAR_14=0; VAR_14<VAR_9; VAR_14++){
        VAR_11[VAR_14] = (char *)FUNC_3(VAR_7, VAR_14);
      }
      do{

        for(VAR_14=0; VAR_14<VAR_9; VAR_14++){
          VAR_13[VAR_14] = VAR_15 = FUNC_5(VAR_7, VAR_14);
          if( VAR_15==VAR_2 && VAR_6 && VAR_6->cMode==VAR_0 ){
            VAR_12[VAR_14] = "";
          }else{
            VAR_12[VAR_14] = (char*)FUNC_4(VAR_7, VAR_14);
          }
          if( !VAR_12[VAR_14] && (VAR_13[VAR_14]!=VAR_4) ){
            VAR_8 = VAR_3;
            break;
          }
        }


        if( VAR_5 == VAR_8 ){

          if( FUNC_1(VAR_6, VAR_9, VAR_12, VAR_11, VAR_13) ){
            VAR_8 = VAR_1;
          }else{
            VAR_8 = FUNC_8(VAR_7);
          }
        }
      } while( VAR_5 == VAR_8 );
      FUNC_6(VAR_10);
    }
  }
}
