
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bitmap ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,unsigned int) ;

__attribute__((used)) static inline bitmap
FUNC_2 (bitmap *VAR_0, unsigned int VAR_1, int VAR_2, int VAR_3)
{
  bitmap VAR_4 = VAR_0[VAR_1];
  if (!VAR_4)
    {
      unsigned int VAR_5;
      unsigned int VAR_6 = VAR_2 + VAR_3;;
      VAR_4 = FUNC_0 (((void*)0));
      VAR_0[VAR_1] = VAR_4;
      for (VAR_5 = VAR_2; VAR_5 < VAR_6; VAR_5++)
 FUNC_1 (VAR_4, VAR_5);
    }
  return VAR_4;
}
