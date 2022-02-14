
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dc_name; int dc_desc; int dc_ofile; int dc_prog; int dc_arg; } ;
typedef TYPE_1__ dtrace_cmd_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (int ,int,char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int *,int) ;
 char* FUNC_6 (int ,char) ;

__attribute__((used)) static void
FUNC_7(dtrace_cmd_t *VAR_7)
{
 char *VAR_8;

 if (VAR_1 == 1 && VAR_6 != ((void*)0)) {
  (void) FUNC_5(VAR_7->dc_ofile, VAR_6, sizeof (VAR_7->dc_ofile));
 } else if ((VAR_8 = FUNC_6(VAR_7->dc_arg, '.')) != ((void*)0) &&
     FUNC_4(VAR_8, ".d") == 0) {
  VAR_8[0] = '\0';
  (void) FUNC_3(VAR_7->dc_ofile, sizeof (VAR_7->dc_ofile),
      "%s.o", FUNC_0(VAR_7->dc_arg));
 } else if (VAR_1 > 1) {
  (void) FUNC_3(VAR_7->dc_ofile, sizeof (VAR_7->dc_ofile),
      "d.out.%td", VAR_7 - VAR_2);
 } else {
  (void) FUNC_3(VAR_7->dc_ofile, sizeof (VAR_7->dc_ofile),
      "d.out");
 }

 if (FUNC_2(VAR_3, VAR_7->dc_prog, VAR_0,
     VAR_7->dc_ofile, VAR_4, VAR_5) != 0)
  FUNC_1("failed to link %s %s", VAR_7->dc_desc, VAR_7->dc_name);
}
