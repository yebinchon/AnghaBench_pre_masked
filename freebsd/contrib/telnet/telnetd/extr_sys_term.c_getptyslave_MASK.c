
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ws ;
struct winsize {int ws_col; int ws_row; } ;
struct TYPE_3__ {int sg_flags; } ;
struct TYPE_4__ {char* c_cc; TYPE_1__ sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,char*) ;
 char* VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ,int) ;
 int VAR_10 ;
 int FUNC_7 (int ,int ) ;
 int VAR_11 ;
 int FUNC_8 () ;
 TYPE_2__ VAR_12 ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(void)
{
 int VAR_13 = -1;
 char VAR_14;
 extern int VAR_15, VAR_16;
 VAR_14 = VAR_12.c_cc[VAR_6];
 VAR_13 = FUNC_0(VAR_9);
 if (VAR_13 < 0)
  FUNC_2(VAR_10, VAR_9);





 FUNC_3();
 VAR_12.sg.sg_flags |= VAR_1|VAR_0|VAR_2|VAR_7;







 FUNC_10((VAR_16 > 0) ? VAR_16 : 9600);
 FUNC_12((VAR_15 > 0) ? VAR_15 : 9600);
 if (VAR_14)
  VAR_12.c_cc[VAR_6] = VAR_14;
 FUNC_8();
 if (FUNC_5(VAR_13) == -1)
  FUNC_2(VAR_10, "login_tty");
 if (VAR_10 > 2)
  (void) FUNC_1(VAR_10);
}
