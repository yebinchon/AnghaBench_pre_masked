
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fts_instr; } ;
typedef TYPE_1__ FTSENT11 ;
typedef int FTS11 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_0(FTS11 *VAR_6, FTSENT11 *VAR_7, int VAR_8)
{
 if (VAR_8 != 0 && VAR_8 != VAR_1 && VAR_8 != VAR_2 &&
     VAR_8 != VAR_3 && VAR_8 != VAR_4) {
  VAR_5 = VAR_0;
  return (1);
 }
 VAR_7->fts_instr = VAR_8;
 return (0);
}
