
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct hstate {int nr_overcommit_huge_pages; } ;
typedef int ssize_t ;


 struct hstate* FUNC_0 (struct kobject*,int *) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_0,
     struct kobj_attribute *VAR_1, char *VAR_2)
{
 struct hstate *VAR_3 = FUNC_0(VAR_0, ((void*)0));
 return FUNC_1(VAR_2, "%lu\n", VAR_3->nr_overcommit_huge_pages);
}
