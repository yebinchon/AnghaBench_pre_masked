
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nge_softc {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct nge_softc*,int,int *) ;

__attribute__((used)) static void
FUNC_1(struct nge_softc *VAR_0, caddr_t VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 uint16_t VAR_5 = 0, *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_0(VAR_0, VAR_2 + VAR_4, &VAR_5);
  VAR_6 = (uint16_t *)(VAR_1 + (VAR_4 * 2));
  *VAR_6 = VAR_5;
 }
}
