
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {int dummy; } ;
struct address_space {int * a_ops; struct backing_dev_info* backing_dev_info; int * assoc_mapping; scalar_t__ flags; int * host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct address_space*,int ) ;

void FUNC_1(struct address_space *VAR_2,
        struct backing_dev_info *VAR_3)
{
 VAR_2->host = ((void*)0);
 VAR_2->flags = 0;
 FUNC_0(VAR_2, VAR_0);
 VAR_2->assoc_mapping = ((void*)0);
 VAR_2->backing_dev_info = VAR_3;
 VAR_2->a_ops = &VAR_1;
}
