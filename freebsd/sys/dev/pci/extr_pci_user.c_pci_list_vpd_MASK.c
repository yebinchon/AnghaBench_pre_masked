
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vpd_element ;
struct pcicfg_vpd {scalar_t__ vpd_reg; int vpd_rocnt; int vpd_wcnt; TYPE_2__* vpd_w; TYPE_1__* vpd_ros; struct pci_vpd_element* vpd_ident; } ;
struct pci_vpd_element {char* pve_keyword; int pve_datalen; struct pci_vpd_element* pve_data; scalar_t__ pve_flags; } ;
struct pci_list_vpd_io {size_t plvi_len; struct pci_vpd_element* plvi_data; } ;
typedef int device_t ;
struct TYPE_4__ {int len; char* keyword; struct pci_vpd_element* value; } ;
struct TYPE_3__ {int len; char* keyword; struct pci_vpd_element* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct pci_vpd_element* FUNC_1 (struct pci_vpd_element*,int) ;
 int FUNC_2 (struct pci_vpd_element*,struct pci_vpd_element*,int) ;
 struct pcicfg_vpd* FUNC_3 (int ) ;
 int FUNC_4 (struct pci_vpd_element*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, struct pci_list_vpd_io *VAR_5)
{
 struct pci_vpd_element VAR_6, *VAR_7;
 struct pcicfg_vpd *VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8->vpd_reg == 0 || VAR_8->vpd_ident == ((void*)0))
  return (VAR_1);






 VAR_9 = sizeof(struct pci_vpd_element) + FUNC_4(VAR_8->vpd_ident);
 for (VAR_11 = 0; VAR_11 < VAR_8->vpd_rocnt; VAR_11++)
  VAR_9 += sizeof(struct pci_vpd_element) + VAR_8->vpd_ros[VAR_11].len;
 for (VAR_11 = 0; VAR_11 < VAR_8->vpd_wcnt; VAR_11++)
  VAR_9 += sizeof(struct pci_vpd_element) + VAR_8->vpd_w[VAR_11].len;

 if (VAR_5->plvi_len == 0) {
  VAR_5->plvi_len = VAR_9;
  return (0);
 }
 if (VAR_5->plvi_len < VAR_9) {
  VAR_5->plvi_len = VAR_9;
  return (VAR_0);
 }





 VAR_7 = VAR_5->plvi_data;
 VAR_6.pve_keyword[0] = '\0';
 VAR_6.pve_keyword[1] = '\0';
 VAR_6.pve_flags = VAR_2;
 VAR_6.pve_datalen = FUNC_4(VAR_8->vpd_ident);
 VAR_10 = FUNC_2(&VAR_6, VAR_7, sizeof(VAR_6));
 if (VAR_10)
  return (VAR_10);
 VAR_10 = FUNC_2(VAR_8->vpd_ident, VAR_7->pve_data,
     FUNC_4(VAR_8->vpd_ident));
 if (VAR_10)
  return (VAR_10);
 VAR_7 = FUNC_1(VAR_7, VAR_6.pve_datalen);
 VAR_6.pve_flags = 0;
 for (VAR_11 = 0; VAR_11 < VAR_8->vpd_rocnt; VAR_11++) {
  VAR_6.pve_keyword[0] = VAR_8->vpd_ros[VAR_11].keyword[0];
  VAR_6.pve_keyword[1] = VAR_8->vpd_ros[VAR_11].keyword[1];
  VAR_6.pve_datalen = VAR_8->vpd_ros[VAR_11].len;
  VAR_10 = FUNC_2(&VAR_6, VAR_7, sizeof(VAR_6));
  if (VAR_10)
   return (VAR_10);
  VAR_10 = FUNC_2(VAR_8->vpd_ros[VAR_11].value, VAR_7->pve_data,
      VAR_8->vpd_ros[VAR_11].len);
  if (VAR_10)
   return (VAR_10);
  VAR_7 = FUNC_1(VAR_7, VAR_6.pve_datalen);
 }
 VAR_6.pve_flags = VAR_3;
 for (VAR_11 = 0; VAR_11 < VAR_8->vpd_wcnt; VAR_11++) {
  VAR_6.pve_keyword[0] = VAR_8->vpd_w[VAR_11].keyword[0];
  VAR_6.pve_keyword[1] = VAR_8->vpd_w[VAR_11].keyword[1];
  VAR_6.pve_datalen = VAR_8->vpd_w[VAR_11].len;
  VAR_10 = FUNC_2(&VAR_6, VAR_7, sizeof(VAR_6));
  if (VAR_10)
   return (VAR_10);
  VAR_10 = FUNC_2(VAR_8->vpd_w[VAR_11].value, VAR_7->pve_data,
      VAR_8->vpd_w[VAR_11].len);
  if (VAR_10)
   return (VAR_10);
  VAR_7 = FUNC_1(VAR_7, VAR_6.pve_datalen);
 }
 FUNC_0((char *)VAR_7 - (char *)VAR_5->plvi_data == VAR_9,
     ("length mismatch"));
 VAR_5->plvi_len = VAR_9;
 return (0);
}
