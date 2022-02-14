
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bhnd_nvram_tlv {int data; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,size_t,int) ;
 uintptr_t VAR_0 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int,void const**,size_t,int *) ;

__attribute__((used)) static size_t
FUNC_4(struct bhnd_nvram_tlv *VAR_1, void *VAR_2)
{
 const void *VAR_3;
 intptr_t VAR_4;
 size_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_2 != ((void*)0), ("null cookiep"));

 VAR_5 = FUNC_2(VAR_1->data);

 VAR_6 = FUNC_3(VAR_1->data, 0x0, &VAR_3, VAR_5, ((void*)0));
 if (VAR_6)
  FUNC_1("error mapping offset %zu: %d", VAR_5, VAR_6);

 VAR_4 = (const uint8_t *)VAR_2 - (const uint8_t *)VAR_3;
 FUNC_0(VAR_4 >= 0, ("invalid cookiep"));
 FUNC_0((uintptr_t)VAR_4 < VAR_0, ("cookiep > SIZE_MAX)"));
 FUNC_0((uintptr_t)VAR_4 <= VAR_5, ("cookiep > io_size)"));

 return ((size_t)VAR_4);
}
