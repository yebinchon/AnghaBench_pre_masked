
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef size_t u_int ;
struct bhnd_core_desc {scalar_t__ vendor; scalar_t__ device; int * desc; } ;


 struct bhnd_core_desc const* VAR_0 ;

__attribute__((used)) static const struct bhnd_core_desc *
FUNC_0(uint16_t VAR_1, uint16_t VAR_2)
{
 for (u_int VAR_3 = 0; VAR_0[VAR_3].desc != ((void*)0); VAR_3++) {
  if (VAR_0[VAR_3].vendor != VAR_1)
   continue;

  if (VAR_0[VAR_3].device != VAR_2)
   continue;

  return (&VAR_0[VAR_3]);
 }

 return (((void*)0));
}
