
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tea575x {int in_use; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 struct snd_tea575x* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0)
{
 struct snd_tea575x *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(0, &VAR_1->in_use);
 return 0;
}
