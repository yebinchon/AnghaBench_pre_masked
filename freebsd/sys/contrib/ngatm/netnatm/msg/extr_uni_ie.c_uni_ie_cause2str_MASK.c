
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef enum uni_coding { ____Placeholder_uni_coding } uni_coding ;
struct TYPE_4__ {char const* str; } ;
struct TYPE_3__ {char const* str; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

const char *
FUNC_0(enum uni_coding VAR_4, u_int VAR_5)
{
 if (VAR_5 < 128) {
  if (VAR_4 == VAR_0)
   return (VAR_2[VAR_5].str);
  if (VAR_4 == VAR_1) {
   if (VAR_3[VAR_5].str != ((void*)0))
    return (VAR_3[VAR_5].str);
   return (VAR_2[VAR_5].str);
  }
 }
 return (((void*)0));
}
