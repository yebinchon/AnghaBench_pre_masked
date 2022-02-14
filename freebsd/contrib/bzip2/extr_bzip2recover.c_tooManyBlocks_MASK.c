
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Int32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2 ( Int32 VAR_3 )
{
   FUNC_1 ( VAR_2,
             "%s: `%s' appears to contain more than %d blocks\n",
            VAR_1, VAR_0, VAR_3 );
   FUNC_1 ( VAR_2,
             "%s: and cannot be handled.  To fix, increase\n",
             VAR_1 );
   FUNC_1 ( VAR_2,
             "%s: BZ_MAX_HANDLED_BLOCKS in bzip2recover.c, and recompile.\n",
             VAR_1 );
   FUNC_0 ( 1 );
}
