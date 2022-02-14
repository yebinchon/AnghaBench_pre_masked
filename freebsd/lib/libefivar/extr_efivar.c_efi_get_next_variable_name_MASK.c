
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_var_ioc {size_t namesize; int vendor; scalar_t__* name; } ;
typedef int efi_guid_t ;
typedef scalar_t__ efi_char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct efi_var_ioc*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,struct efi_var_ioc*) ;
 scalar_t__* FUNC_4 (size_t) ;
 void* FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__*,char**) ;
 int FUNC_8 (char*,scalar_t__**,size_t*) ;

int
FUNC_9(efi_guid_t **VAR_5, char **VAR_6)
{
 struct efi_var_ioc VAR_7;
 int VAR_8;
 static efi_char *VAR_9;
 static size_t VAR_10 = 256 * sizeof(efi_char);
 static efi_guid_t VAR_11;
 size_t VAR_12;

 if (FUNC_0() == -1)
  return -1;






 if (VAR_9 == ((void*)0))
  VAR_9 = FUNC_4(VAR_10 + sizeof(efi_char));

again:
 FUNC_1(&VAR_7);
 VAR_7.name = VAR_9;
 VAR_7.namesize = VAR_10;
 if (*VAR_6 == ((void*)0)) {
  *VAR_9 = 0;

 } else {
  VAR_8 = FUNC_8(*VAR_6, &VAR_7.name, &VAR_12);
  if (VAR_8 != 0)
   goto errout;
  VAR_7.vendor = **VAR_5;
 }
 VAR_8 = FUNC_3(VAR_3, VAR_0, &VAR_7);
 if (VAR_8 == 0 && VAR_7.name == ((void*)0)) {




  void *VAR_13 = FUNC_5(VAR_9, VAR_7.namesize + sizeof(efi_char));
  if (VAR_13 == ((void*)0)) {
   VAR_8 = -1;
   VAR_4 = VAR_2;
   goto done;
  }
  VAR_10 = VAR_7.namesize;
  VAR_9 = VAR_13;
  goto again;
 }

 if (VAR_8 == 0) {
  FUNC_2(*VAR_6);
  *VAR_6 = ((void*)0);
  VAR_7.name[VAR_7.namesize / sizeof(efi_char)] = 0;
  VAR_8 = FUNC_7(VAR_7.name, VAR_6);
  if (VAR_8 != 0)
   goto errout;
  VAR_11 = VAR_7.vendor;
  *VAR_5 = &VAR_11;
 }
errout:



done:
 if (VAR_8 != 0 && VAR_4 == VAR_1) {
  VAR_4 = 0;
  FUNC_2(*VAR_6);
  return 0;
 }

 return (FUNC_6(VAR_8));
}
