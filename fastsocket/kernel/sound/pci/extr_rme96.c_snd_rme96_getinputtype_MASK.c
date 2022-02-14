
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {int areg; int wcreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct rme96 *VAR_4)
{
 if (VAR_4->areg & VAR_0) {
  return VAR_1;
 }
 return ((VAR_4->wcreg >> VAR_2) & 1) +
  (((VAR_4->wcreg >> VAR_3) & 1) << 1);
}
