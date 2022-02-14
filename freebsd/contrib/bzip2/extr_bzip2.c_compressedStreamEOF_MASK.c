
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;
 int FUNC_4 () ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_5 ( void )
{
  if (VAR_0) {
    FUNC_2 ( VAR_2,
       "\n%s: Compressed file ends unexpectedly;\n\t"
       "perhaps it is corrupted?  *Possible* reason follows.\n",
       VAR_1 );
    FUNC_3 ( VAR_1 );
    FUNC_4();
    FUNC_0();
  }
  FUNC_1( 2 );
}
