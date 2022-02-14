
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_fd_data {int fd; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,char*) ;
 int FUNC_1 (struct archive*,struct write_fd_data*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;

int
FUNC_4(struct archive *VAR_6, int VAR_7)
{
 struct write_fd_data *VAR_8;

 VAR_8 = (struct write_fd_data *)FUNC_2(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_1, "No memory");
  return (VAR_0);
 }
 VAR_8->fd = VAR_7;



 return (FUNC_1(VAR_6, VAR_8,
      VAR_4, VAR_5, VAR_3));
}
