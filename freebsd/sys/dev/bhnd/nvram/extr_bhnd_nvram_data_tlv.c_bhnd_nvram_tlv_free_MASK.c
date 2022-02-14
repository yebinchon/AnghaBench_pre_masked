
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_tlv {int * data; } ;
struct bhnd_nvram_data {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct bhnd_nvram_data *VAR_0)
{
 struct bhnd_nvram_tlv *VAR_1 = (struct bhnd_nvram_tlv *)VAR_0;
 if (VAR_1->data != ((void*)0))
  FUNC_0(VAR_1->data);
}
