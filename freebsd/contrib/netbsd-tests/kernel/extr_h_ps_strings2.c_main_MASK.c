
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {char** ps_argvstr; size_t ps_nargvstr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 char** FUNC_0 (size_t,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,size_t) ;
 char* FUNC_5 (char*) ;

int
FUNC_6(void)
{
 size_t VAR_3;
 char VAR_4[16];
 char **VAR_5;

 if ((VAR_5 = FUNC_0(VAR_0, sizeof(*VAR_5))) == ((void*)0))
  FUNC_1(1, "calloc failed");
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_4(VAR_4, sizeof(VAR_4), "arg%04zx", VAR_3);
  if ((VAR_5[VAR_3] = FUNC_5(VAR_4)) == ((void*)0))
   FUNC_1(1, "strdup failed");
 }
 VAR_2->ps_argvstr = VAR_5;
 VAR_2->ps_nargvstr = VAR_0;

 FUNC_2("Sleeping forever...\n");
 do {
  FUNC_3(VAR_1);
 } while (1);
 return 0;
}
