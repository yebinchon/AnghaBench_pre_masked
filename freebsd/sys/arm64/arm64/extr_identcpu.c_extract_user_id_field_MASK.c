
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ reg; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

bool
FUNC_2(u_int VAR_2, u_int VAR_3, uint8_t *VAR_4)
{
 uint64_t VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_1); VAR_6++) {
  if (VAR_1[VAR_6].reg == VAR_2) {
   VAR_5 = FUNC_0(VAR_0, VAR_6);
   *VAR_4 = VAR_5 >> VAR_3;
   return (1);
  }
 }

 return (0);
}
