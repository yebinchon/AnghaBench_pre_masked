
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_iores {size_t size; size_t bus_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,size_t) ;

__attribute__((used)) static int
FUNC_1(struct bhnd_nvram_iores *VAR_2, size_t VAR_3,
    size_t *VAR_4)
{

 if (VAR_3 > VAR_2->size)
  return (VAR_1);


 if (VAR_3 == VAR_2->size) {
  *VAR_4 = 0;
  return (0);
 }


 if (VAR_3 % VAR_2->bus_width != 0)
  return (VAR_0);


 *VAR_4 = FUNC_0(*VAR_4, VAR_2->size - VAR_3);
 if (*VAR_4 < VAR_2->bus_width && *VAR_4 % VAR_2->bus_width != 0)
  return (VAR_0);

 return (0);
}
