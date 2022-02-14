
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kset_uevent_ops {int dummy; } ;
struct TYPE_2__ {int * kset; int * ktype; struct kobject* parent; } ;
struct kset {TYPE_1__ kobj; struct kset_uevent_ops* uevent_ops; } ;
struct kobject {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kset*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int VAR_1 ;
 struct kset* FUNC_2 (int,int ) ;

__attribute__((used)) static struct kset *FUNC_3(const char *VAR_2,
    struct kset_uevent_ops *VAR_3,
    struct kobject *VAR_4)
{
 struct kset *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);
 VAR_6 = FUNC_1(&VAR_5->kobj, VAR_2);
 if (VAR_6) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 VAR_5->uevent_ops = VAR_3;
 VAR_5->kobj.parent = VAR_4;






 VAR_5->kobj.ktype = &VAR_1;
 VAR_5->kobj.kset = ((void*)0);

 return VAR_5;
}
