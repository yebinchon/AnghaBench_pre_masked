
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {struct com_s* t_sc; } ;
struct com_s {int unit; int channel_control; int intr_enable; int last_modem_status; int prev_modem_status; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct com_s*,int) ;
 int FUNC_3 (struct com_s*,int ) ;
 int FUNC_4 (struct com_s*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(struct tty *VAR_9, struct cdev *VAR_10)
{
 struct com_s *VAR_11;
 int VAR_12;

 VAR_11 = VAR_9->t_sc;
 VAR_12 = FUNC_8();






 FUNC_4(VAR_11, VAR_2,
    (VAR_11->unit & VAR_7) << VAR_8);






 FUNC_2(VAR_11,
      VAR_1 | VAR_0);
 FUNC_2(VAR_11, VAR_11->channel_control);

 FUNC_5();
 FUNC_0();
 VAR_11->prev_modem_status = VAR_11->last_modem_status
     = FUNC_3(VAR_11, VAR_3);
 FUNC_4(VAR_11, VAR_4,
    VAR_11->intr_enable
    = VAR_5 | VAR_6);
 FUNC_1();
 FUNC_6();
 FUNC_7();
 return (0);
}
