
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int member_1; int member_0; } ;
typedef int fd_set ;
struct TYPE_2__ {int (* send_signal ) (int ) ;} ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int,char) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int ,int ,struct timeval*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_6 (int VAR_4)
{
  fd_set VAR_5;
  struct timeval VAR_6 = { 0, 0 };




  FUNC_1 (&VAR_5);
  FUNC_0 (VAR_1, &VAR_5);
  if (FUNC_4 (VAR_1 + 1, &VAR_5, 0, 0, &VAR_6) > 0)
    {
      int VAR_7;
      char VAR_8;

      VAR_7 = FUNC_3 (VAR_1, &VAR_8, 1);

      if (VAR_7 != 1 || VAR_8 != '\003')
 {
   FUNC_2 (VAR_2, "input_interrupt, cc = %d c = %hhd\n", VAR_7, VAR_8);
   return;
 }

      (*VAR_3->send_signal) (VAR_0);
    }
}
