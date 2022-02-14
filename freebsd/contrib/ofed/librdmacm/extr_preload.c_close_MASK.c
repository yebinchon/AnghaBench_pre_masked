
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd_info {int dupfd; scalar_t__ type; int fd; int refcnt; } ;
struct TYPE_2__ {int (* close ) (int) ;} ;


 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct fd_info*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 struct fd_info* FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

int FUNC_9(int VAR_3)
{
 struct fd_info *VAR_4;
 int VAR_5;

 FUNC_4();
 VAR_4 = FUNC_3(&VAR_1, VAR_3);
 if (!VAR_4)
  return VAR_2.close(VAR_3);

 if (VAR_4->dupfd != -1) {
  VAR_5 = FUNC_9(VAR_4->dupfd);
  if (VAR_5)
   return VAR_5;
 }

 if (FUNC_0(&VAR_4->refcnt, 1) != 1)
  return 0;

 FUNC_2(&VAR_1, VAR_3);
 VAR_2.close(VAR_3);
 VAR_5 = (VAR_4->type == VAR_0) ? FUNC_5(VAR_4->fd) : VAR_2.close(VAR_4->fd);
 FUNC_1(VAR_4);
 return VAR_5;
}
