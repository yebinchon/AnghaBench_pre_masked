
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct lio_vendor_info {scalar_t__ vendor_id; scalar_t__ device_id; scalar_t__ subdevice_id; scalar_t__ revision_id; size_t index; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct lio_vendor_info* VAR_4 ;
 char** VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6)
{
 struct lio_vendor_info *VAR_7;

 uint16_t VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10;
 uint8_t VAR_11;
 char VAR_12[256];

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 != VAR_3)
  return (VAR_1);

 VAR_9 = FUNC_1(VAR_6);
 VAR_10 = FUNC_3(VAR_6);
 VAR_11 = FUNC_2(VAR_6);

 VAR_7 = VAR_4;
 while (VAR_7->vendor_id) {
  if ((VAR_8 == VAR_7->vendor_id) &&
      (VAR_9 == VAR_7->device_id) &&
      (VAR_10 == VAR_7->subdevice_id) &&
      (VAR_11 == VAR_7->revision_id)) {
   FUNC_5(VAR_12, "%s, Version - %s",
    VAR_5[VAR_7->index], VAR_2);
   FUNC_0(VAR_6, VAR_12);
   return (VAR_0);
  }

  VAR_7++;
 }

 return (VAR_1);
}
