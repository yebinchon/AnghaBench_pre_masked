
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
typedef scalar_t__ LONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct target_ops*,int ,int *,void*,int ,scalar_t__) ;

void
FUNC_2 (struct target_ops *VAR_2, CORE_ADDR VAR_3, void *VAR_4,
     LONGEST VAR_5)
{
  if (FUNC_1 (VAR_2, VAR_1, ((void*)0), VAR_4, VAR_3, VAR_5)
      != VAR_5)
    FUNC_0 (VAR_0, VAR_3);
}
