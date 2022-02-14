
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct g_part_table {int dummy; } ;
struct g_part_parms {scalar_t__ gpp_codesize; int gpp_skip_dsn; int gpp_codeptr; } ;
struct g_part_mbr_table {scalar_t__ mbr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_4, struct g_part_parms *VAR_5)
{
 struct g_part_mbr_table *VAR_6;
 uint32_t VAR_7;

 if (VAR_5->gpp_codesize != VAR_3)
  return (VAR_2);

 VAR_6 = (struct g_part_mbr_table *)VAR_4;
 VAR_7 = *(uint32_t *)(VAR_6->mbr + VAR_0);
 FUNC_0(VAR_5->gpp_codeptr, VAR_6->mbr, VAR_1);
 if (VAR_7 != 0 && !VAR_5->gpp_skip_dsn)
  *(uint32_t *)(VAR_6->mbr + VAR_0) = VAR_7;
 return (0);
}
