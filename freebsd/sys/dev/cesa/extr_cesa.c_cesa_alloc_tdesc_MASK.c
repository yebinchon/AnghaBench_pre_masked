
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cesa_tdma_desc {int dummy; } ;
struct cesa_softc {int sc_dev; } ;


 int FUNC_0 (struct cesa_softc*,struct cesa_tdma_desc*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static struct cesa_tdma_desc *
FUNC_2(struct cesa_softc *VAR_1)
{
 struct cesa_tdma_desc *VAR_2;

 FUNC_0(VAR_1, VAR_2, VAR_0);

 if (!VAR_2)
  FUNC_1(VAR_1->sc_dev, "TDMA descriptors pool exhaused. "
      "Consider increasing CESA_TDMA_DESCRIPTORS.\n");

 return (VAR_2);
}
