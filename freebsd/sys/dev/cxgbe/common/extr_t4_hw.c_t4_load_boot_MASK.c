
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int const u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {unsigned int sf_size; unsigned int sf_nsec; } ;
struct adapter {TYPE_1__ params; } ;
struct TYPE_5__ {scalar_t__ device_id; scalar_t__ vendor_id; scalar_t__ signature; } ;
typedef TYPE_2__ pcir_data_t ;
struct TYPE_6__ {scalar_t__ signature; scalar_t__ pcir_offset; } ;
typedef TYPE_3__ pci_exp_rom_header_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*,char*,...) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int const*) ;
 int FUNC_5 (struct adapter*,unsigned int,unsigned int) ;
 int FUNC_6 (struct adapter*,int ,int*) ;
 int FUNC_7 (struct adapter*,unsigned int,scalar_t__,int const*,int ) ;

int FUNC_8(struct adapter *VAR_11, u8 *VAR_12,
   unsigned int VAR_13, unsigned int VAR_14)
{
 pci_exp_rom_header_t *VAR_15;
 int VAR_16 ;
 pcir_data_t *VAR_17;
 int VAR_18, VAR_19;
 uint16_t VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22 = (VAR_13 * 1024 );
 unsigned int VAR_23 = VAR_11->params.sf_size / VAR_11->params.sf_nsec;




 if ((VAR_22 + VAR_14) >> 16 > VAR_6) {
  FUNC_0(VAR_11, "boot image encroaching on firmware region\n");
  return -VAR_3;
 }






 VAR_21 = FUNC_1(VAR_14 ? VAR_14 : VAR_5,
   VAR_23);
 VAR_18 = FUNC_5(VAR_11, VAR_22 >> 16,
         (VAR_22 >> 16) + VAR_21 - 1);





 if (VAR_18 || (VAR_14 == 0))
  goto out;


 VAR_15 = (pci_exp_rom_header_t *)VAR_12;
 VAR_16 = FUNC_2(*(u16 *)VAR_15->pcir_offset);

 VAR_17 = (pcir_data_t *) &VAR_12[VAR_16];






 if (VAR_14 < VAR_1 || VAR_14 > VAR_0) {
  FUNC_0(VAR_11, "boot image too small/large\n");
  return -VAR_3;
 }





 if (FUNC_2(*(u16*)VAR_15->signature) != VAR_2 ) {
  FUNC_0(VAR_11, "Boot image missing signature\n");
  return -VAR_4;
 }




 if (FUNC_3(*(u32*)VAR_17->signature) != VAR_7) {
  FUNC_0(VAR_11, "PCI header missing signature\n");
  return -VAR_4;
 }




 if (FUNC_2(*(u16*)VAR_17->vendor_id) != VAR_10) {
  FUNC_0(VAR_11, "Vendor ID missing signature\n");
  return -VAR_4;
 }





 FUNC_6(VAR_11, VAR_8, &VAR_20);

 VAR_20 = VAR_20 & 0xf0ff;




 if (FUNC_2(*(u16*)VAR_17->device_id) != VAR_20) {




  FUNC_4(VAR_20, VAR_12);
 }







 VAR_19 = VAR_22;
 for (VAR_14 -= VAR_9; VAR_14; VAR_14 -= VAR_9) {
  VAR_19 += VAR_9;
  VAR_12 += VAR_9;
  VAR_18 = FUNC_7(VAR_11, VAR_19, VAR_9, VAR_12, 0);
  if (VAR_18)
   goto out;
 }

 VAR_18 = FUNC_7(VAR_11, VAR_22, VAR_9,
        (const u8 *)VAR_15, 0);

out:
 if (VAR_18)
  FUNC_0(VAR_11, "boot image download failed, error %d\n", VAR_18);
 return VAR_18;
}
