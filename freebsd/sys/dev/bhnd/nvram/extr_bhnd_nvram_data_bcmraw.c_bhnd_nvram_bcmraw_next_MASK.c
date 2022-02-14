
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_data {int dummy; } ;
struct bhnd_nvram_bcmraw {char* data; } ;


 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static const char *
FUNC_1(struct bhnd_nvram_data *VAR_0, void **VAR_1)
{
 struct bhnd_nvram_bcmraw *VAR_2;
 const char *VAR_3;

 VAR_2 = (struct bhnd_nvram_bcmraw *)VAR_0;

 if (*VAR_1 == ((void*)0)) {

  VAR_3 = VAR_2->data;
 } else {

  VAR_3 = *VAR_1;
  VAR_3 += FUNC_0(VAR_3) + 1;
  VAR_3 += FUNC_0(VAR_3) + 1;
 }


 if (*VAR_3 == '\0')
  return (((void*)0));

 *VAR_1 = (void *)(uintptr_t)VAR_3;
 return (VAR_3);
}
