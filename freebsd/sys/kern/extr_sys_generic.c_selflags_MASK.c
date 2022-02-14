
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_mask ;


 int* VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(fd_mask **VAR_1, int VAR_2, fd_mask VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  if (VAR_1[VAR_5] == ((void*)0))
   continue;
  if ((VAR_1[VAR_5][VAR_2] & VAR_3) == 0)
   continue;
  VAR_4 |= VAR_0[VAR_5];
 }
 return (VAR_4);
}
