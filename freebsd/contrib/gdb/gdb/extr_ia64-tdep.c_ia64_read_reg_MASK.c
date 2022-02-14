
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONGEST ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,void*,int) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int *,int ,void*,void*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3 (CORE_ADDR VAR_5, void *VAR_6, int VAR_7)
{
  ULONGEST VAR_8;
  FUNC_1 (VAR_3, VAR_0,
     &VAR_8);
  if (VAR_5 >= VAR_8)
    {
      ULONGEST VAR_9;
      FUNC_1 (VAR_3, VAR_1,
         &VAR_9);
      if (VAR_5 < VAR_9)
 {
   FUNC_2 (&VAR_4, VAR_2,
          (void*)&VAR_8, VAR_6, VAR_5 - VAR_8, VAR_7);
   return;
 }
    }
  FUNC_0 (VAR_5, VAR_6, VAR_7);
}
