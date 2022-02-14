
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_info {scalar_t__ state; int fd; int type; } ;
typedef enum fd_type { ____Placeholder_fd_type } fd_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 struct fd_info* FUNC_2 (int *,int) ;

__attribute__((used)) static inline enum fd_type FUNC_3(int VAR_4, int *VAR_5)
{
 struct fd_info *VAR_6;

 VAR_6 = FUNC_2(&VAR_3, VAR_4);
 if (VAR_6) {
  if (VAR_6->state == VAR_1)
   FUNC_1(VAR_4);
  else if (VAR_6->state == VAR_0)
   FUNC_0(VAR_4);
  *VAR_5 = VAR_6->fd;
  return VAR_6->type;

 } else {
  *VAR_5 = VAR_4;
  return VAR_2;
 }
}
