
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int * str; } ;
struct TYPE_6__ {TYPE_1__ str; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ data; } ;
struct TYPE_8__ {TYPE_3__ other_data; } ;
struct detailed_timing {TYPE_4__ data; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct detailed_timing *VAR_1, void *VAR_2)
{
 if (VAR_1->data.other_data.type == VAR_0)
  *(u8 **)VAR_2 = VAR_1->data.other_data.data.str.str;
}
