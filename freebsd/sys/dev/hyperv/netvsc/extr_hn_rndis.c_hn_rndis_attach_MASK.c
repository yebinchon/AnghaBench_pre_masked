
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int dummy; } ;


 int FUNC_0 (struct hn_softc*,int) ;
 int FUNC_1 (struct hn_softc*) ;

int
FUNC_2(struct hn_softc *VAR_0, int VAR_1, int *VAR_2)
{
 int VAR_3;

 *VAR_2 = 0;




 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return (VAR_3);
 *VAR_2 = 1;




 FUNC_0(VAR_0, VAR_1);
 return (0);
}
