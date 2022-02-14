
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int fd; } ;
struct timeval {int dummy; } ;
struct vm_stats {int cpuid; int num_entries; int * statbuf; struct timeval tv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct vm_stats*) ;

uint64_t *
FUNC_1(struct vmctx *VAR_1, int VAR_2, struct timeval *VAR_3,
      int *VAR_4)
{
 int VAR_5;

 static struct vm_stats VAR_6;

 VAR_6.cpuid = VAR_2;

 VAR_5 = FUNC_0(VAR_1->fd, VAR_0, &VAR_6);
 if (VAR_5 == 0) {
  if (VAR_4)
   *VAR_4 = VAR_6.num_entries;
  if (VAR_3)
   *VAR_3 = VAR_6.tv;
  return (VAR_6.statbuf);
 } else
  return (((void*)0));
}
