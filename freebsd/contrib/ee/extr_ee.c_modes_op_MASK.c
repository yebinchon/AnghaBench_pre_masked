
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int item_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,void*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_1__*) ;
 char** VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_15 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_16 ;
 int FUNC_10 (int ,char*,char*,...) ;
 int VAR_17 ;
 int FUNC_11 (int ) ;

void
FUNC_12()
{
 int VAR_18;
 int VAR_19;
 char *VAR_20;

 do
 {
  FUNC_10(VAR_14[1].item_string, "%s %s", VAR_13[1],
     (VAR_10 ? VAR_3 : VAR_2));
  FUNC_10(VAR_14[2].item_string, "%s %s", VAR_13[2],
     (VAR_6 ? VAR_3 : VAR_2));
  FUNC_10(VAR_14[3].item_string, "%s %s", VAR_13[3],
     (VAR_15 ? VAR_3 : VAR_2));
  FUNC_10(VAR_14[4].item_string, "%s %s", VAR_13[4],
     (VAR_5 ? VAR_3 : VAR_2));
  FUNC_10(VAR_14[5].item_string, "%s %s", VAR_13[5],
     (VAR_8 ? VAR_3 : VAR_2));
  FUNC_10(VAR_14[6].item_string, "%s %s", VAR_13[6],
     (VAR_11 ? VAR_3 : VAR_2));
  FUNC_10(VAR_14[7].item_string, "%s %s", VAR_13[7],
     (VAR_9 ? VAR_3 : VAR_2));
  FUNC_10(VAR_14[8].item_string, "%s %d", VAR_13[8],
     VAR_16);
  FUNC_10(VAR_14[9].item_string, "%s %s", VAR_13[9],
     (VAR_7 ? VAR_3 : VAR_2));

  VAR_18 = FUNC_4(VAR_14);

  switch (VAR_18)
  {
   case 1:
    VAR_10 = !VAR_10;
    break;
   case 2:
    VAR_6 = !VAR_6;
    break;
   case 3:
    VAR_15 = !VAR_15;
    break;
   case 4:
    VAR_5 = !VAR_5;
    if (VAR_5)
     VAR_15 = VAR_4;
    break;
   case 5:
    VAR_8 = !VAR_8;
    if (!VAR_8)
     VAR_7 = VAR_1;







    FUNC_9();
    FUNC_11(VAR_17);
    break;
   case 6:
    if (VAR_11)
     FUNC_7();
    else
     FUNC_1();
    break;
   case 7:
    VAR_9 = !VAR_9;
    if (VAR_11)
     FUNC_8();
    break;
   case 8:
    VAR_20 = FUNC_3(VAR_12, VAR_4);
    if (VAR_20 != ((void*)0))
    {
     VAR_19 = FUNC_0(VAR_20);
     if (VAR_19 > 0)
      VAR_16 = VAR_19;
     FUNC_2(VAR_20);
    }
    break;
   case 9:
    VAR_7 = !VAR_7;
    if (VAR_7 != VAR_1)
     VAR_8 = VAR_4;






    FUNC_9();
    break;
   default:
    break;
  }
 }
 while (VAR_18 != 0);
}
