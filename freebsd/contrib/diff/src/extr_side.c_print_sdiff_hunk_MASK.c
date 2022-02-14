
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct change {int dummy; } ;
typedef int lin ;
typedef enum changes { ____Placeholder_changes } changes ;
struct TYPE_2__ {int * linbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct change*,int*,int*,int*,int*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char*,long,long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char,int *) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_4 (struct change *VAR_8)
{
  lin VAR_9, VAR_10, VAR_11, VAR_12;
  register lin VAR_13, VAR_14;


  enum changes VAR_15 =
    FUNC_0 (VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12);
  if (!VAR_15)
    return;


  FUNC_3 (VAR_9, VAR_11);

  if (VAR_7)
    {
      long int VAR_16 = VAR_10 - VAR_9 + 1;
      long int VAR_17 = VAR_12 - VAR_11 + 1;
      FUNC_1 (VAR_6, "c%ld,%ld\n", VAR_16, VAR_17);
    }


  if (VAR_15 == VAR_0)
    {
      for (VAR_13 = VAR_9, VAR_14 = VAR_11; VAR_13 <= VAR_10 && VAR_14 <= VAR_12; VAR_13++, VAR_14++)
 FUNC_2 (&VAR_3[0].linbuf[VAR_13], '|', &VAR_3[1].linbuf[VAR_14]);
      VAR_15 = (VAR_13 <= VAR_10 ? VAR_2 : 0) + (VAR_14 <= VAR_12 ? VAR_1 : 0);
      VAR_4 = VAR_9 = VAR_13;
      VAR_5 = VAR_11 = VAR_14;
    }


  if (VAR_15 & VAR_1)
    {
      for (VAR_14 = VAR_11; VAR_14 <= VAR_12; ++VAR_14)
 FUNC_2 (0, '>', &VAR_3[1].linbuf[VAR_14]);
      VAR_5 = VAR_14;
    }


  if (VAR_15 & VAR_2)
    {
      for (VAR_13 = VAR_9; VAR_13 <= VAR_10; ++VAR_13)
 FUNC_2 (&VAR_3[0].linbuf[VAR_13], '<', 0);
      VAR_4 = VAR_13;
    }
}
