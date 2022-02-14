
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bool_t ;
struct TYPE_4__ {scalar_t__ in_finger; scalar_t__ in_boundry; scalar_t__ nonblock; } ;
typedef TYPE_1__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__,size_t) ;
 int FUNC_2 (char*,scalar_t__,size_t) ;

__attribute__((used)) static bool_t
FUNC_3(RECSTREAM *VAR_2, char *VAR_3, int VAR_4)
{
 size_t VAR_5;

 if (VAR_2->nonblock) {
  if (VAR_4 > (int)(VAR_2->in_boundry - VAR_2->in_finger))
   return VAR_0;
  FUNC_1(VAR_3, VAR_2->in_finger, (size_t)VAR_4);
  VAR_2->in_finger += VAR_4;
  return VAR_1;
 }

 while (VAR_4 > 0) {
  VAR_5 = (size_t)((long)VAR_2->in_boundry -
      (long)VAR_2->in_finger);
  if (VAR_5 == 0) {
   if (! FUNC_0(VAR_2))
    return (VAR_0);
   continue;
  }
  VAR_5 = (VAR_4 < VAR_5) ? VAR_4 : VAR_5;
  FUNC_2(VAR_3, VAR_2->in_finger, VAR_5);
  VAR_2->in_finger += VAR_5;
  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
 }
 return (VAR_1);
}
