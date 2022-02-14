
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pci_dev; } ;
typedef TYPE_1__ qla_host_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int,void*,int ,int ,char*,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int,scalar_t__*,scalar_t__,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6(qla_host_t *VAR_7)
{
        device_t VAR_8 = VAR_7->pci_dev;

 FUNC_1(FUNC_4(VAR_8),
  FUNC_3(FUNC_5(VAR_8)),
  VAR_3, "version", VAR_0,
  VAR_6, 0, "Driver Version");

 VAR_4 = 0;
        FUNC_2(FUNC_4(VAR_8),
                FUNC_3(FUNC_5(VAR_8)),
                VAR_3, "debug", VAR_1,
                &VAR_4, VAR_4, "Debug Level");

        FUNC_0(FUNC_4(VAR_8),
                FUNC_3(FUNC_5(VAR_8)),
                VAR_3, "drvr_stats", VAR_2 | VAR_1,
                (void *)VAR_7, 0,
                VAR_5, "I", "Driver Maintained Statistics");

        return;
}
