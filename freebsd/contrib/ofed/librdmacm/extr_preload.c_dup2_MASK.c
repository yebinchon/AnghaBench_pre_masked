
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd_info {scalar_t__ state; int dupfd; int refcnt; int type; int fd; } ;
struct TYPE_2__ {int (* dup2 ) (int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 struct fd_info* FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 struct fd_info* FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,struct fd_info*) ;
 int FUNC_10 () ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_1__ VAR_6 ;
 int FUNC_13 (int,int) ;

int FUNC_14(int VAR_7, int VAR_8)
{
 struct fd_info *VAR_9, *VAR_10;
 int VAR_11;

 FUNC_10();
 VAR_9 = FUNC_8(&VAR_4, VAR_7);
 if (VAR_9) {
  if (VAR_9->state == VAR_3)
   FUNC_7(VAR_7);
  else if (VAR_9->state == VAR_2)
   FUNC_6(VAR_7);
 }

 VAR_10 = FUNC_8(&VAR_4, VAR_8);
 if (VAR_10) {

  if (FUNC_2(&VAR_10->refcnt) > 1)
   return FUNC_0(VAR_0);
  FUNC_5(VAR_8);
 }

 VAR_11 = VAR_6.dup2(VAR_7, VAR_8);
 if (!VAR_9 || VAR_11 != VAR_8)
  return VAR_11;

 VAR_10 = FUNC_4(1, sizeof(*VAR_10));
 if (!VAR_10) {
  FUNC_5(VAR_8);
  return FUNC_0(VAR_1);
 }

 FUNC_11(&VAR_5);
 FUNC_9(&VAR_4, VAR_8, VAR_10);
 FUNC_12(&VAR_5);

 VAR_10->fd = VAR_9->fd;
 VAR_10->type = VAR_9->type;
 if (VAR_9->dupfd != -1) {
  VAR_10->dupfd = VAR_9->dupfd;
  VAR_9 = FUNC_8(&VAR_4, VAR_9->dupfd);
 } else {
  VAR_10->dupfd = VAR_7;
 }
 FUNC_3(&VAR_10->refcnt, 1);
 FUNC_1(&VAR_9->refcnt, 1);
 return VAR_8;
}
