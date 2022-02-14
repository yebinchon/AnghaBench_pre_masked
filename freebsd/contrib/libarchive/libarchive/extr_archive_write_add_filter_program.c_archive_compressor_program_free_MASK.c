
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int pdata; int description; struct private_data* cmd; } ;
struct archive_write_filter {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct private_data*) ;

__attribute__((used)) static int
FUNC_3(struct archive_write_filter *VAR_1)
{
 struct private_data *VAR_2 = (struct private_data *)VAR_1->data;

 if (VAR_2) {
  FUNC_2(VAR_2->cmd);
  FUNC_1(&VAR_2->description);
  FUNC_0(VAR_2->pdata);
  FUNC_2(VAR_2);
  VAR_1->data = ((void*)0);
 }
 return (VAR_0);
}
