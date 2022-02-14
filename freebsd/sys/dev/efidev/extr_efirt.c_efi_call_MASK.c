
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efirt_callinfo {char* ec_name; int ec_efi_status; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct efirt_callinfo*) ;
 int FUNC_3 (struct efirt_callinfo*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct efirt_callinfo *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0();
 if (VAR_3 != 0)
  return (VAR_3);
 VAR_3 = VAR_1 ? FUNC_2(VAR_2) :
     FUNC_3(VAR_2);
 FUNC_1();
 if (VAR_3 == 0)
  VAR_3 = FUNC_4(VAR_2->ec_efi_status);
 else if (VAR_0)
  FUNC_5("EFI %s call faulted, error %d\n", VAR_2->ec_name, VAR_3);
 return (VAR_3);
}
