
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct bhnd_core_match {int dummy; } ;
struct bhnd_core_info {int dummy; } ;
struct TYPE_2__ {int obj; } ;
struct bcm_platform {TYPE_1__ erom; } ;
typedef int bhnd_size_t ;
typedef uintptr_t bhnd_addr_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int FUNC_1 (int *,struct bhnd_core_match const*,int ,int ,int ,struct bhnd_core_info*,uintptr_t*,int *) ;

__attribute__((used)) static int
FUNC_2(struct bcm_platform *VAR_4, const struct bhnd_core_match *VAR_5,
    size_t VAR_6, struct bhnd_core_info *VAR_7, uintptr_t *VAR_8)
{
 bhnd_addr_t VAR_9;
 bhnd_size_t VAR_10;
 int VAR_11;


 for (size_t VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_11 = FUNC_1(&VAR_4->erom.obj, &VAR_5[VAR_12],
      VAR_0, 0, 0, VAR_7, &VAR_9, &VAR_10);


  if (VAR_11 == 0)
   break;


  if (VAR_11 != VAR_1)
   return (VAR_11);


 }


 if (VAR_8 != ((void*)0) && VAR_9 > VAR_3) {
  FUNC_0("core address %#jx overflows native address width\n",
      (uintmax_t)VAR_9);
  return (VAR_2);
 }

 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_9;

 return (0);
}
