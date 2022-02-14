
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct g_part_table {int dummy; } ;
struct g_part_parms {scalar_t__ gpp_codesize; int * gpp_codeptr; } ;
struct g_part_bsd_table {int bbarea; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct g_part_table *VAR_5, struct g_part_parms *VAR_6)
{
 struct g_part_bsd_table *VAR_7;
 const u_char *VAR_8;

 if (VAR_6->gpp_codesize != VAR_1 && VAR_6->gpp_codesize != VAR_0)
  return (VAR_4);

 VAR_7 = (struct g_part_bsd_table *)VAR_5;
 VAR_8 = VAR_6->gpp_codeptr;
 FUNC_0(VAR_8, VAR_7->bbarea, VAR_1);
 if (VAR_6->gpp_codesize == VAR_0)
  FUNC_0(VAR_8 + VAR_2, VAR_7->bbarea + VAR_2,
      VAR_3);
 return (0);
}
