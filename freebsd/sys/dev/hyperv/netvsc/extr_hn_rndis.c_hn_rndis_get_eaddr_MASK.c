
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hn_softc {int hn_ifp; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hn_softc*,int ,int *,int ,int *,size_t*) ;
 int FUNC_1 (int ,char*,size_t) ;

int
FUNC_2(struct hn_softc *VAR_3, uint8_t *VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 VAR_5 = VAR_1;
 VAR_6 = FUNC_0(VAR_3, VAR_2, ((void*)0), 0,
     VAR_4, &VAR_5);
 if (VAR_6)
  return (VAR_6);
 if (VAR_5 != VAR_1) {
  FUNC_1(VAR_3->hn_ifp, "invalid eaddr len %zu\n", VAR_5);
  return (VAR_0);
 }
 return (0);
}
