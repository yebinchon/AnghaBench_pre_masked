
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ofw_bus_iinfo {scalar_t__ opi_imapsz; int opi_addrc; int opi_imapmsk; int opi_imap; } ;
typedef int phandle_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,void*,int) ;
 int FUNC_2 (void*,int,void*,int,int ,scalar_t__,int ,int *,void*,int,int*) ;
 int FUNC_3 (char*) ;

int
FUNC_4(phandle_t VAR_0, struct ofw_bus_iinfo *VAR_1, void *VAR_2,
    int VAR_3, void *VAR_4, int VAR_5, void *VAR_6, int VAR_7,
    phandle_t *VAR_8)
{
 uint8_t VAR_9[VAR_3 + VAR_5];
 int VAR_10;

 if (VAR_1->opi_imapsz <= 0)
  return (0);
 FUNC_0(VAR_3 >= VAR_1->opi_addrc,
     ("ofw_bus_lookup_imap: register size too small: %d < %d",
  VAR_3, VAR_1->opi_addrc));
 if (VAR_0 != -1) {
  VAR_10 = FUNC_1(VAR_0, "reg", VAR_2, VAR_3);
  if (VAR_10 < VAR_3)
   FUNC_3("ofw_bus_lookup_imap: cannot get reg property");
 }
 return (FUNC_2(VAR_4, VAR_5, VAR_2, VAR_1->opi_addrc,
     VAR_1->opi_imap, VAR_1->opi_imapsz, VAR_1->opi_imapmsk, VAR_9, VAR_6,
     VAR_7, VAR_8));
}
