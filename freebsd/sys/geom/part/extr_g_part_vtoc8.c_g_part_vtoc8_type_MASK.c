
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 char const* FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,scalar_t__) ;

__attribute__((used)) static const char *
FUNC_3(struct g_part_table *VAR_10, struct g_part_entry *VAR_11,
    char *VAR_12, size_t VAR_13)
{
 struct g_part_vtoc8_table *VAR_14;
 uint16_t VAR_15;

 VAR_14 = (struct g_part_vtoc8_table *)VAR_10;
 VAR_15 = FUNC_0(&VAR_14->vtoc.part[VAR_11->gpe_index - 1].tag);
 if (VAR_15 == VAR_5)
  return (FUNC_1(VAR_0));
 if (VAR_15 == VAR_6)
  return (FUNC_1(VAR_1));
 if (VAR_15 == VAR_7)
  return (FUNC_1(VAR_2));
 if (VAR_15 == VAR_8)
  return (FUNC_1(VAR_3));
 if (VAR_15 == VAR_9)
  return (FUNC_1(VAR_4));
 FUNC_2(VAR_12, VAR_13, "!%d", VAR_15);
 return (VAR_12);
}
