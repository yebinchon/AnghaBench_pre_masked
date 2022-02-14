
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme32 {int wcreg; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct rme32 * VAR_2)
{
 return ((VAR_2->wcreg >> VAR_0) & 1) +
     (((VAR_2->wcreg >> VAR_1) & 1) << 1);
}
