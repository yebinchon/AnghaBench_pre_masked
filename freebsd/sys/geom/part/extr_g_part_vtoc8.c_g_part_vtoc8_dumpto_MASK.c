
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {TYPE_1__* part; } ;
struct g_part_vtoc8_table {TYPE_2__ vtoc; } ;
struct g_part_table {int dummy; } ;
struct g_part_entry {int gpe_index; } ;
struct TYPE_3__ {int tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_2,
    struct g_part_entry *VAR_3)
{
 struct g_part_vtoc8_table *VAR_4;
 uint16_t VAR_5;





 VAR_4 = (struct g_part_vtoc8_table *)VAR_2;
 VAR_5 = FUNC_0(&VAR_4->vtoc.part[VAR_3->gpe_index - 1].tag);
 return ((VAR_5 == 0 || VAR_5 == VAR_0 ||
     VAR_5 == VAR_1) ? 1 : 0);
}
