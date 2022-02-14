
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec_prefix {unsigned int alloc; unsigned int num; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned
FUNC_1 (const struct vec_prefix *VAR_0, int VAR_1, bool VAR_2)
{
  unsigned VAR_3 = 0;
  unsigned VAR_4 = 0;

  FUNC_0 (VAR_1 >= 0);

  if (VAR_0)
    {
      VAR_3 = VAR_0->alloc;
      VAR_4 = VAR_0->num;
    }
  else if (!VAR_1)


    return 0;


  FUNC_0 (VAR_3 - VAR_4 < (unsigned) VAR_1);

  if (VAR_2)

    VAR_3 = VAR_4 + VAR_1;
  else
    {

      if (!VAR_3)
 VAR_3 = 4;
      else if (VAR_3 < 16)

 VAR_3 = VAR_3 * 2;
      else

 VAR_3 = (VAR_3 * 3 / 2);


      if (VAR_3 < VAR_4 + VAR_1)
 VAR_3 = VAR_4 + VAR_1;
    }
  return VAR_3;
}
