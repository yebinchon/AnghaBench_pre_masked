
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct efi_var_ioc {size_t datasize; int name; int attrib; int * data; int vendor; int namesize; } ;
typedef int efi_guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct efi_var_ioc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct efi_var_ioc*) ;
 int FUNC_4 (char const*,int *,int *) ;

int
FUNC_5(efi_guid_t VAR_2, const char *VAR_3,
    uint8_t *VAR_4, size_t VAR_5, uint32_t VAR_6)
{
 struct efi_var_ioc VAR_7;
 int VAR_8;

 if (FUNC_0() == -1)
  return -1;

 FUNC_1(&VAR_7);
 VAR_8 = FUNC_4(VAR_3, &VAR_7.name, &VAR_7.namesize);
 if (VAR_8 != 0)
  goto errout;
 VAR_7.vendor = VAR_2;
 VAR_7.data = VAR_4;
 VAR_7.datasize = VAR_5;
 VAR_7.attrib = VAR_6;
 VAR_8 = FUNC_3(VAR_1, VAR_0, &VAR_7);
errout:
 FUNC_2(VAR_7.name);

 return VAR_8;
}
