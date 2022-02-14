
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_bus_iinfo {int opi_addrc; scalar_t__ opi_imapsz; int opi_imapmsk; int opi_imap; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int addrc ;


 int FUNC_0 (int ,char*,int*,int) ;
 void* FUNC_1 (int ,char*,void**) ;
 int FUNC_2 (char*) ;

void
FUNC_3(phandle_t VAR_0, struct ofw_bus_iinfo *VAR_1, int VAR_2)
{
 pcell_t VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_0, "#address-cells", &VAR_3, sizeof(VAR_3)) == -1)
  VAR_3 = 2;
 VAR_1->opi_addrc = VAR_3 * sizeof(pcell_t);

 VAR_1->opi_imapsz = FUNC_1(VAR_0, "interrupt-map",
     (void **)&VAR_1->opi_imap);
 if (VAR_1->opi_imapsz > 0) {
  VAR_4 = FUNC_1(VAR_0, "interrupt-map-mask",
      (void **)&VAR_1->opi_imapmsk);




  if (VAR_4 != -1 && VAR_4 != VAR_1->opi_addrc + VAR_2)
   FUNC_2("ofw_bus_setup_iinfo: bad interrupt-map-mask "
       "property!");
 }
}
