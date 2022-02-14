
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {struct sec_desc* sc_desc; } ;
struct sec_desc {scalar_t__ sd_desc_paddr; } ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct sec_softc*,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct sec_desc *
FUNC_1(struct sec_softc *VAR_2, bus_addr_t VAR_3)
{
 struct sec_desc *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_0(VAR_2, VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2->sc_desc[VAR_5].sd_desc_paddr == VAR_3) {
   VAR_4 = &(VAR_2->sc_desc[VAR_5]);
   break;
  }
 }

 return (VAR_4);
}
