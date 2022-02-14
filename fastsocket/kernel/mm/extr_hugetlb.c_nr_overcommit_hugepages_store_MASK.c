
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
struct hstate {scalar_t__ order; unsigned long nr_overcommit_huge_pages; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct hstate* FUNC_0 (struct kobject*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_3,
  struct kobj_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 struct hstate *VAR_9 = FUNC_0(VAR_3, ((void*)0));

 if (VAR_9->order >= VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_5, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_2);
 VAR_9->nr_overcommit_huge_pages = VAR_8;
 FUNC_2(&VAR_2);

 return VAR_6;
}
