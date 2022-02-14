
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef scalar_t__ UINT32 ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;

void
FUNC_4 (
    const char *VAR_0,
    UINT8 *VAR_1,
    UINT32 VAR_2,
    UINT32 VAR_3)
{



    FUNC_2 (VAR_3);
    FUNC_3 ("Vendor%s (", VAR_0);



    FUNC_0 ();
    FUNC_3 (")      // Length = 0x%.2X\n", VAR_2);



    FUNC_2 (VAR_3);
    FUNC_3 ("{\n");

    FUNC_1 (VAR_3 + 1, VAR_1, VAR_2);

    FUNC_2 (VAR_3);
    FUNC_3 ("}\n");
}
