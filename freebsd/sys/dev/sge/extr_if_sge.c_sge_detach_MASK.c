
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_softc {int sge_mtx; scalar_t__ sge_res; int sge_res_id; int sge_res_type; scalar_t__ sge_irq; scalar_t__ sge_intrhand; scalar_t__ sge_miibus; int sge_stat_ch; struct ifnet* sge_ifp; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct sge_softc*) ;
 int FUNC_1 (struct sge_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;
 struct sge_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sge_softc*) ;
 int FUNC_13 (struct sge_softc*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_1)
{
 struct sge_softc *VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = FUNC_7(VAR_1);
 VAR_3 = VAR_2->sge_ifp;

 if (FUNC_8(VAR_1)) {
  FUNC_9(VAR_3);
  FUNC_0(VAR_2);
  FUNC_13(VAR_2);
  FUNC_1(VAR_2);
  FUNC_5(&VAR_2->sge_stat_ch);
 }
 if (VAR_2->sge_miibus)
  FUNC_6(VAR_1, VAR_2->sge_miibus);
 FUNC_2(VAR_1);

 if (VAR_2->sge_intrhand)
  FUNC_4(VAR_1, VAR_2->sge_irq, VAR_2->sge_intrhand);
 if (VAR_2->sge_irq)
  FUNC_3(VAR_1, VAR_0, 0, VAR_2->sge_irq);
 if (VAR_2->sge_res)
  FUNC_3(VAR_1, VAR_2->sge_res_type, VAR_2->sge_res_id,
      VAR_2->sge_res);
 if (VAR_3)
  FUNC_10(VAR_3);
 FUNC_12(VAR_2);
 FUNC_11(&VAR_2->sge_mtx);

 return (0);
}
