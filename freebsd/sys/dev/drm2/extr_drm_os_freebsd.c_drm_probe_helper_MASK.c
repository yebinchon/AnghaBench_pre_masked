
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
typedef TYPE_1__ drm_pci_id_list_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__* FUNC_5 (int,int,TYPE_1__ const*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10(device_t VAR_5, const drm_pci_id_list_t *VAR_6)
{
 const drm_pci_id_list_t *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_9(VAR_5);
 VAR_9 = FUNC_7(VAR_5);

 if (FUNC_6(VAR_5) != VAR_2 ||
     (FUNC_8(VAR_5) != VAR_4 &&
      FUNC_8(VAR_5) != VAR_3))
  return (-VAR_1);

 VAR_7 = FUNC_5(VAR_8, VAR_9, VAR_6);
 if (VAR_7 != ((void*)0)) {
  if (FUNC_2(VAR_5) == ((void*)0)) {
   FUNC_0("%s desc: %s\n",
       FUNC_3(VAR_5), VAR_7->name);
   FUNC_4(VAR_5, VAR_7->name);
  }
  FUNC_1(VAR_5);
  return (-VAR_0);
 }

 return (-VAR_1);
}
