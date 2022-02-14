
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_tz_softc {int tz_insane_tmp_notified; int tz_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (int ,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct acpi_tz_softc *VAR_2, int *VAR_3, char *VAR_4)
{
    if (*VAR_3 != -1 && (*VAR_3 < VAR_0 || *VAR_3 > VAR_0 + 2000)) {
 if (VAR_4 != VAR_1 || !VAR_2->tz_insane_tmp_notified) {
     FUNC_1(VAR_2->tz_dev, "%s value is absurd, ignored (%d.%dC)\n",
     VAR_4, FUNC_0(*VAR_3));


     if (VAR_4 == VAR_1)
  VAR_2->tz_insane_tmp_notified = 1;
 }
 *VAR_3 = -1;
 return;
    }


    if (VAR_4 == VAR_1)
 VAR_2->tz_insane_tmp_notified = 0;
}
