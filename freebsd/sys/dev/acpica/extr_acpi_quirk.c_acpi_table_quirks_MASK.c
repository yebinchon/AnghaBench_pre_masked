
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xsdt ;
struct acpi_q_rule {char* sig; } ;
struct acpi_q_entry {int quirks; struct acpi_q_rule* match; } ;
typedef int fadt ;
typedef int dsdt ;
typedef int ACPI_TABLE_HEADER ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*,int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 int FUNC_3 (int*) ;
 struct acpi_q_entry* VAR_6 ;
 int FUNC_4 (int *,struct acpi_q_rule const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int ) ;

int
FUNC_8(int *VAR_7)
{
    const struct acpi_q_entry *VAR_8;
    const struct acpi_q_rule *VAR_9;
    ACPI_TABLE_HEADER VAR_10, VAR_11, VAR_12, *VAR_13;
    int VAR_14;


    FUNC_2(VAR_7 != ((void*)0), ("acpi quirks ptr is NULL"));
    FUNC_3(VAR_7);

    if (FUNC_0(FUNC_1(VAR_2, 0, &VAR_10)))
 FUNC_5(&VAR_10, sizeof(VAR_10));
    if (FUNC_0(FUNC_1(VAR_1, 0, &VAR_11)))
 FUNC_5(&VAR_11, sizeof(VAR_11));
    if (FUNC_0(FUNC_1(VAR_3, 0, &VAR_12)))
 FUNC_5(&VAR_12, sizeof(VAR_12));


    for (VAR_8 = VAR_6; VAR_8->match; VAR_8++) {
 VAR_14 = VAR_5;
 for (VAR_9 = VAR_8->match; VAR_9->sig[0] != '\0'; VAR_9++) {
     if (!FUNC_7(VAR_9->sig, "FADT", VAR_0))
  VAR_13 = &VAR_10;
     else if (!FUNC_7(VAR_9->sig, VAR_1, VAR_0))
  VAR_13 = &VAR_11;
     else if (!FUNC_7(VAR_9->sig, VAR_3, VAR_0))
  VAR_13 = &VAR_12;
     else
  FUNC_6("invalid quirk header\n");


     if (FUNC_4(VAR_13, VAR_9) == VAR_4) {
  VAR_14 = VAR_4;
  break;
     }
 }


 if (VAR_14) {
     *VAR_7 = VAR_8->quirks;
     break;
 }
    }

    return (0);
}
