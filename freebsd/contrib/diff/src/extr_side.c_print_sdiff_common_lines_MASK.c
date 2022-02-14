
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ lin ;
struct TYPE_2__ {int * linbuf; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,char*,long,long) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2 (lin VAR_7, lin VAR_8)
{
  lin VAR_9 = VAR_2, VAR_10 = VAR_3;

  if (!VAR_6 && (VAR_9 != VAR_7 || VAR_10 != VAR_8))
    {
      if (VAR_5)
 {
   long int VAR_11 = VAR_7 - VAR_9;
   long int VAR_12 = VAR_8 - VAR_10;
   FUNC_0 (VAR_4, "i%ld,%ld\n", VAR_11, VAR_12);
 }

      if (!VAR_1)
 {
   while (VAR_9 != VAR_7 && VAR_10 != VAR_8)
     FUNC_1 (&VAR_0[0].linbuf[VAR_9++], ' ',
          &VAR_0[1].linbuf[VAR_10++]);
   while (VAR_10 != VAR_8)
     FUNC_1 (0, ')', &VAR_0[1].linbuf[VAR_10++]);
 }
      while (VAR_9 != VAR_7)
 FUNC_1 (&VAR_0[0].linbuf[VAR_9++], '(', 0);
    }

  VAR_2 = VAR_7;
  VAR_3 = VAR_8;
}
