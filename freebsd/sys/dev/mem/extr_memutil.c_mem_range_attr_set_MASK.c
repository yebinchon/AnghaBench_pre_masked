
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mem_range_desc {int dummy; } ;
struct TYPE_5__ {TYPE_1__* mr_op; } ;
struct TYPE_4__ {int (* set ) (TYPE_2__*,struct mem_range_desc*,int*) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,struct mem_range_desc*,int*) ;

int
FUNC_3(struct mem_range_desc *VAR_3, int *VAR_4)
{
 int VAR_5;

 if (VAR_1.mr_op == ((void*)0))
  return (VAR_0);
 FUNC_0(&VAR_2);
 VAR_5 = VAR_1.mr_op->set(&VAR_1, VAR_3, VAR_4);
 FUNC_1(&VAR_2);
 return (VAR_5);
}
