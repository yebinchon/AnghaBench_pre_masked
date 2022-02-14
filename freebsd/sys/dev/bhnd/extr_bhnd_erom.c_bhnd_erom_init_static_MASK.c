
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bhnd_erom_io {int dummy; } ;
struct bhnd_chipid {int dummy; } ;
typedef int kobj_t ;
typedef TYPE_1__* kobj_class_t ;
typedef int bhnd_erom_t ;
typedef int bhnd_erom_class_t ;
struct TYPE_3__ {size_t size; } ;


 int FUNC_0 (int *,struct bhnd_chipid const*,struct bhnd_erom_io*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;

int
FUNC_2(bhnd_erom_class_t *VAR_1, bhnd_erom_t *VAR_2, size_t VAR_3,
    const struct bhnd_chipid *VAR_4, struct bhnd_erom_io *VAR_5)
{
 kobj_class_t VAR_6;

 VAR_6 = (kobj_class_t)VAR_1;


 if (VAR_6->size > VAR_3)
  return (VAR_0);


 FUNC_1((kobj_t)VAR_2, VAR_6);
 return (FUNC_0(VAR_2, VAR_4, VAR_5));
}
