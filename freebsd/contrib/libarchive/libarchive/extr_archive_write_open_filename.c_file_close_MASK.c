
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_file_data {scalar_t__ fd; int filename; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct write_file_data*) ;

__attribute__((used)) static int
FUNC_3(struct archive *VAR_1, void *VAR_2)
{
 struct write_file_data *VAR_3 = (struct write_file_data *)VAR_2;

 (void)VAR_1;

 if (VAR_3->fd >= 0)
  FUNC_1(VAR_3->fd);

 FUNC_0(&VAR_3->filename);
 FUNC_2(VAR_3);
 return (VAR_0);
}
