
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _zone {scalar_t__ z_begin; scalar_t__ z_end; } ;
struct _parse_state {scalar_t__ ps_u_imm; } ;
struct _memstream {int dummy; } ;


 char VAR_0 ;
 char FUNC_0 (struct _memstream*,struct _parse_state*) ;

__attribute__((used)) static int
FUNC_1(struct _memstream *VAR_1, struct _parse_state *VAR_2, struct _zone *VAR_3)
{

 if (FUNC_0(VAR_1, VAR_2) != VAR_0)
  return (-1);
 VAR_3->z_begin = VAR_2->ps_u_imm;
 if (FUNC_0(VAR_1, VAR_2) != '-')
  return (-1);
 if (FUNC_0(VAR_1, VAR_2) != VAR_0)
  return (-1);
 VAR_3->z_end = VAR_2->ps_u_imm;

 if (VAR_3->z_begin > VAR_3->z_end)
  return (-1);

 return (0);
}
