
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(void)
{
    FUNC_1(VAR_7, "%s: ", VAR_6);
    if (VAR_4 == 1)
 FUNC_1(VAR_7, "1 shift/reduce conflict");
    else if (VAR_4 > 1)
 FUNC_1(VAR_7, "%d shift/reduce conflicts", VAR_4);

    if (VAR_4 && VAR_2)
 FUNC_1(VAR_7, ", ");

    if (VAR_2 == 1)
 FUNC_1(VAR_7, "1 reduce/reduce conflict");
    else if (VAR_2 > 1)
 FUNC_1(VAR_7, "%d reduce/reduce conflicts", VAR_2);

    FUNC_1(VAR_7, ".\n");

    if (VAR_3 >= 0 && VAR_4 != VAR_3)
    {
 FUNC_1(VAR_7, "%s: ", VAR_6);
 FUNC_1(VAR_7, "expected %d shift/reduce conflict%s.\n",
  VAR_3, FUNC_0(VAR_3));
 VAR_5 = VAR_0;
    }
    if (VAR_1 >= 0 && VAR_2 != VAR_1)
    {
 FUNC_1(VAR_7, "%s: ", VAR_6);
 FUNC_1(VAR_7, "expected %d reduce/reduce conflict%s.\n",
  VAR_1, FUNC_0(VAR_1));
 VAR_5 = VAR_0;
    }
}
