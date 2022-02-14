
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,unsigned long,struct buffer_head**,void (*) (struct inode*,struct buffer_head*,void*)) ;
 int FUNC_1 (struct inode*,unsigned long,struct buffer_head**) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct inode *VAR_2, unsigned long VAR_3, int VAR_4,
   void (*VAR_5)(struct inode *,
        struct buffer_head *, void *),
   struct buffer_head **VAR_6)
{
 int VAR_7;


 retry:
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_6);
 if (!VAR_4 || VAR_7 != -VAR_1)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_6, VAR_5);
 if (FUNC_2(VAR_7 == -VAR_0)) {

  goto retry;
 }
 return VAR_7;
}
