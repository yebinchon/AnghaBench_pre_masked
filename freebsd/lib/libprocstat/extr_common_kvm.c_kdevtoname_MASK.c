
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int si_name; } ;
typedef int si ;
typedef int kvm_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long,struct cdev*,int) ;
 int FUNC_2 (char*,int ,scalar_t__) ;

int
FUNC_3(kvm_t *VAR_1, struct cdev *VAR_2, char *VAR_3)
{
 struct cdev VAR_4;

 FUNC_0(VAR_3);
 if (!FUNC_1(VAR_1, (unsigned long)VAR_2, &VAR_4, sizeof(VAR_4)))
  return (1);
 FUNC_2(VAR_3, VAR_4.si_name, VAR_0 + 1);
 return (0);
}
