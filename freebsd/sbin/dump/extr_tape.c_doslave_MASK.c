
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct req {size_t count; scalar_t__ dblk; } ;
struct TYPE_2__ {scalar_t__* tblock; struct req* req; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int (*) (int ,scalar_t__,int),int,char*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int,int ) ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,int,...) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,scalar_t__,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 TYPE_1__* VAR_15 ;
 int FUNC_12 (scalar_t__) ;
 int VAR_16 ;
 size_t VAR_17 ;
 int FUNC_13 (int ,scalar_t__,int) ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_14(int VAR_19, int VAR_20)
{
 int VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25;




 (void) FUNC_2(VAR_7);
 if ((VAR_7 = FUNC_4(VAR_6, VAR_1)) < 0)
  FUNC_7("slave couldn't reopen disk: %s\n", FUNC_12(VAR_8));




 if ((VAR_21 = FUNC_0(FUNC_8, VAR_19, (char *)&VAR_22, sizeof VAR_22))
     != sizeof VAR_22) {
  FUNC_7("master/slave protocol botched - didn't get pid of next slave.\n");
 }




 while ((VAR_21 = FUNC_0(FUNC_8, VAR_19, (char *)VAR_15->req, VAR_14)) == VAR_14) {
  struct req *VAR_26 = VAR_15->req;

  for (VAR_17 = 0; VAR_17 < VAR_12;
       VAR_17 += VAR_26->count, VAR_26 += VAR_26->count) {
   if (VAR_26->dblk) {
    FUNC_1(VAR_26->dblk, VAR_15->tblock[VAR_17],
     VAR_26->count * VAR_4);
   } else {
    if (VAR_26->count != 1 || FUNC_0(FUNC_8, VAR_19,
        (char *)VAR_15->tblock[VAR_17],
        VAR_4) != VAR_4)
           FUNC_7("master/slave protocol botched.\n");
   }
  }
  if (FUNC_10(VAR_10) == 0) {
   VAR_13 = 1;
   if (!VAR_5)
    (void) FUNC_5();
  }
  VAR_13 = 0;
  VAR_5 = 0;


  VAR_25 = 0;
  VAR_23 = 0;

  VAR_24 = 0;
  while (VAR_25 < 10 && VAR_23 < VAR_18) {






    VAR_24 = FUNC_13(VAR_16, VAR_15->tblock[0]+VAR_23,
        VAR_18-VAR_23);



   if (VAR_24 < 0)
    break;
   if (VAR_24 == 0)
    VAR_25++;
   VAR_23 += VAR_24;
  }
  if (VAR_24 < 0 && VAR_8 == VAR_0) {
   VAR_24 = 0;
   VAR_25++;
  }

  if (VAR_25 > 0)
   VAR_23 = 0;

  if (VAR_24 < 0) {
   (void) FUNC_3(VAR_11, VAR_2);
   for (;;)
    (void) FUNC_11(0);
  } else {




   (void) FUNC_0(FUNC_13, VAR_19, (char *)&VAR_23, sizeof VAR_23);
  }





  (void) FUNC_3(VAR_22, VAR_3);
 }
 if (VAR_21 != 0)
  FUNC_7("error reading command pipe: %s\n", FUNC_12(VAR_8));
}
