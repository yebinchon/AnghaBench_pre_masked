
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dtrace_proginfo_t ;
typedef int dtrace_prog_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int * FUNC_3 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6()
{
 dtrace_prog_t *VAR_5;
 dtrace_proginfo_t VAR_6;

 if (VAR_1) {
  (void) FUNC_4(VAR_4, "lockstat: vvvv D program vvvv\n");
  (void) FUNC_5(VAR_3, VAR_4);
  (void) FUNC_4(VAR_4, "lockstat: ^^^^ D program ^^^^\n");
 }

 if ((VAR_5 = FUNC_3(VAR_2, VAR_3,
     VAR_0, 0, 0, ((void*)0))) == ((void*)0))
  FUNC_0("failed to compile program");

 if (FUNC_2(VAR_2, VAR_5, &VAR_6) == -1)
  FUNC_0("failed to enable probes");

 if (FUNC_1(VAR_2) != 0)
  FUNC_0("couldn't start tracing");
}
