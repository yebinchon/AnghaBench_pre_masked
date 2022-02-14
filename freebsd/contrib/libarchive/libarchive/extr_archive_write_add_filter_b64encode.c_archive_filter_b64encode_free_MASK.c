
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_b64encode {int encoded_buff; int name; } ;
struct archive_write_filter {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct private_b64encode*) ;

__attribute__((used)) static int
FUNC_2(struct archive_write_filter *VAR_1)
{
 struct private_b64encode *VAR_2 = (struct private_b64encode *)VAR_1->data;

 FUNC_0(&VAR_2->name);
 FUNC_0(&VAR_2->encoded_buff);
 FUNC_1(VAR_2);
 return (VAR_0);
}
