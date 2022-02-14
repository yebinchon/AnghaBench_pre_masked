
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zi_start; scalar_t__ zi_end; int zi_level; int zi_object; int zi_objset; } ;
typedef TYPE_1__ zinject_record_t ;
typedef int u_longlong_t ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char const*,char*,int *,int *,int *,int *) ;
 int VAR_0 ;

int
FUNC_2(const char *VAR_1, zinject_record_t *VAR_2)
{




 if (FUNC_1(VAR_1, "%llx:%llx:%x:%llx", (u_longlong_t *)&VAR_2->zi_objset,
     (u_longlong_t *)&VAR_2->zi_object, &VAR_2->zi_level,
     (u_longlong_t *)&VAR_2->zi_start) != 4) {
  (void) FUNC_0(VAR_0, "bad raw spec '%s': must be of the form "
      "'objset:object:level:blkid'\n", VAR_1);
  return (-1);
 }

 VAR_2->zi_end = VAR_2->zi_start;

 return (0);
}
