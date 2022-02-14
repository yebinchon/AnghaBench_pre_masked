
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t alloc_type ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;

__attribute__((used)) static inline size_t
FUNC_1 (alloc_type *VAR_1,
      size_t VAR_2, size_t VAR_3,
      size_t VAR_4)
{
  size_t VAR_5;
  alloc_type VAR_6;
  int VAR_7;


  VAR_6 = VAR_1[VAR_2++];



  if (VAR_3)
    {
      VAR_7 = FUNC_0 (VAR_6 >> VAR_3);
      if (VAR_7)



 return VAR_7 * VAR_0;


      VAR_5 = (sizeof (alloc_type) * 8 - VAR_3 + 1) * VAR_0;

      if (VAR_5 >= VAR_4)
 return VAR_4;

      VAR_6 = VAR_1[VAR_2++];
    }
  else
    VAR_5 = VAR_0;

  while (VAR_6 == 0)
    {
      VAR_5 += sizeof (alloc_type) * 8 * VAR_0;
      if (VAR_5 >= VAR_4)
 return VAR_4;
      VAR_6 = VAR_1[VAR_2++];
    }

  VAR_7 = FUNC_0 (VAR_6);
  return VAR_5 + (VAR_7 - 1) * VAR_0;
}
