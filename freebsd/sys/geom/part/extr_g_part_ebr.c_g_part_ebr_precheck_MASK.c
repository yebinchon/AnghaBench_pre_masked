
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_part_table {int gpt_sectors; } ;
struct g_part_parms {int gpp_index; int gpp_start; } ;
typedef enum g_part_ctl { ____Placeholder_g_part_ctl } g_part_ctl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct g_part_table *VAR_3, enum g_part_ctl VAR_4,
    struct g_part_parms *VAR_5)
{
 if (VAR_4 == VAR_1)
  VAR_5->gpp_index = (VAR_5->gpp_start / VAR_3->gpt_sectors) + 1;
 return (0);

}
