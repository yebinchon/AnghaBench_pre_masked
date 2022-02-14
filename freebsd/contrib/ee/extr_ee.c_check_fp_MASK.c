
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_6__ {int line_number; int line; } ;
struct TYPE_5__ {char* name; struct TYPE_5__* next_name; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_11 ;
 char* VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (char,int) ;
 int VAR_14 ;
 int FUNC_4 (char*,int ) ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int * VAR_19 ;
 int FUNC_6 (char*,struct stat*) ;
 void* VAR_20 ;
 int VAR_21 ;
 char* VAR_22 ;
 scalar_t__ VAR_23 ;
 TYPE_2__* VAR_24 ;
 scalar_t__ VAR_25 ;
 TYPE_1__* VAR_26 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (int ) ;

void
FUNC_11()
{
 int VAR_27;
 int VAR_28;
 struct stat VAR_29;

 VAR_4 = VAR_2;
 VAR_25 = VAR_18;
 VAR_23 = VAR_17;
 VAR_24 = VAR_6;
 if (VAR_13)
 {
  VAR_12 = VAR_22 = VAR_26->name;
  VAR_26 = VAR_26->next_name;
 }
 VAR_28 = FUNC_6(VAR_22, &VAR_29);
 VAR_29.st_mode &= ~07777;
 if ((VAR_28 != -1) && (VAR_29.st_mode != 0100000) && (VAR_29.st_mode != 0))
 {
  FUNC_9(VAR_5, VAR_7, VAR_22);
  FUNC_10(VAR_5);
  if (VAR_13)
  {
   FUNC_5(0);
   return;
  }
  else
   return;
 }
 if ((VAR_10 = FUNC_4(VAR_22, VAR_1)) == -1)
 {
  FUNC_8(VAR_5, 0, 0);
  FUNC_7(VAR_5);
  if (VAR_13)
   FUNC_9(VAR_5, VAR_14, VAR_22);
  else
   FUNC_9(VAR_5, VAR_3, VAR_22);
  FUNC_10(VAR_5);
  FUNC_8(VAR_21, VAR_18, (VAR_17 - VAR_11));
  FUNC_10(VAR_21);
  VAR_16 = VAR_0;
  VAR_13 = VAR_0;
  return;
 }
 else
  FUNC_2(VAR_22);

 VAR_16 = VAR_0;
 VAR_27 = VAR_6->line_number;
 VAR_18 = VAR_25;
 VAR_17 = VAR_23;
 if (VAR_13)
  VAR_6= VAR_9;
 else
  VAR_6 = VAR_24;
 VAR_15 = VAR_6->line;
 FUNC_1();
 if (VAR_13)
 {
  VAR_13 = VAR_0;
  if (VAR_19 != ((void*)0))
  {
   VAR_27 = FUNC_0(VAR_19) - 1;
   FUNC_3('d', VAR_27);
   VAR_27 = 0;
   VAR_19 = ((void*)0);
  }
 }
 else
 {
  FUNC_8(VAR_5, 0, 0);
  FUNC_7(VAR_5);
  VAR_20 = VAR_2;
  if ((VAR_22 != ((void*)0)) && (*VAR_22 != '\0'))
   FUNC_9(VAR_5, VAR_8, VAR_22);
 }
 FUNC_10(VAR_5);
 FUNC_8(VAR_21, VAR_18, (VAR_17 - VAR_11));
 FUNC_10(VAR_21);
}
