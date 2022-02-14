
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kwsmatch {size_t* offset; int * size; scalar_t__ index; } ;
struct kwset {int words; scalar_t__ trans; int mind; } ;
typedef scalar_t__ kwset_t ;


 size_t FUNC_0 (scalar_t__,char const*,size_t) ;
 size_t FUNC_1 (scalar_t__,char const*,size_t,struct kwsmatch*) ;

size_t
FUNC_2 (kwset_t VAR_0, char const *VAR_1, size_t VAR_2,
  struct kwsmatch *VAR_3)
{
  struct kwset const *VAR_4 = (struct kwset *) VAR_0;
  if (VAR_4->words == 1 && VAR_4->trans == 0)
    {
      size_t VAR_5 = FUNC_0 (VAR_0, VAR_1, VAR_2);
      if (VAR_3 != 0 && VAR_5 != (size_t) -1)
 {
   VAR_3->index = 0;
   VAR_3->offset[0] = VAR_5;
   VAR_3->size[0] = VAR_4->mind;
 }
      return VAR_5;
    }
  else
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
