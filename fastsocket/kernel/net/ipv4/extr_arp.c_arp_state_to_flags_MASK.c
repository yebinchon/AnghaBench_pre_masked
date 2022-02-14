
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int nud_state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned FUNC_0(struct neighbour *VAR_4)
{
 unsigned VAR_5 = 0;
 if (VAR_4->nud_state&VAR_2)
  VAR_5 = VAR_1|VAR_0;
 else if (VAR_4->nud_state&VAR_3)
  VAR_5 = VAR_0;
 return VAR_5;
}
