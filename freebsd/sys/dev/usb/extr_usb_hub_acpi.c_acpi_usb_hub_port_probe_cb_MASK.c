
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
typedef size_t uint64_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct acpi_uhub_softc {TYPE_2__* port; scalar_t__ nports; } ;
typedef void* device_t ;
typedef int buf ;
typedef int UINT32 ;
struct TYPE_6__ {int upc; int handle; } ;
struct TYPE_5__ {int Valid; size_t Address; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;
typedef TYPE_1__ ACPI_DEVICE_INFO ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sysctl_oid* FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,TYPE_2__*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_5 (struct sysctl_oid*) ;
 int FUNC_6 (void*,size_t,int ,struct sysctl_oid_list*) ;
 int FUNC_7 (void*,size_t,int ,struct sysctl_oid_list*) ;
 int VAR_5 ;
 struct acpi_uhub_softc* FUNC_8 (void*) ;
 struct sysctl_ctx_list* FUNC_9 (void*) ;
 struct sysctl_oid* FUNC_10 (void*) ;
 int FUNC_11 (char*,int,char*,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_12(ACPI_HANDLE VAR_6, UINT32 VAR_7, void *VAR_8, void **VAR_9)
{
 ACPI_DEVICE_INFO *VAR_10;
 device_t VAR_11 = VAR_8;
 struct acpi_uhub_softc *VAR_12 = FUNC_8(VAR_11);
 UINT32 VAR_13;

 VAR_13 = FUNC_1(VAR_6, &VAR_10);
 if (FUNC_0(VAR_13)) {
  if ((VAR_10->Valid & VAR_0) &&
      (VAR_10->Address > 0) &&
      (VAR_10->Address <= (uint64_t)VAR_12->nports)) {
   char VAR_14[] = "portXXX";
   struct sysctl_ctx_list *VAR_15 = FUNC_9(VAR_11);
   struct sysctl_oid *VAR_16;
   struct sysctl_oid_list *VAR_17;

   FUNC_11(VAR_14, sizeof(VAR_14), "port%ju",
       (uintmax_t)VAR_10->Address);
   VAR_16 = FUNC_3(VAR_15,
           FUNC_5(
            FUNC_10(VAR_11)),
           VAR_4, VAR_14, VAR_2,
           ((void*)0), "port nodes");
   VAR_17 = FUNC_5(VAR_16);
   VAR_12->port[VAR_10->Address - 1].handle = VAR_6;
   VAR_12->port[VAR_10->Address - 1].upc = 0xffffffff;
   FUNC_7(VAR_11, VAR_10->Address, VAR_6, VAR_17);
   FUNC_6(VAR_11, VAR_10->Address, VAR_6, VAR_17);
   FUNC_4(FUNC_9(VAR_11),
     VAR_17, VAR_4, "info",
     VAR_3 | VAR_2,
     &VAR_12->port[VAR_10->Address - 1], 0,
     VAR_5,
     "A", "Port information");
  }
  FUNC_2(VAR_10);
 }
 return (VAR_1);
}
