
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* dc_arg; char* dc_desc; char* dc_name; int * dc_prog; } ;
typedef TYPE_1__ dtrace_cmd_t ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int * FUNC_1 (int ,int *,int ,int ,char**) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(dtrace_cmd_t *VAR_4)
{
 char *VAR_5;
 FILE *VAR_6;

 if ((VAR_6 = FUNC_4(VAR_4->dc_arg, "r")) == ((void*)0))
  FUNC_2("failed to open %s", VAR_4->dc_arg);

 VAR_5 = VAR_1[0];
 VAR_1[0] = VAR_4->dc_arg;

 if ((VAR_4->dc_prog = FUNC_1(VAR_3, VAR_6,
     VAR_2, VAR_0, VAR_1)) == ((void*)0))
  FUNC_0("failed to compile script %s", VAR_4->dc_arg);

 VAR_1[0] = VAR_5;
 (void) FUNC_3(VAR_6);

 VAR_4->dc_desc = "script";
 VAR_4->dc_name = VAR_4->dc_arg;
}
