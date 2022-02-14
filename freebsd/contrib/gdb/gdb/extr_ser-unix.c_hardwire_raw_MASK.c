
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct serial {scalar_t__ current_timeout; } ;
struct TYPE_6__ {int sg_flags; } ;
struct TYPE_5__ {int c_cflag; scalar_t__* c_cc; scalar_t__ c_lflag; scalar_t__ c_oflag; scalar_t__ c_iflag; } ;
struct TYPE_4__ {int c_cflag; scalar_t__* c_cc; scalar_t__ c_lflag; scalar_t__ c_oflag; scalar_t__ c_iflag; } ;
struct hardwire_ttystate {TYPE_3__ sgttyb; TYPE_2__ termio; TYPE_1__ termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct serial*,struct hardwire_ttystate*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct serial*,struct hardwire_ttystate*) ;

__attribute__((used)) static void
FUNC_4 (struct serial *VAR_12)
{
  struct hardwire_ttystate VAR_13;

  if (FUNC_1 (VAR_12, &VAR_13))
    FUNC_0 (VAR_11, "get_tty_state failed: %s\n", FUNC_2 (VAR_10));
  VAR_12->current_timeout = 0;

  if (FUNC_3 (VAR_12, &VAR_13))
    FUNC_0 (VAR_11, "set_tty_state failed: %s\n", FUNC_2 (VAR_10));
}
