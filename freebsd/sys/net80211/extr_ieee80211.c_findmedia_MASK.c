
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ratemedia {scalar_t__ match; int media; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct ratemedia VAR_1[], int VAR_2, u_int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (VAR_1[VAR_4].match == VAR_3)
   return VAR_1[VAR_4].media;
 return VAR_0;
}
