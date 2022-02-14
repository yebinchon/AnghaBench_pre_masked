
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char*,long,int,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 long FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (long) ;

__attribute__((used)) static char *FUNC_8(const char *VAR_1, int *VAR_2){
  FILE *VAR_3 = FUNC_1(VAR_1, "rb");
  long VAR_4;
  size_t VAR_5;
  char *VAR_6;
  if( VAR_3==0 ) return 0;
  FUNC_3(VAR_3, 0, VAR_0);
  VAR_4 = FUNC_4(VAR_3);
  FUNC_5(VAR_3);
  VAR_6 = FUNC_7( VAR_4+1 );
  if( VAR_6==0 ){ FUNC_0(VAR_3); return 0; }
  VAR_5 = FUNC_2(VAR_6, VAR_4, 1, VAR_3);
  FUNC_0(VAR_3);
  if( VAR_5!=1 ){
    FUNC_6(VAR_6);
    return 0;
  }
  VAR_6[VAR_4] = 0;
  if( VAR_2 ) *VAR_2 = VAR_4;
  return VAR_6;
}
