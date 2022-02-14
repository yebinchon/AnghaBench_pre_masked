
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct cphy*,int ,int ,unsigned int*) ;

__attribute__((used)) static int
FUNC_1(struct cphy *VAR_3)
{
 unsigned int VAR_4;

 if (FUNC_0(VAR_3, VAR_2, VAR_1, &VAR_4) ||
     VAR_4 == 0xffff || (VAR_4 & 1) != 1)
  return (0xffff);

 if (FUNC_0(VAR_3, VAR_2, VAR_0, &VAR_4))
  return (0xffff);

 return ((int)((signed char)(VAR_4 >> 8)));
}
