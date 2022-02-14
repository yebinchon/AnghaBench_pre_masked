
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef scalar_t__ term_char_t ;
struct TYPE_3__ {scalar_t__ unicode_base; scalar_t__ length; scalar_t__ cp437_base; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static uint8_t
FUNC_1(term_char_t VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_2 = 0;
 VAR_4 = FUNC_0(VAR_0) - 1;

 if (VAR_1 < VAR_0[0].unicode_base ||
     VAR_1 > VAR_0[VAR_4].unicode_base + VAR_0[VAR_4].length)
  return '?';

 while (VAR_4 >= VAR_2) {
  VAR_3 = (VAR_2 + VAR_4) / 2;
  if (VAR_1 < VAR_0[VAR_3].unicode_base)
   VAR_4 = VAR_3 - 1;
  else if (VAR_1 > VAR_0[VAR_3].unicode_base +
      VAR_0[VAR_3].length)
   VAR_2 = VAR_3 + 1;
  else
   return (VAR_1 - VAR_0[VAR_3].unicode_base +
       VAR_0[VAR_3].cp437_base);
 }

 return '?';
}
