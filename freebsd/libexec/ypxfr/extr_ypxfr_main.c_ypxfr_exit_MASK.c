
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ypxfrstat ;
typedef scalar_t__ yppush_status ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_6__ {int (* close ) (TYPE_3__*) ;} ;
struct TYPE_5__ {scalar_t__ status; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,scalar_t__,int,struct timeval,int*) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 int * FUNC_9 (TYPE_1__*,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11(ypxfrstat VAR_6, char *VAR_7)
{
 CLIENT *VAR_8;
 int VAR_9 = VAR_0;
 struct timeval VAR_10;


 if (VAR_7 != ((void*)0)) {
  if (VAR_1 != ((void*)0))
   (void)(VAR_1->close)(VAR_1);
  if (FUNC_7(VAR_7) == -1) {
   FUNC_8("failed to unlink %s",FUNC_5(VAR_2));
  }
 }

 if (VAR_4) {
  VAR_10.tv_sec = 20;
  VAR_10.tv_usec = 0;

  if ((VAR_8 = FUNC_3(&VAR_3, VAR_4,
     1, VAR_10, &VAR_9)) == ((void*)0)) {
   FUNC_8("%s", FUNC_1("failed to "
       "establish callback handle"));
   FUNC_4(1);
  }

  VAR_5.status = (yppush_status)VAR_6;

  if (FUNC_9(&VAR_5, VAR_8) == ((void*)0)) {
   FUNC_8("%s", FUNC_2(VAR_8, "callback failed"));
   FUNC_0(VAR_8);
   FUNC_4(1);
  }
  FUNC_0(VAR_8);
 } else {
  FUNC_8("Exiting: %s", FUNC_10(VAR_6));
 }

 FUNC_4(0);
}
