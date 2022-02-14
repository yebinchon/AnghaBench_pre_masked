
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_softc {int acpi_sysctl_tree; } ;
typedef int * device_t ;
struct TYPE_2__ {int state; int rate; int min; int cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int,int ,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_18 ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int ,int ) ;
 struct acpi_softc* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(void)
{
    struct acpi_softc *VAR_19;
    device_t VAR_20;
    int VAR_21;

    FUNC_0(VAR_18);

    VAR_21 = VAR_7;
    VAR_20 = FUNC_8(FUNC_7("acpi"), 0);
    if (VAR_20 == ((void*)0))
 goto out;
    VAR_19 = FUNC_9(VAR_20);

    VAR_21 = FUNC_6(VAR_3, VAR_13,
 ((void*)0));
    if (VAR_21 != 0)
 goto out;
    VAR_21 = FUNC_6(VAR_0, VAR_13,
 ((void*)0));
    if (VAR_21 != 0)
 goto out;
    VAR_21 = FUNC_6(VAR_1, VAR_13, ((void*)0));
    if (VAR_21 != 0)
 goto out;
    VAR_21 = FUNC_6(VAR_2, VAR_13, ((void*)0));
    if (VAR_21 != 0)
 goto out;

    FUNC_10(&VAR_15);
    VAR_16 = FUNC_2(&VAR_15,
 FUNC_4(VAR_19->acpi_sysctl_tree), VAR_8, "battery", VAR_4,
 0, "battery status and info");
    FUNC_3(&VAR_15,
 FUNC_4(VAR_16),
 VAR_8, "life", VAR_6 | VAR_4,
 &VAR_11.cap, 0, VAR_14, "I",
 "percent capacity remaining");
    FUNC_3(&VAR_15,
 FUNC_4(VAR_16),
 VAR_8, "time", VAR_6 | VAR_4,
 &VAR_11.min, 0, VAR_14, "I",
 "remaining time in minutes");
    FUNC_3(&VAR_15,
 FUNC_4(VAR_16),
 VAR_8, "rate", VAR_6 | VAR_4,
 &VAR_11.rate, 0, VAR_14, "I",
 "present rate in mW");
    FUNC_3(&VAR_15,
 FUNC_4(VAR_16),
 VAR_8, "state", VAR_6 | VAR_4,
 &VAR_11.state, 0, VAR_14, "I",
 "current status flags");
    FUNC_3(&VAR_15,
 FUNC_4(VAR_16),
 VAR_8, "units", VAR_6 | VAR_4,
 ((void*)0), 0, VAR_17, "I", "number of batteries");
    FUNC_1(&VAR_15,
 FUNC_4(VAR_16),
 VAR_8, "info_expire", VAR_5,
 &VAR_12, 0,
 "time in seconds until info is refreshed");

    VAR_10 = VAR_9;

out:
    if (VAR_21 != 0) {
 FUNC_5(VAR_3, VAR_13);
 FUNC_5(VAR_0, VAR_13);
 FUNC_5(VAR_1, VAR_13);
 FUNC_5(VAR_2, VAR_13);
    }
    return (VAR_21);
}
