
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long page_length; } ;
typedef TYPE_1__ MY_OBJ ;



__attribute__((used)) static long
FUNC_0(MY_OBJ * VAR_0, char *VAR_1, long VAR_2)
{
    long VAR_3 = VAR_0->page_length;
    long VAR_4 = 0;

    while (VAR_2 > 0) {
 if (VAR_1[VAR_2] == '\n') {
     if (--VAR_3 < 0) {
  VAR_4 = VAR_2;
  break;
     }
 }
 --VAR_2;
    }
    return VAR_4;
}
