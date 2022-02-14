
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_mask ;


 int* VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(fd_mask **VAR_1, fd_mask **VAR_2, int VAR_3, fd_mask VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  if ((VAR_5 & VAR_0[VAR_6]) == 0)
   continue;
  if (VAR_1[VAR_6] == ((void*)0))
   continue;
  if ((VAR_1[VAR_6][VAR_3] & VAR_4) == 0)
   continue;






  if ((VAR_2[VAR_6][VAR_3] & VAR_4) != 0)
   continue;
  VAR_2[VAR_6][VAR_3] |= VAR_4;
  VAR_7++;
 }

 return (VAR_7);
}
