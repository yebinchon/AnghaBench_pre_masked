
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct ha_softc {int ha_receiving; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_1, void *VAR_2, int VAR_3)
{
 struct ha_softc *VAR_4 = VAR_2;

 FUNC_0(&VAR_4->ha_receiving);
 return (VAR_0);
}
