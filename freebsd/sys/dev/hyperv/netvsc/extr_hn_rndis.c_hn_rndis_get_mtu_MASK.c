
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hn_softc {int hn_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hn_softc*,int ,int *,int ,int *,size_t*) ;
 int FUNC_1 (int ,char*,size_t) ;

int
FUNC_2(struct hn_softc *VAR_2, uint32_t *VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 VAR_4 = sizeof(*VAR_3);
 VAR_5 = FUNC_0(VAR_2, VAR_1, ((void*)0), 0,
     VAR_3, &VAR_4);
 if (VAR_5)
  return (VAR_5);
 if (VAR_4 != sizeof(uint32_t)) {
  FUNC_1(VAR_2->hn_ifp, "invalid mtu len %zu\n", VAR_4);
  return (VAR_0);
 }
 return (0);
}
