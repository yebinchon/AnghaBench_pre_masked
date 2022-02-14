
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int us_len; int* us_buf; } ;
typedef TYPE_1__ unicode_string ;
typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static uint8_t
FUNC_1(unicode_string *VAR_2, unicode_string *VAR_3,
 uint8_t VAR_4)
{
 int VAR_5;

 if (VAR_2->us_len != VAR_3->us_len)
  return (VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_2->us_len; VAR_5++) {
  if (VAR_4 == VAR_1) {
   if (FUNC_0((char)(VAR_2->us_buf[VAR_5] & 0xFF)) !=
       FUNC_0((char)(VAR_3->us_buf[VAR_5] & 0xFF)))
    return (VAR_0);
  } else {
   if (VAR_2->us_buf[VAR_5] != VAR_3->us_buf[VAR_5])
    return (VAR_0);
  }
 }

 return (VAR_1);
}
