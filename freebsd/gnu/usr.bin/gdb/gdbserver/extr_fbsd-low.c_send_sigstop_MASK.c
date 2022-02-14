
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct process_info {int sigstop_sent; TYPE_1__ head; scalar_t__ stop_expected; scalar_t__ stopped; } ;
struct inferior_list_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2 (struct inferior_list_entry *VAR_3)
{
  struct process_info *VAR_4 = (struct process_info *) VAR_3;

  if (VAR_4->stopped)
    return;



  if (VAR_4->stop_expected)
    {
      VAR_4->stop_expected = 0;
      return;
    }

  if (VAR_1)
    FUNC_0 (VAR_2, "Sending sigstop to process %d\n", VAR_4->head.id);

  FUNC_1 (VAR_4->head.id, VAR_0);
  VAR_4->sigstop_sent = 1;
}
