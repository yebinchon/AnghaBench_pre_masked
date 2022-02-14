
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {char** VendorDefinedData; } ;
typedef TYPE_1__ VENDOR_DEVICE_PATH_WITH_DATA ;
struct TYPE_5__ {int Header; int Guid; } ;
typedef TYPE_2__ VENDOR_DEVICE_PATH ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char**,char*,char const*,char*,...) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int const*,char**,int*) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_1, VENDOR_DEVICE_PATH *VAR_2, char *VAR_3)
{
 uint32_t VAR_4 = FUNC_0(&VAR_2->Header) - sizeof(*VAR_2);
 VENDOR_DEVICE_PATH_WITH_DATA *VAR_5 = (VENDOR_DEVICE_PATH_WITH_DATA *)VAR_2;
 char *VAR_6, *VAR_7, *VAR_8;
 char *VAR_9;
 int VAR_10;

 FUNC_4((const uuid_t *)(void *)&VAR_2->Guid, &VAR_9, &VAR_10);
 if (VAR_10 != VAR_0)
  return (((void*)0));

 VAR_7 = FUNC_2(VAR_3);
 VAR_10 = FUNC_1(&VAR_8, "%sVendor(%s)[%lx:", VAR_1, VAR_9, VAR_4);
 FUNC_3(VAR_9);
 if (VAR_10 < 0)
  return (((void*)0));

 if (FUNC_0(&VAR_2->Header) > sizeof(*VAR_2)) {
  for (uint32_t VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   VAR_10 = FUNC_1(&VAR_6, "%s%2s", VAR_8,
       VAR_5->VendorDefinedData[VAR_11]);
   if (VAR_10 < 0) {
    FUNC_3(VAR_7);
    FUNC_3(VAR_8);
    return (((void*)0));
   }
   FUNC_3(VAR_8);
   VAR_8 = VAR_6;
  }
 }

 if (FUNC_1(&VAR_6, "%s]%s", VAR_8, VAR_7) < 0)
  VAR_6 = ((void*)0);
 FUNC_3(VAR_8);
 FUNC_3(VAR_7);
 return (VAR_6);
}
