
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef long u_int32_t ;
typedef int bool_t ;
struct TYPE_4__ {scalar_t__ in_finger; scalar_t__ in_boundry; } ;
typedef TYPE_1__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool_t
FUNC_1(RECSTREAM *VAR_2, long VAR_3)
{
 u_int32_t VAR_4;

 while (VAR_3 > 0) {
  VAR_4 = (size_t)((long)VAR_2->in_boundry -
      (long)VAR_2->in_finger);
  if (VAR_4 == 0) {
   if (! FUNC_0(VAR_2))
    return (VAR_0);
   continue;
  }
  VAR_4 = (u_int32_t)((VAR_3 < VAR_4) ? VAR_3 : VAR_4);
  VAR_2->in_finger += VAR_4;
  VAR_3 -= VAR_4;
 }
 return (VAR_1);
}
