
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ch2; int ch1; } ;
union node {scalar_t__ type; TYPE_1__ nbinary; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_1(union node *VAR_9, int VAR_10)
{
 int VAR_11;

 VAR_7++;
 VAR_11 = 0;
 for (;;) {
  if (!VAR_5)
   FUNC_0(VAR_9->nbinary.ch1, VAR_0);
  if (VAR_5) {
   if (VAR_5 == VAR_3 && --VAR_8 <= 0) {
    VAR_5 = 0;
    continue;
   }
   if (VAR_5 == VAR_2 && --VAR_8 <= 0)
    VAR_5 = 0;
   if (VAR_5 == VAR_4)
    VAR_11 = VAR_6;
   break;
  }
  if (VAR_9->type == VAR_1) {
   if (VAR_6 != 0)
    break;
  } else {
   if (VAR_6 == 0)
    break;
  }
  FUNC_0(VAR_9->nbinary.ch2, VAR_10);
  VAR_11 = VAR_6;
 }
 VAR_7--;
 VAR_6 = VAR_11;
}
