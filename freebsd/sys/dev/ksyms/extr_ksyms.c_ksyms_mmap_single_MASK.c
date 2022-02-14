
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_object_t ;
struct ksyms_softc {int sc_obj; int sc_objsz; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, vm_ooffset_t *VAR_3, vm_size_t VAR_4,
    vm_object_t *VAR_5, int VAR_6)
{
 struct ksyms_softc *VAR_7;
 vm_object_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0((void **)&VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);

 if (*VAR_3 < 0 || *VAR_3 >= FUNC_1(VAR_7->sc_objsz) ||
     VAR_4 > FUNC_1(VAR_7->sc_objsz) - *VAR_3 ||
     (VAR_6 & ~VAR_1) != 0)
  return (VAR_0);

 VAR_8 = VAR_7->sc_obj;
 FUNC_2(VAR_8);
 *VAR_5 = VAR_8;
 return (0);
}
