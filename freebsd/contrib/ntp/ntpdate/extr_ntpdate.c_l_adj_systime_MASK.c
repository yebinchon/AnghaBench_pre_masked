
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_9__ {scalar_t__ l_ui; scalar_t__ l_uf; } ;
typedef TYPE_1__ l_fp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct timeval*) ;
 scalar_t__ FUNC_5 (struct timeval*,struct timeval*) ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(
 l_fp *VAR_3
 )
{
 struct timeval VAR_4, VAR_5;
 int VAR_6 = 0;
 l_fp VAR_7;

 l_fp VAR_8;





 VAR_7 = *VAR_3;
 if (FUNC_1(&VAR_7)) {
  VAR_6 = 1;
  FUNC_2(&VAR_7);
 }






 VAR_8 = VAR_7;
 FUNC_3(&VAR_8);
 if (VAR_8.l_ui != 0 || (VAR_8.l_uf > VAR_0)) {
  VAR_8.l_ui = 0;
  VAR_8.l_uf = VAR_0;
 }
 FUNC_0(&VAR_7, &VAR_8);

 FUNC_4(&VAR_7, &VAR_4);

 if (VAR_6) {
  VAR_4.tv_sec = -VAR_4.tv_sec;
  VAR_4.tv_usec = -VAR_4.tv_usec;
 }

 if (!VAR_2 && (VAR_4.tv_usec != 0)) {



  if (FUNC_5(&VAR_4, &VAR_5) < 0) {
   FUNC_7(VAR_1, "Can't adjust the time of day: %m");
   FUNC_6(1);
  }
 }
 return 1;
}
