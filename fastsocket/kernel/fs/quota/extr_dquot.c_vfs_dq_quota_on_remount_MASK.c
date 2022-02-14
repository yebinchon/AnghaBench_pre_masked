
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_qcop; } ;
struct TYPE_2__ {int (* quota_on ) (struct super_block*,int,int ,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,int,int ,int *,int) ;

int FUNC_1(struct super_block *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0, VAR_5;

 if (!VAR_2->s_qcop || !VAR_2->s_qcop->quota_on)
  return -VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_5 = VAR_2->s_qcop->quota_on(VAR_2, VAR_3, 0, ((void*)0), 1);
  if (VAR_5 < 0 && !VAR_4)
   VAR_4 = VAR_5;
 }
 return VAR_4;
}
