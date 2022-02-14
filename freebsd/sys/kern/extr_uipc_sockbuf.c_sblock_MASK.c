
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int sb_flags; int sb_sx; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct sockbuf *VAR_5, int VAR_6)
{

 FUNC_0((VAR_6 & VAR_2) == VAR_6,
     ("sblock: flags invalid (0x%x)", VAR_6));

 if (VAR_6 & VAR_3) {
  if ((VAR_5->sb_flags & VAR_4) ||
      (VAR_6 & VAR_1)) {
   FUNC_2(&VAR_5->sb_sx);
   return (0);
  }
  return (FUNC_3(&VAR_5->sb_sx));
 } else {
  if (FUNC_1(&VAR_5->sb_sx) == 0)
   return (VAR_0);
  return (0);
 }
}
