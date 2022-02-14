
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bhnd_nvram_ioptr {size_t size; scalar_t__ ptr; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct bhnd_nvram_ioptr *VAR_1, size_t VAR_2, void **VAR_3,
       size_t VAR_4, size_t *VAR_5)
{
 size_t VAR_6;


 if (VAR_2 > VAR_1->size)
  return (VAR_0);

 VAR_6 = VAR_1->size - VAR_2;
 if (VAR_6 < VAR_4)
  return (VAR_0);



 *VAR_3 = ((uint8_t *)VAR_1->ptr) + VAR_2;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_6;

 return (0);
}
