
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_part_table {int dummy; } ;
struct g_part_entry {int dummy; } ;
struct TYPE_2__ {int p_fstype; } ;
struct g_part_bsd_entry {TYPE_1__ part; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char const* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static const char *
FUNC_2(struct g_part_table *VAR_10, struct g_part_entry *VAR_11,
    char *VAR_12, size_t VAR_13)
{
 struct g_part_bsd_entry *VAR_14;
 int VAR_15;

 VAR_14 = (struct g_part_bsd_entry *)VAR_11;
 VAR_15 = VAR_14->part.p_fstype;
 if (VAR_15 == VAR_1)
  return (FUNC_0(VAR_5));
 if (VAR_15 == VAR_2)
  return (FUNC_0(VAR_6));
 if (VAR_15 == VAR_0)
  return (FUNC_0(VAR_7));
 if (VAR_15 == VAR_3)
  return (FUNC_0(VAR_8));
 if (VAR_15 == VAR_4)
  return (FUNC_0(VAR_9));
 FUNC_1(VAR_12, VAR_13, "!%d", VAR_15);
 return (VAR_12);
}
