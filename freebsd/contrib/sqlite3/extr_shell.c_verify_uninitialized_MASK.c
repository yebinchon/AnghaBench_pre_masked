
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void){
  if( FUNC_0(-1)==VAR_0 ){
    FUNC_1(VAR_1, "WARNING: attempt to configure SQLite after"
                        " initialization.\n");
  }
}
