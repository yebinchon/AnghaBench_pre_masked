
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 char* VAR_0 ;
 int FUNC_2 (char*) ;
 char* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3 ( void )
{
   FUNC_1 ( VAR_2,
             "%s: I/O error reading `%s', possible reason follows.\n",
            VAR_1, VAR_0 );
   FUNC_2 ( VAR_1 );
   FUNC_1 ( VAR_2, "%s: warning: output file(s) may be incomplete.\n",
             VAR_1 );
   FUNC_0 ( 1 );
}
