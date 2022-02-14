
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {int l_start; int l_len; int l_whence; int l_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int,int ,struct flock*) ;
 int VAR_8 ;
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 () ;
 int VAR_11 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(int VAR_12)
{
 int VAR_13, VAR_14;

 FUNC_7(FUNC_3());

 VAR_14 = FUNC_4 (VAR_9, VAR_5, 0);

 if (VAR_14 < 0)
  FUNC_1(1, "%s", VAR_9);

 FUNC_5("%d: start\n", VAR_12);

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  struct flock VAR_15;

  VAR_15.l_start = FUNC_6() % VAR_8;
  VAR_15.l_len = FUNC_6() % VAR_8;
  switch (FUNC_6() % 3) {
  case 0:
   VAR_15.l_type = VAR_1;
   break;
  case 1:
   VAR_15.l_type = VAR_4;
   break;
  case 2:
   VAR_15.l_type = VAR_3;
   break;
  }
  VAR_15.l_whence = VAR_6;

  (void)FUNC_2(VAR_14, VAR_2, &VAR_15);

  if (FUNC_8(VAR_11) < 0)



    FUNC_1(1, "usleep");
 }
 FUNC_5("%d: done\n", VAR_12);
 FUNC_0 (VAR_14);
}
