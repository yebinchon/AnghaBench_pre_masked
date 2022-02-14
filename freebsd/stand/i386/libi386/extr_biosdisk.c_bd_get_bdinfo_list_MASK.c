
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devsw {scalar_t__ dv_type; } ;
typedef int bdinfo_list_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bdinfo_list_t *
FUNC_0(struct devsw *VAR_6)
{
 if (VAR_6->dv_type == VAR_1)
  return (&VAR_5);
 if (VAR_6->dv_type == VAR_0)
  return (&VAR_3);
 if (VAR_6->dv_type == VAR_2)
  return (&VAR_4);
 return (((void*)0));
}
