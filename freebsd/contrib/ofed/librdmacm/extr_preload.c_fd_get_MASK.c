
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_info {int fd; int type; } ;
typedef enum fd_type { ____Placeholder_fd_type } fd_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct fd_info* FUNC_0 (int *,int) ;

__attribute__((used)) static inline enum fd_type FUNC_1(int VAR_2, int *VAR_3)
{
 struct fd_info *VAR_4;

 VAR_4 = FUNC_0(&VAR_1, VAR_2);
 if (VAR_4) {
  *VAR_3 = VAR_4->fd;
  return VAR_4->type;

 } else {
  *VAR_3 = VAR_2;
  return VAR_0;
 }
}
