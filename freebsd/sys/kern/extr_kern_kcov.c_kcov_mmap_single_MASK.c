
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_ooffset_t ;
struct vm_object {int dummy; } ;
struct kcov_info {scalar_t__ kvaddr; int entries; struct vm_object* bufobj; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (struct vm_object*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_5, vm_ooffset_t *VAR_6, vm_size_t VAR_7,
    struct vm_object **VAR_8, int VAR_9)
{
 struct kcov_info *VAR_10;
 int VAR_11;

 if ((VAR_9 & (VAR_2 | VAR_3 | VAR_4)) !=
     (VAR_3 | VAR_4))
  return (VAR_0);

 if ((VAR_11 = FUNC_0((void **)&VAR_10)) != 0)
  return (VAR_11);

 if (VAR_10->kvaddr == 0 || VAR_7 / VAR_1 != VAR_10->entries)
  return (VAR_0);

 FUNC_1(VAR_10->bufobj);
 *VAR_6 = 0;
 *VAR_8 = VAR_10->bufobj;
 return (0);
}
