
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_alloc_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,int,int *,int *,int *) ;
 struct buffer_head* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, int VAR_2,
     struct buffer_head **VAR_3)
{
 u64 VAR_4, VAR_5;
 int VAR_6;

 FUNC_1(&FUNC_0(VAR_1)->ip_alloc_sem);
 VAR_6 = FUNC_3(VAR_1, VAR_2, &VAR_4, &VAR_5, ((void*)0));
 FUNC_5(&FUNC_0(VAR_1)->ip_alloc_sem);
 if (VAR_6) {
  FUNC_2(VAR_6);
  return VAR_6;
 }
 *VAR_3 = FUNC_4(VAR_1->i_sb, VAR_4);
 if (!*VAR_3) {
  VAR_6 = -VAR_0;
  FUNC_2(VAR_6);
 }
 return VAR_6;
}
