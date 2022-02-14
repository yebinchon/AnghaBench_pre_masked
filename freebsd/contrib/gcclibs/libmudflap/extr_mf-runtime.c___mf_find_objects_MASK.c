
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __mf_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (uintptr_t,uintptr_t,int **,unsigned int,int) ;

unsigned
FUNC_1 (uintptr_t VAR_2, uintptr_t VAR_3,
                   __mf_object_t **VAR_4, unsigned VAR_5)
{
  int VAR_6;
  unsigned VAR_7 = 0;


  for (VAR_6 = VAR_1; VAR_6 <= VAR_0; VAR_6++)
    {
      unsigned VAR_8 = FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
      if (VAR_8 > VAR_5)
        {
          VAR_5 = 0;
          VAR_4 = ((void*)0);
        }
      else
        {
          VAR_5 -= VAR_8;
          VAR_4 += VAR_8;
        }
      VAR_7 += VAR_8;
    }

  return VAR_7;
}
