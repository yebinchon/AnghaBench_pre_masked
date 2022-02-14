
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufm_softc {int sc_freq; int sc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ufm_softc*,int ,int,int,int *) ;

__attribute__((used)) static int
FUNC_3(struct ufm_softc *VAR_3, void *VAR_4)
{
 int VAR_5 = *(int *)VAR_4;
 FUNC_0(&VAR_3->sc_mtx);
 VAR_3->sc_freq = VAR_5;
 FUNC_1(&VAR_3->sc_mtx);

 VAR_5 = (VAR_5 + 10700001) / 12500;


 if (FUNC_2(VAR_3, VAR_2,
     VAR_5 >> 8, VAR_5, ((void*)0)) != 0) {
  return (VAR_0);
 }

 if (FUNC_2(VAR_3, VAR_1,
     0x96, 0xb7, ((void*)0)) != 0) {
  return (VAR_0);
 }
 return (0);
}
