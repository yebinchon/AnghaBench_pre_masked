
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct jedec_dimm_tsod_dev {scalar_t__ vendor_id; scalar_t__ device_id; char const* description; } ;


 struct jedec_dimm_tsod_dev* VAR_0 ;
 int FUNC_0 (struct jedec_dimm_tsod_dev*) ;

__attribute__((used)) static const char *
FUNC_1(uint16_t VAR_1, uint16_t VAR_2)
{
 const struct jedec_dimm_tsod_dev *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_3 = &VAR_0[VAR_4];
  if ((VAR_1 == VAR_3->vendor_id) && ((VAR_2 >> 8) == VAR_3->device_id)) {
   return (VAR_3->description);
  }
 }




 if ((VAR_2 >> 8) == 0x22) {
  return ("TSE2004av compliant TSOD");
 }

 return (((void*)0));
}
