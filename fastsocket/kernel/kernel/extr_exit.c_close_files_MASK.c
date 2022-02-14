
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int dummy; } ;
struct file {int dummy; } ;
struct fdtable {int max_fds; int * fd; TYPE_1__* open_fds; } ;
struct TYPE_2__ {unsigned long* fds_bits; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct fdtable* FUNC_1 (struct files_struct*) ;
 int FUNC_2 (struct file*,struct files_struct*) ;
 struct file* FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct files_struct * VAR_1)
{
 int VAR_2, VAR_3;
 struct fdtable *VAR_4;

 VAR_3 = 0;






 VAR_4 = FUNC_1(VAR_1);
 for (;;) {
  unsigned long VAR_5;
  VAR_2 = VAR_3 * VAR_0;
  if (VAR_2 >= VAR_4->max_fds)
   break;
  VAR_5 = VAR_4->open_fds->fds_bits[VAR_3++];
  while (VAR_5) {
   if (VAR_5 & 1) {
    struct file * VAR_6 = FUNC_3(&VAR_4->fd[VAR_2], ((void*)0));
    if (VAR_6) {
     FUNC_2(VAR_6, VAR_1);
     FUNC_0();
    }
   }
   VAR_2++;
   VAR_5 >>= 1;
  }
 }
}
