
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 FUNC_0(&VAR_3, VAR_1);
 for (VAR_7 = VAR_5; VAR_7 < VAR_5 + VAR_6; VAR_7++)
  if (VAR_4[VAR_7])
   return (VAR_0);
 return (VAR_2);
}
