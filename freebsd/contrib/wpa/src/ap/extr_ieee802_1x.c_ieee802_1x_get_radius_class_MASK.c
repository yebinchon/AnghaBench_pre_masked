
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* attr; scalar_t__ count; } ;
struct eapol_state_machine {TYPE_2__ radius_class; } ;
struct TYPE_3__ {size_t len; int * data; } ;



u8 * FUNC_0(struct eapol_state_machine *VAR_0, size_t *VAR_1,
     int VAR_2)
{
 if (VAR_0 == ((void*)0) || VAR_0->radius_class.attr == ((void*)0) ||
     VAR_2 >= (int) VAR_0->radius_class.count)
  return ((void*)0);

 *VAR_1 = VAR_0->radius_class.attr[VAR_2].len;
 return VAR_0->radius_class.attr[VAR_2].data;
}
