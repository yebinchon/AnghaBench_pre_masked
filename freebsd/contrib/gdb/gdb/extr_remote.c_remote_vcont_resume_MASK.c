
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct remote_state {scalar_t__ remote_packet_size; } ;
struct cleanup {int dummy; } ;
typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {scalar_t__ support; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (int ) ;
 struct remote_state* FUNC_3 () ;
 int VAR_4 ;
 struct cleanup* FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (struct remote_state*,char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int VAR_6 ;
 char* FUNC_8 (scalar_t__) ;
 char* FUNC_9 (char*,...) ;

__attribute__((used)) static int
FUNC_10 (ptid_t VAR_7, int VAR_8, enum target_signal VAR_9)
{
  struct remote_state *VAR_10 = FUNC_3 ();
  int VAR_11 = FUNC_0 (VAR_7);
  char *VAR_12 = ((void*)0), *VAR_13;
  struct cleanup *VAR_14;

  VAR_12 = FUNC_8 (VAR_10->remote_packet_size);
  VAR_14 = FUNC_4 (VAR_6, VAR_12);

  if (VAR_5.support == VAR_2)
    FUNC_6 (VAR_10, VAR_12);

  if (VAR_5.support == VAR_1)
    {
      FUNC_1 (VAR_14);
      return 0;
    }





  if (FUNC_0 (VAR_4) == VAR_0)
    {



      if (VAR_8 && VAR_9 != VAR_3)
 VAR_13 = FUNC_9 ("vCont;S%02x", VAR_9);
      else if (VAR_8)
 VAR_13 = FUNC_9 ("vCont;s");
      else if (VAR_9 != VAR_3)
 VAR_13 = FUNC_9 ("vCont;C%02x", VAR_9);
      else
 VAR_13 = FUNC_9 ("vCont;c");
    }
  else if (VAR_11 == -1)
    {

      if (VAR_8 && VAR_9 != VAR_3)
 VAR_13 = FUNC_9 ("vCont;S%02x:%x;c", VAR_9,
        FUNC_0 (VAR_4));
      else if (VAR_8)
 VAR_13 = FUNC_9 ("vCont;s:%x;c", FUNC_0 (VAR_4));
      else if (VAR_9 != VAR_3)
 VAR_13 = FUNC_9 ("vCont;C%02x:%x;c", VAR_9,
        FUNC_0 (VAR_4));
      else
 VAR_13 = FUNC_9 ("vCont;c");
    }
  else
    {

      if (VAR_8 && VAR_9 != VAR_3)
 VAR_13 = FUNC_9 ("vCont;S%02x:%x", VAR_9, VAR_11);
      else if (VAR_8)
 VAR_13 = FUNC_9 ("vCont;s:%x", VAR_11);
      else if (VAR_9 != VAR_3)
 VAR_13 = FUNC_9 ("vCont;C%02x:%x", VAR_9, VAR_11);
      else
 VAR_13 = FUNC_9 ("vCont;c:%x", VAR_11);
    }

  FUNC_2 (VAR_13 && FUNC_7 (VAR_13) < VAR_10->remote_packet_size);
  FUNC_4 (VAR_6, VAR_13);

  FUNC_5 (VAR_13);

  FUNC_1 (VAR_14);

  return 1;
}
