
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ib_smp {scalar_t__ data; } ;
struct ib_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_smp*) ;
 struct ib_smp* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ib_device*,struct ib_smp*) ;

int FUNC_4(struct ib_device *VAR_2,
     u16 *VAR_3)
{
 struct ib_smp *VAR_4 = ((void*)0);
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5)
  goto out;

 *VAR_3 = FUNC_0((__be16 *)(VAR_4->data + 28));

out:
 FUNC_1(VAR_4);

 return VAR_5;
}
