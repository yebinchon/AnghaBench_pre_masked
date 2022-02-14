
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct address_space {TYPE_2__* a_ops; TYPE_1__* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_4__ {int (* get_xip_mem ) (struct address_space*,int,int ,void**,unsigned long*) ;} ;
struct TYPE_3__ {int i_blkbits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ,unsigned int) ;
 int FUNC_2 (struct address_space*,int,int ,void**,unsigned long*) ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4(struct address_space *VAR_3, loff_t VAR_4)
{
 pgoff_t VAR_5 = VAR_4 >> VAR_1;
 unsigned VAR_6 = VAR_4 & (VAR_2-1);
 unsigned VAR_7;
 unsigned VAR_8;
 void *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_0(!VAR_3->a_ops->get_xip_mem);

 VAR_7 = 1 << VAR_3->host->i_blkbits;
 VAR_8 = VAR_6 & (VAR_7 - 1);


 if (!VAR_8)
  return 0;

 VAR_8 = VAR_7 - VAR_8;

 VAR_11 = VAR_3->a_ops->get_xip_mem(VAR_3, VAR_5, 0,
      &VAR_9, &VAR_10);
 if (FUNC_3(VAR_11)) {
  if (VAR_11 == -VAR_0)

   return 0;
  else
   return VAR_11;
 }
 FUNC_1(VAR_9 + VAR_6, 0, VAR_8);
 return 0;
}
