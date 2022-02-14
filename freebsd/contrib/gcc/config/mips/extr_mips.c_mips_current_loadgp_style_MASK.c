
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum mips_loadgp_style { ____Placeholder_mips_loadgp_style } mips_loadgp_style ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {scalar_t__ global_pointer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;

enum mips_loadgp_style
FUNC_0 (void)
{
  if (!VAR_4 || VAR_7->machine->global_pointer == 0)
    return VAR_2;

  if (VAR_5)
    return VAR_0;

  return VAR_6 ? VAR_1 : VAR_3;
}
