
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_fd_data {struct read_fd_data* buffer; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct read_fd_data*) ;

__attribute__((used)) static int
FUNC_1(struct archive *VAR_1, void *VAR_2)
{
 struct read_fd_data *VAR_3 = (struct read_fd_data *)VAR_2;

 (void)VAR_1;
 FUNC_0(VAR_3->buffer);
 FUNC_0(VAR_3);
 return (VAR_0);
}
