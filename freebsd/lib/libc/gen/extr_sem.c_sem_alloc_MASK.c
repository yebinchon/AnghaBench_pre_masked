
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct sem {int dummy; } ;
typedef int semid_t ;
typedef TYPE_1__* sem_t ;
struct TYPE_3__ {int syssem; int semid; int magic; scalar_t__ nwaiters; scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static sem_t
FUNC_1(unsigned int VAR_5, semid_t VAR_6, int VAR_7)
{
 sem_t VAR_8;

 if (VAR_5 > VAR_3) {
  VAR_4 = VAR_0;
  return (((void*)0));
 }

 VAR_8 = (sem_t)FUNC_0(sizeof(struct sem));
 if (VAR_8 == ((void*)0)) {
  VAR_4 = VAR_1;
  return (((void*)0));
 }

 VAR_8->count = (u_int32_t)VAR_5;
 VAR_8->nwaiters = 0;
 VAR_8->magic = VAR_2;
 VAR_8->semid = VAR_6;
 VAR_8->syssem = VAR_7;
 return (VAR_8);
}
