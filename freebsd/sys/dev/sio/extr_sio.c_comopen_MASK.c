
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {struct com_s* t_sc; } ;
struct com_s {int fifo_image; int prev_modem_status; int last_modem_status; int flags; int int_ctl_port; int modem_status_port; int data_port; int line_status_port; scalar_t__ hasfifo; int loses_outints; int poll_output; int no_irq; int poll; } ;
struct cdev {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct cdev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int VAR_10 ;
 int FUNC_7 (struct com_s*,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct tty*,int) ;

__attribute__((used)) static int
FUNC_10(struct tty *VAR_11, struct cdev *VAR_12)
{
 struct com_s *VAR_13;
 int VAR_14;

 VAR_13 = VAR_11->t_sc;
 VAR_13->poll = VAR_13->no_irq;
 VAR_13->poll_output = VAR_13->loses_outints;
 if (VAR_13->hasfifo) {
  for (VAR_14 = 0; VAR_14 < 500; VAR_14++) {
   FUNC_7(VAR_13, VAR_9,
       VAR_1 | VAR_2
       | VAR_13->fifo_image);
   FUNC_1(50);
   if (!(FUNC_3(VAR_13->line_status_port) & VAR_7))
    break;
   FUNC_7(VAR_13, VAR_9, 0);
   FUNC_1(50);
   (void) FUNC_3(VAR_13->data_port);
  }
  if (VAR_14 == 500)
   return (VAR_0);
 }

 FUNC_4(&VAR_10);
 (void) FUNC_3(VAR_13->line_status_port);
 (void) FUNC_3(VAR_13->data_port);
 VAR_13->prev_modem_status = VAR_13->last_modem_status
     = FUNC_3(VAR_13->modem_status_port);
 FUNC_6(VAR_13->int_ctl_port,
      VAR_5 | VAR_4 | VAR_3
      | (FUNC_0(VAR_13->flags) ? 0 : VAR_6));
 FUNC_5(&VAR_10);
 FUNC_8();

 if (VAR_13->prev_modem_status & VAR_8 || FUNC_2(VAR_12))
  FUNC_9(VAR_11, 1);
 return (0);
}
