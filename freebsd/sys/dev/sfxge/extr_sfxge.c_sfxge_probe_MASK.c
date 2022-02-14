
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int efx_family_t ;
typedef int device_t ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int*,unsigned int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5)
{
 uint16_t VAR_6;
 uint16_t VAR_7;
 efx_family_t VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = FUNC_3(VAR_5);

 FUNC_0(VAR_5, "PCI ID %04x:%04x", VAR_6, VAR_7);
 VAR_10 = FUNC_2(VAR_6, VAR_7, &VAR_8, &VAR_9);
 if (VAR_10 != 0) {
  FUNC_0(VAR_5, "efx_family fail %d", VAR_10);
  return (VAR_4);
 }

 if (VAR_8 == VAR_3) {
  FUNC_1(VAR_5, "Solarflare SFC9000 family");
  return (0);
 }

 if (VAR_8 == VAR_0) {
  FUNC_1(VAR_5, "Solarflare SFC9100 family");
  return (0);
 }

 if (VAR_8 == VAR_1) {
  FUNC_1(VAR_5, "Solarflare SFC9200 family");
  return (0);
 }

 if (VAR_8 == VAR_2) {
  FUNC_1(VAR_5, "Solarflare SFC9250 family");
  return (0);
 }

 FUNC_0(VAR_5, "impossible controller family %d", VAR_8);
 return (VAR_4);
}
