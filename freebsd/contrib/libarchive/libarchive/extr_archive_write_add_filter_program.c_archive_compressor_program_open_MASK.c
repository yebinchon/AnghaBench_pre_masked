
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int cmd; int pdata; } ;
struct archive_write_filter {scalar_t__ data; } ;


 int FUNC_0 (struct archive_write_filter*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct archive_write_filter *VAR_0)
{
 struct private_data *VAR_1 = (struct private_data *)VAR_0->data;

 return FUNC_0(VAR_0, VAR_1->pdata, VAR_1->cmd);
}
