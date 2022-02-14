
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t altroot_len; } ;
typedef TYPE_1__ libbe_handle_t ;



char *
FUNC_0(libbe_handle_t *VAR_0, char *VAR_1)
{

 if (VAR_0->altroot_len == 0)
  return (VAR_1);
 if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
  return (VAR_1);

 if (VAR_1[VAR_0->altroot_len] == '\0') {
  *(VAR_1 + 1) = '\0';
  return (VAR_1);
 } else
  return (VAR_1 + VAR_0->altroot_len);
}
