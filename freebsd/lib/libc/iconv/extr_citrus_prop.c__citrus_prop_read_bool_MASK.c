
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _memstream {int dummy; } ;
struct TYPE_4__ {int boolean; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ _citrus_prop_object_t ;


 int VAR_0 ;
 char FUNC_0 (int ) ;
 int FUNC_1 (struct _memstream*) ;
 int FUNC_2 (struct _memstream*) ;

__attribute__((used)) static int
FUNC_3(struct _memstream * __restrict VAR_1,
    _citrus_prop_object_t * __restrict VAR_2)
{

 FUNC_2(VAR_1);
 switch (FUNC_0(FUNC_1(VAR_1))) {
 case 't':
  if (FUNC_0(FUNC_1(VAR_1)) == 'r' &&
      FUNC_0(FUNC_1(VAR_1)) == 'u' &&
      FUNC_0(FUNC_1(VAR_1)) == 'e') {
   VAR_2->u.boolean = 1;
   return (0);
  }
  break;
 case 'f':
  if (FUNC_0(FUNC_1(VAR_1)) == 'a' &&
      FUNC_0(FUNC_1(VAR_1)) == 'l' &&
      FUNC_0(FUNC_1(VAR_1)) == 's' &&
      FUNC_0(FUNC_1(VAR_1)) == 'e') {
   VAR_2->u.boolean = 0;
   return (0);
  }
 }
 return (VAR_0);
}
