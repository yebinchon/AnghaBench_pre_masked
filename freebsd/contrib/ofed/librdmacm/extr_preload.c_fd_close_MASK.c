
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd_info {int fd; int type; } ;
typedef enum fd_type { ____Placeholder_fd_type } fd_type ;
struct TYPE_2__ {int (* close ) (int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fd_info*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 struct fd_info* FUNC_2 (int *,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static enum fd_type FUNC_4(int VAR_3, int *VAR_4)
{
 struct fd_info *VAR_5;
 enum fd_type VAR_6;

 VAR_5 = FUNC_2(&VAR_1, VAR_3);
 if (VAR_5) {
  FUNC_1(&VAR_1, VAR_3);
  *VAR_4 = VAR_5->fd;
  VAR_6 = VAR_5->type;
  VAR_2.close(VAR_3);
  FUNC_0(VAR_5);
 } else {
  *VAR_4 = VAR_3;
  VAR_6 = VAR_0;
 }
 return VAR_6;
}
