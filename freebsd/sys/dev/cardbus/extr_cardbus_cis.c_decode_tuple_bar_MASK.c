
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tuple_callbacks {int dummy; } ;
struct cardbus_devinfo {int mprefetchable; int mbelow1mb; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cardbus_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7, device_t VAR_8, int VAR_9,
    int VAR_10, uint8_t *VAR_11, uint32_t VAR_12, uint32_t *VAR_13,
    struct tuple_callbacks *VAR_14, void *VAR_15)
{
 struct cardbus_devinfo *VAR_16 = FUNC_2(VAR_8);
 int VAR_17;
 uint8_t VAR_18;
 uint32_t VAR_19;

 if (VAR_10 != 6) {
  FUNC_3(VAR_7, "CIS BAR length not 6 (%d)\n", VAR_10);
  return (VAR_0);
 }

 VAR_18 = *VAR_11;
 VAR_10 = FUNC_4(*(uint32_t*)(VAR_11 + 2));
 if (VAR_18 & VAR_3)
  VAR_17 = VAR_1;
 else
  VAR_17 = VAR_2;

 VAR_19 = VAR_18 & VAR_4;
 if (VAR_19 == 0) {
  FUNC_3(VAR_7, "Invalid BAR type 0 in CIS\n");
  return (VAR_0);
 } else if (VAR_19 == 7) {

  return (0);
 }


 VAR_19 = FUNC_0(VAR_19 - 1);

 if (VAR_17 == VAR_2) {
  if (VAR_18 & VAR_6)
   VAR_16->mprefetchable |= (1 << FUNC_1(VAR_19));
  if (VAR_18 & VAR_5)
   VAR_16->mbelow1mb |= (1 << FUNC_1(VAR_19));
 }

 return (0);
}
