
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_10__ {scalar_t__ pad; scalar_t__ skip; } ;
struct TYPE_9__ {scalar_t__ (* options ) () ;scalar_t__ (* st_rd ) () ;int udev; int (* end_rd ) () ;int name; } ;
typedef TYPE_1__ FSUB ;
typedef TYPE_2__ ARCHD ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 char* VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int,char*,int ,int ) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_16 (TYPE_2__*,int) ;

void
FUNC_17(void)
{
 ARCHD *VAR_6;
 int VAR_7;
 ARCHD VAR_8;
 FSUB *VAR_9;
 int VAR_10;
 off_t VAR_11;

 VAR_6 = &VAR_8;
 VAR_9 = VAR_1;





 if (FUNC_7() < 0)
  return;
 if ((VAR_9 != ((void*)0)) && (VAR_9 != VAR_1)) {
  FUNC_10(1, "Cannot mix current archive format %s with %s",
      VAR_1->name, VAR_9->name);
  return;
 }




 if (((*VAR_1->options)() < 0) || ((*VAR_1->st_rd)() < 0))
  return;





 if (VAR_3 && (FUNC_6() < 0))
  return;
 if ((VAR_10 = VAR_1->udev) && (FUNC_3() < 0))
  return;




 if (VAR_4) {
  (void)FUNC_4(VAR_2,
   "%s: Reading archive to position at the end...", VAR_0);
  VAR_5 = 1;
 }




 while (FUNC_9(VAR_6) == 0) {



  if (FUNC_12(VAR_6) != 0) {
   if (FUNC_11(VAR_6->skip + VAR_6->pad) == 1)
    break;
   continue;
  }

  if (VAR_3) {




   if ((VAR_7 = FUNC_2(VAR_6)) < 0)
    break;
   if (VAR_7 > 0) {
    if (FUNC_11(VAR_6->skip + VAR_6->pad) == 1)
     break;
    continue;
   }
  }







  if ((VAR_10 && (FUNC_0(VAR_6) < 0)) ||
      (FUNC_11(VAR_6->skip + VAR_6->pad) == 1))
   break;
 }






 VAR_11 = (*VAR_1->end_rd)();
 FUNC_8();





 if (FUNC_1(VAR_11) < 0)
  return;




 if (VAR_4 && VAR_5) {
  (void)FUNC_5("done.\n", VAR_2);
  VAR_5 = 0;
 }




 FUNC_16(VAR_6, 1);
}
