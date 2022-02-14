
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_ra_state {int async_size; int size; int start; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (struct address_space*,struct file*,int ,int ,int ) ;

unsigned long FUNC_1(struct file_ra_state *VAR_0,
         struct address_space *VAR_1, struct file *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2,
     VAR_0->start, VAR_0->size, VAR_0->async_size);

 return VAR_3;
}
