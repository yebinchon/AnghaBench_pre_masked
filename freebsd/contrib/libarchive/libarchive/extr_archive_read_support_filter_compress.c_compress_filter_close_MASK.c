
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {struct private_data* out_block; } ;
struct archive_read_filter {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct private_data*) ;

__attribute__((used)) static int
FUNC_1(struct archive_read_filter *VAR_1)
{
 struct private_data *VAR_2 = (struct private_data *)VAR_1->data;

 FUNC_0(VAR_2->out_block);
 FUNC_0(VAR_2);
 return (VAR_0);
}
