
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_ra_state {int start; int size; int async_size; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct address_space*,struct file_ra_state*,int,unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct address_space *VAR_0,
     struct file_ra_state *VAR_1,
     pgoff_t VAR_2,
     unsigned long VAR_3,
     unsigned long VAR_4)
{
 pgoff_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);





 if (!VAR_5)
  return 0;





 if (VAR_5 >= VAR_2)
  VAR_5 *= 2;

 VAR_1->start = VAR_2;
 VAR_1->size = FUNC_1(VAR_5 + VAR_3, VAR_4);
 VAR_1->async_size = VAR_1->size;

 return 1;
}
