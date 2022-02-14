
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong_t ;
struct TYPE_2__ {char* t_name; } ;
typedef TYPE_1__ tdesc_t ;



int
FUNC_0(int VAR_0, void *VAR_1)
{
 tdesc_t *VAR_2 = VAR_1;
 ulong_t VAR_3, VAR_4;
 char *VAR_5;

 if (VAR_2->t_name == ((void*)0))
  return (0);

 for (VAR_3 = 0, VAR_5 = VAR_2->t_name; *VAR_5; VAR_5++) {
  VAR_3 = (VAR_3 << 4) + *VAR_5;
  if ((VAR_4 = (VAR_3 & 0xf0000000)) != 0) {
   VAR_3 ^= (VAR_4 >> 24);
   VAR_3 ^= VAR_4;
  }
 }

 return (VAR_3 % VAR_0);
}
