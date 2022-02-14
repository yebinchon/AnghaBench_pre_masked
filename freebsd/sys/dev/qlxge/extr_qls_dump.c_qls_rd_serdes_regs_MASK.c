
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int serdes2_xfi_hss_pll; int serdes1_xfi_hss_pll; int serdes2_xfi_hss_rx; int serdes1_xfi_hss_rx; int serdes2_xfi_hss_tx; int serdes1_xfi_hss_tx; int serdes2_xfi_hss_pcs; int serdes1_xfi_hss_pcs; int serdes2_xfi_train; int serdes1_xfi_train; int serdes2_xfi_an; int serdes1_xfi_an; int serdes2_xaui_hss_pcs; int serdes1_xaui_hss_pcs; int serdes2_xaui_an; int serdes1_xaui_an; } ;
typedef TYPE_1__ qls_mpi_coredump_t ;
struct TYPE_9__ {int pci_func; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int,int*,int*,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int*) ;
 int FUNC_2 (TYPE_2__*,int,int*) ;

__attribute__((used)) static int
FUNC_3(qla_host_t *VAR_3, qls_mpi_coredump_t *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12;
 uint32_t *VAR_13, *VAR_14;

 VAR_6 = VAR_7 = VAR_8 = VAR_9 = 0;

 VAR_11 = 0x800;

 VAR_5 = FUNC_1(VAR_3, VAR_11, &VAR_10);
 if (VAR_5)
  VAR_10 = 0;

 if ((VAR_10 & VAR_0) == VAR_0)
  VAR_9 = 1;

 VAR_5 = FUNC_2(VAR_3, VAR_11, &VAR_10);
 if (VAR_5)
  VAR_10 = 0;

 if ((VAR_10 & VAR_0) == VAR_0)
  VAR_8 = 1;

 VAR_5 = FUNC_2(VAR_3, 0x1E06, &VAR_10);
 if (VAR_5)
  VAR_10 = 0;

 if ((VAR_10 & VAR_1) == VAR_1) {

  if (VAR_3->pci_func & 1)
           VAR_7 = 1;

  else
   VAR_6 = 1;
 }

 if((VAR_10 & VAR_2) == VAR_2) {

  if(VAR_3->pci_func & 1)
   VAR_6 = 1;

  else
   VAR_7 = 1;
 }

 if (VAR_3->pci_func & 1) {
  VAR_13 = (uint32_t *)(&VAR_4->serdes2_xaui_an);
  VAR_14 = (uint32_t *)(&VAR_4->serdes1_xaui_an);
 } else {
  VAR_13 = (uint32_t *)(&VAR_4->serdes1_xaui_an);
  VAR_14 = (uint32_t *)(&VAR_4->serdes2_xaui_an);
 }

 for (VAR_12 = 0; VAR_12 <= 0x000000034; VAR_12 += 4, VAR_13 ++, VAR_14 ++) {
  FUNC_0(VAR_3, VAR_12, VAR_13, VAR_14,
   VAR_8, VAR_9);
 }

 if (VAR_3->pci_func & 1) {
  VAR_13 = (uint32_t *)(&VAR_4->serdes2_xaui_hss_pcs);
  VAR_14 = (uint32_t *)(&VAR_4->serdes1_xaui_hss_pcs);
 } else {
  VAR_13 = (uint32_t *)(&VAR_4->serdes1_xaui_hss_pcs);
  VAR_14 = (uint32_t *)(&VAR_4->serdes2_xaui_hss_pcs);
 }

 for (VAR_12 = 0x800; VAR_12 <= 0x880; VAR_12 += 4, VAR_13 ++, VAR_14 ++) {
  FUNC_0(VAR_3, VAR_12, VAR_13, VAR_14,
   VAR_8, VAR_9);
 }

 if (VAR_3->pci_func & 1) {
  VAR_13 = (uint32_t *)(&VAR_4->serdes2_xfi_an);
  VAR_14 = (uint32_t *)(&VAR_4->serdes1_xfi_an);
 } else {
  VAR_13 = (uint32_t *)(&VAR_4->serdes1_xfi_an);
  VAR_14 = (uint32_t *)(&VAR_4->serdes2_xfi_an);
 }

 for (VAR_12 = 0x1000; VAR_12 <= 0x1034; VAR_12 += 4, VAR_13 ++, VAR_14 ++) {
  FUNC_0(VAR_3, VAR_12, VAR_13, VAR_14,
   VAR_6, VAR_7);
 }

 if (VAR_3->pci_func & 1) {
  VAR_13 = (uint32_t *)(&VAR_4->serdes2_xfi_train);
  VAR_14 = (uint32_t *)(&VAR_4->serdes1_xfi_train);
 } else {
  VAR_13 = (uint32_t *)(&VAR_4->serdes1_xfi_train);
  VAR_14 = (uint32_t *)(&VAR_4->serdes2_xfi_train);
 }

 for (VAR_12 = 0x1050; VAR_12 <= 0x107c; VAR_12 += 4, VAR_13 ++, VAR_14 ++) {
  FUNC_0(VAR_3, VAR_12, VAR_13, VAR_14,
   VAR_6, VAR_7);
 }

 if (VAR_3->pci_func & 1) {
  VAR_13 = (uint32_t *)(&VAR_4->serdes2_xfi_hss_pcs);
  VAR_14 = (uint32_t *)(&VAR_4->serdes1_xfi_hss_pcs);
 } else {
  VAR_13 = (uint32_t *)(&VAR_4->serdes1_xfi_hss_pcs);
  VAR_14 = (uint32_t *)(&VAR_4->serdes2_xfi_hss_pcs);
 }

 for (VAR_12 = 0x1800; VAR_12 <= 0x1838; VAR_12 += 4, VAR_13++, VAR_14 ++) {
  FUNC_0(VAR_3, VAR_12, VAR_13, VAR_14,
   VAR_6, VAR_7);
 }

 if (VAR_3->pci_func & 1) {
  VAR_13 = (uint32_t *)(&VAR_4->serdes2_xfi_hss_tx);
  VAR_14 = (uint32_t *)(&VAR_4->serdes1_xfi_hss_tx);
 } else {
  VAR_13 = (uint32_t *)(&VAR_4->serdes1_xfi_hss_tx);
  VAR_14 = (uint32_t *)(&VAR_4->serdes2_xfi_hss_tx);
 }

 for (VAR_12 = 0x1c00; VAR_12 <= 0x1c1f; VAR_12++, VAR_13 ++, VAR_14 ++) {
  FUNC_0(VAR_3, VAR_12, VAR_13, VAR_14,
   VAR_6, VAR_7);
 }

 if (VAR_3->pci_func & 1) {
  VAR_13 = (uint32_t *)(&VAR_4->serdes2_xfi_hss_rx);
  VAR_14 = (uint32_t *)(&VAR_4->serdes1_xfi_hss_rx);
 } else {
  VAR_13 = (uint32_t *)(&VAR_4->serdes1_xfi_hss_rx);
  VAR_14 = (uint32_t *)(&VAR_4->serdes2_xfi_hss_rx);
 }

 for (VAR_12 = 0x1c40; VAR_12 <= 0x1c5f; VAR_12++, VAR_13 ++, VAR_14 ++) {
  FUNC_0(VAR_3, VAR_12, VAR_13, VAR_14,
   VAR_6, VAR_7);
 }

 if (VAR_3->pci_func & 1) {
  VAR_13 = (uint32_t *)(&VAR_4->serdes2_xfi_hss_pll);
  VAR_14 = (uint32_t *)(&VAR_4->serdes1_xfi_hss_pll);
 } else {
  VAR_13 = (uint32_t *)(&VAR_4->serdes1_xfi_hss_pll);
  VAR_14 = (uint32_t *)(&VAR_4->serdes2_xfi_hss_pll);
 }

 for (VAR_12 = 0x1e00; VAR_12 <= 0x1e1f; VAR_12++, VAR_13 ++, VAR_14 ++) {
  FUNC_0(VAR_3, VAR_12, VAR_13, VAR_14,
   VAR_6, VAR_7);
 }

 return(0);
}
