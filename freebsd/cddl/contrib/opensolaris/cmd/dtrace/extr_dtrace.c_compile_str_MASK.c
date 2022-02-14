
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* dc_desc; int dc_arg; int dc_name; int dc_spec; int * dc_prog; } ;
typedef TYPE_1__ dtrace_cmd_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int * FUNC_1 (int ,int ,int ,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(dtrace_cmd_t *VAR_5)
{
 char *VAR_6;

 if ((VAR_5->dc_prog = FUNC_1(VAR_4, VAR_5->dc_arg,
     VAR_5->dc_spec, VAR_3 | VAR_0, VAR_1, VAR_2)) == ((void*)0))
  FUNC_0("invalid probe specifier %s", VAR_5->dc_arg);

 if ((VAR_6 = FUNC_2(VAR_5->dc_arg, "{/;")) != ((void*)0))
  *VAR_6 = '\0';

 VAR_5->dc_desc = "description";
 VAR_5->dc_name = VAR_5->dc_arg;
}
