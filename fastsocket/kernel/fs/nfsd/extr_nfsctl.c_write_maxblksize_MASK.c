
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ sv_nrthreads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_6, char *VAR_7, size_t VAR_8)
{
 char *VAR_9 = VAR_7;
 if (VAR_8 > 0) {
  int VAR_10;
  int VAR_11 = FUNC_0(&VAR_9, &VAR_10);
  if (VAR_11)
   return VAR_11;



  if (VAR_10 < 1024)
   VAR_10 = 1024;
  if (VAR_10 > VAR_1)
   VAR_10 = VAR_1;
  VAR_10 &= ~(1024-1);
  FUNC_1(&VAR_4);
  if (VAR_5 && VAR_5->sv_nrthreads) {
   FUNC_2(&VAR_4);
   return -VAR_0;
  }
  VAR_3 = VAR_10;
  FUNC_2(&VAR_4);
 }

 return FUNC_3(VAR_7, VAR_2, "%d\n",
       VAR_3);
}
