
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_table {scalar_t__ bcache; } ;


 void const* FUNC_0 (void const*,int,scalar_t__) ;
 int FUNC_1 (void*,void const*,int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static const void *
FUNC_3 (struct macro_table *VAR_0, const void *VAR_1, int VAR_2)
{
  if (VAR_0->bcache)
    return FUNC_0 (VAR_1, VAR_2, VAR_0->bcache);
  else
    {
      void *VAR_3 = FUNC_2 (VAR_2);
      FUNC_1 (VAR_3, VAR_1, VAR_2);
      return VAR_3;
    }
}
