
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct bhnd_erom_io {int dummy; } ;
struct bhnd_chipid {scalar_t__ enum_addr; } ;
typedef int kobj_t ;
typedef int kobj_class_t ;
typedef int bhnd_erom_t ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ bhnd_erom_class_t ;


 int FUNC_0 (int *,struct bhnd_chipid const*,struct bhnd_erom_io*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*,int ,int) ;

bhnd_erom_t *
FUNC_4(bhnd_erom_class_t *VAR_3, const struct bhnd_chipid *VAR_4,
    struct bhnd_erom_io *VAR_5)
{
 bhnd_erom_t *VAR_6;
 int VAR_7;

 VAR_6 = (bhnd_erom_t *)FUNC_1((kobj_class_t)VAR_3, VAR_0,
     VAR_1|VAR_2);

 if ((VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5))) {
  FUNC_3("error initializing %s parser at %#jx: %d\n", VAR_3->name,
      (uintmax_t)VAR_4->enum_addr, VAR_7);

  FUNC_2((kobj_t)VAR_6, VAR_0);
  return (((void*)0));
 }

 return (VAR_6);
}
