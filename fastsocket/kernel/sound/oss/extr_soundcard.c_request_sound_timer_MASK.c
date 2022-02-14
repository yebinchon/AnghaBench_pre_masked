
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int count ;
struct TYPE_3__ {int expires; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_1(int VAR_2)
{
 extern unsigned long VAR_3;

 if (VAR_2 < 0) {
  VAR_1.expires = (-VAR_2) + VAR_0;
  FUNC_0(&VAR_1);
  return;
 }
 VAR_2 += VAR_3;

 VAR_2 -= VAR_0;

 if (VAR_2 < 1)
  VAR_2 = 1;

 VAR_1.expires = (VAR_2) + VAR_0;
 FUNC_0(&VAR_1);
}
