
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ns_namemap_ct ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (char const*,char const*,scalar_t__) ;

int
FUNC_1(ns_namemap_ct VAR_0, int VAR_1, ns_namemap_ct VAR_2, int VAR_3) {

 if (VAR_1 < VAR_3)
  return (0);


 while (VAR_3 > 0) {
  if (VAR_0->len != VAR_2->len ||
      FUNC_0((const char *) VAR_0->base,
    (const char *) VAR_2->base, VAR_0->len) != 0)
   return (0);
  VAR_0++, VAR_1--;
  VAR_2++, VAR_3--;
 }


 return (1);
}
