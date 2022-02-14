
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int ,size_t) ;
 void* FUNC_2 (int *,size_t) ;

__attribute__((used)) static void *
FUNC_3 (size_t VAR_2)
{
  void *VAR_3;
  if (!VAR_1)
    {
      FUNC_0 (&VAR_0);
      VAR_1 = 1;
    }
  VAR_3 = FUNC_2 (&VAR_0, VAR_2);
  FUNC_1 (VAR_3, 0, VAR_2);
  return VAR_3;
}
