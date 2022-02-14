
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tts_event; scalar_t__ tts_user_tid; scalar_t__ tts_lwpid; scalar_t__ tts_pid; } ;
typedef TYPE_1__ ttstate_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0 (ttstate_t *VAR_1)
{
  VAR_1->tts_pid = 0;
  VAR_1->tts_lwpid = 0;
  VAR_1->tts_user_tid = 0;
  VAR_1->tts_event = VAR_0;
}
