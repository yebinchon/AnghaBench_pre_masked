
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct efi_var_ioc {int datasize; int name; int attrib; int * data; int vendor; int namesize; } ;
typedef int efi_guid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct efi_var_ioc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct efi_var_ioc*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,int *,int *) ;

int
FUNC_6(efi_guid_t VAR_2, const char *VAR_3,
    uint8_t **VAR_4, size_t *VAR_5, uint32_t *VAR_6)
{
 struct efi_var_ioc VAR_7;
 int VAR_8;
 static uint8_t VAR_9[1024*32];

 if (FUNC_0() == -1)
  return -1;

 FUNC_1(&VAR_7);
 VAR_8 = FUNC_5(VAR_3, &VAR_7.name, &VAR_7.namesize);
 if (VAR_8 != 0)
  goto errout;
 VAR_7.vendor = VAR_2;
 VAR_7.data = VAR_9;
 VAR_7.datasize = sizeof(VAR_9);
 VAR_8 = FUNC_3(VAR_1, VAR_0, &VAR_7);
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7.datasize;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_9;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_7.attrib;
errout:
 FUNC_2(VAR_7.name);

 return FUNC_4(VAR_8);
}
