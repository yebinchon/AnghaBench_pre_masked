
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sem_array {int dummy; } ;
struct TYPE_2__ {int (* sem_associate ) (struct sem_array*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct sem_array*,int) ;

int FUNC_1(struct sem_array *VAR_1, int VAR_2)
{
 return VAR_0->sem_associate(VAR_1, VAR_2);
}
