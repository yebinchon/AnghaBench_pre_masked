
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inoinfo {scalar_t__ i_parent; scalar_t__ i_number; } ;
struct TYPE_2__ {scalar_t__ ino_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 size_t VAR_1 ;
 struct inoinfo** VAR_2 ;

void
FUNC_2(void)
{
 struct inoinfo **VAR_3, *VAR_4;
 struct inoinfo **VAR_5;
 long VAR_6;

 VAR_5 = &VAR_2[VAR_1];
 do {
  VAR_6 = 0;
  for (VAR_3 = VAR_2; VAR_3 < VAR_5; VAR_3++) {
   VAR_4 = *VAR_3;
   if (VAR_4->i_parent == 0)
    continue;
   if (FUNC_1(VAR_4->i_parent)->ino_state == VAR_0 &&
       FUNC_0(VAR_4->i_number)) {
    FUNC_1(VAR_4->i_number)->ino_state = VAR_0;
    VAR_6++;
   }
  }
 } while (VAR_6 > 0);
}
