
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_softc {scalar_t__ initialized; scalar_t__ suspending; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct apm_softc VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct apm_softc *VAR_6 = &VAR_2;

 if (VAR_6 == ((void*)0) || VAR_6->initialized == 0 || VAR_6->suspending == 0)
  return;

 VAR_6->suspending = 0;
 FUNC_2(VAR_3[VAR_0]);
 FUNC_3(&VAR_1);
 FUNC_0(VAR_5);
 FUNC_4(&VAR_1);
 FUNC_1(VAR_4);
}
