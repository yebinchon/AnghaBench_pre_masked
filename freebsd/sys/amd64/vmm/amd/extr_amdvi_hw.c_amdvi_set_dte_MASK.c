
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct amdvi_softc {scalar_t__ ptp; int id; scalar_t__ iotlb; } ;
struct amdvi_dte {int iotlb_enable; int sup_second_io_fault; int dt_valid; int pt_base; int pt_valid; int read_allow; int write_allow; int pt_level; int domain_id; int sup_all_io_fault; } ;
struct amdvi_domain {scalar_t__ ptp; int id; scalar_t__ iotlb; } ;


 int FUNC_0 (struct amdvi_softc*,char*) ;
 scalar_t__ FUNC_1 (struct amdvi_softc*,size_t) ;
 int VAR_0 ;
 struct amdvi_dte* VAR_1 ;
 struct amdvi_softc* FUNC_2 (size_t) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct amdvi_domain *VAR_3, uint16_t VAR_4, bool VAR_5)
{
 struct amdvi_softc *VAR_6;
 struct amdvi_dte* VAR_7;

 FUNC_0(VAR_3, ("domain is NULL for pci_rid:0x%x\n", VAR_4));

 VAR_6 = FUNC_2(VAR_4);
 FUNC_0(VAR_6, ("softc is NULL for pci_rid:0x%x\n", VAR_4));

 VAR_7 = &VAR_1[VAR_4];
 VAR_7->sup_second_io_fault = 1;
 VAR_7->sup_all_io_fault = VAR_0;

 VAR_7->dt_valid = 1;
 VAR_7->domain_id = VAR_3->id;

 if (VAR_5) {
  if (VAR_3->ptp) {
   VAR_7->pt_base = FUNC_3(VAR_3->ptp) >> 12;
   VAR_7->pt_level = VAR_2;
  }




  VAR_7->pt_valid = 1;
  VAR_7->read_allow = 1;
  VAR_7->write_allow = 1;
 }
}
