
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int orig_sig; int sig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,...) ;
 int VAR_4 ;
 int FUNC_10 (int ,int ) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_11(void)
{
 int VAR_8;

 VAR_4 = FUNC_8(VAR_7, VAR_1);
 if (!FUNC_0(VAR_4)) {
  FUNC_10(VAR_4, VAR_2);
  FUNC_7(VAR_5, 0, VAR_2);
  VAR_8 = FUNC_2(VAR_6,
     VAR_5, ((void*)0));
  if (VAR_8)
   goto put;

  if (!FUNC_5(VAR_3, VAR_5->sig, 10)) {
   FUNC_6(VAR_5->sig, VAR_5->orig_sig, 10);

   VAR_8 = FUNC_3(VAR_6,
      VAR_5, ((void*)0));
  } else {
   VAR_8 = -VAR_0;
  }

put:
  if (VAR_8)
   FUNC_4(VAR_4, VAR_1);
  else
   FUNC_9("PM: Signature found, resuming\n");
 } else {
  VAR_8 = FUNC_1(VAR_4);
 }

 if (VAR_8)
  FUNC_9("PM: Error %d checking image file\n", VAR_8);

 return VAR_8;
}
