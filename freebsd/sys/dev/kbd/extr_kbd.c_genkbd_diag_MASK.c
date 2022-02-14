
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kb_index; char* kb_name; char* kb_unit; int kb_type; int kb_config; scalar_t__ kb_io_base; scalar_t__ kb_io_size; int kb_flags; } ;
typedef TYPE_1__ keyboard_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(keyboard_t *VAR_0, int VAR_1)
{
 if (VAR_1 > 0) {
  FUNC_1("kbd%d: %s%d, %s (%d), config:0x%x, flags:0x%x",
      VAR_0->kb_index, VAR_0->kb_name, VAR_0->kb_unit,
      FUNC_0(VAR_0->kb_type), VAR_0->kb_type,
      VAR_0->kb_config, VAR_0->kb_flags);
  if (VAR_0->kb_io_base > 0)
   FUNC_1(", port:0x%x-0x%x", VAR_0->kb_io_base,
       VAR_0->kb_io_base + VAR_0->kb_io_size - 1);
  FUNC_1("\n");
 }
}
