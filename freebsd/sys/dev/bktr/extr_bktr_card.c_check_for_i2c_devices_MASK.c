
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bktr_ptr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1( bktr_ptr_t VAR_1 ){
  int VAR_2, VAR_3;
  int VAR_4 = 1;
  int VAR_5 = 1;
  for ( VAR_2 = 0; VAR_2 < 128; ++VAR_2 ) {
    VAR_3 = FUNC_0( VAR_1, (2 * VAR_2) + 1 );
    if (VAR_3 != 0) VAR_4 = 0;
    if (VAR_3 != VAR_0) VAR_5 = 0;
  }

  if ((VAR_4) || (VAR_5)) return 0;
  else return 1;
}
