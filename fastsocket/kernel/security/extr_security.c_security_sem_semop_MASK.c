
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sembuf {int dummy; } ;
struct sem_array {int dummy; } ;
struct TYPE_2__ {int (* sem_semop ) (struct sem_array*,struct sembuf*,unsigned int,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct sem_array*,struct sembuf*,unsigned int,int) ;

int FUNC_1(struct sem_array *VAR_1, struct sembuf *VAR_2,
   unsigned VAR_3, int VAR_4)
{
 return VAR_0->sem_semop(VAR_1, VAR_2, VAR_3, VAR_4);
}
