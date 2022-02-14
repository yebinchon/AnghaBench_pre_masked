
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct fileusage {int fu_id; struct fileusage* fu_next; } ;


 int VAR_0 ;
 struct fileusage*** VAR_1 ;

struct fileusage *
FUNC_0(u_long VAR_2, int VAR_3)
{
 struct fileusage *VAR_4;

 for (VAR_4 = VAR_1[VAR_3][VAR_2 & (VAR_0-1)]; VAR_4 != ((void*)0); VAR_4 = VAR_4->fu_next)
  if (VAR_4->fu_id == VAR_2)
   return (VAR_4);
 return (((void*)0));
}
