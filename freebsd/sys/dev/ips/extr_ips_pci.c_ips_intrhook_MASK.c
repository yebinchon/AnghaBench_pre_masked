
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ips_softc {int configured; int ips_ich; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ips_softc*) ;
 int FUNC_2 (struct ips_softc*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct ips_softc *VAR_1 = (struct ips_softc *)VAR_0;

 FUNC_0(&VAR_1->ips_ich);
 if (FUNC_1(VAR_1))
  FUNC_2(VAR_1);
 else
  VAR_1->configured = 1;
}
