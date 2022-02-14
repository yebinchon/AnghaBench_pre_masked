
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_proginfo_t ;
typedef int dtrace_prog_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int *) ;
 int * FUNC_2 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(void)
{
 dtrace_prog_t *VAR_6;
 dtrace_proginfo_t VAR_7;

 if (VAR_2) {
  (void) FUNC_3(VAR_5, "%s: vvvv D program vvvv\n", VAR_3);
  (void) FUNC_4(VAR_4, VAR_5);
  (void) FUNC_3(VAR_5, "%s: ^^^^ D program ^^^^\n", VAR_3);
 }

 if ((VAR_6 = FUNC_2(VAR_1, VAR_4,
     VAR_0, 0, 0, ((void*)0))) == ((void*)0))
  FUNC_0("failed to compile program");

 if (FUNC_1(VAR_1, VAR_6, &VAR_7) == -1)
  FUNC_0("failed to enable probes");
}
