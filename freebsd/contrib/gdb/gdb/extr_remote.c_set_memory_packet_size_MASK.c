
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_packet_config {int fixed_p; long size; int name; } ;


 long VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,long) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 long FUNC_3 (char*,char**,int ) ;

__attribute__((used)) static void
FUNC_4 (char *VAR_1, struct memory_packet_config *VAR_2)
{
  int VAR_3 = VAR_2->fixed_p;
  long VAR_4 = VAR_2->size;
  if (VAR_1 == ((void*)0))
    FUNC_0 ("Argument required (integer, `fixed' or `limited').");
  else if (FUNC_2 (VAR_1, "hard") == 0
      || FUNC_2 (VAR_1, "fixed") == 0)
    VAR_3 = 1;
  else if (FUNC_2 (VAR_1, "soft") == 0
    || FUNC_2 (VAR_1, "limit") == 0)
    VAR_3 = 0;
  else
    {
      char *VAR_5;
      VAR_4 = FUNC_3 (VAR_1, &VAR_5, 0);
      if (VAR_1 == VAR_5)
 FUNC_0 ("Invalid %s (bad syntax).", VAR_2->name);
    }

  if (VAR_3 && !VAR_2->fixed_p)
    {
      if (! FUNC_1 ("The target may not be able to correctly handle a %s\n"
     "of %ld bytes. Change the packet size? ",
     VAR_2->name, VAR_4))
 FUNC_0 ("Packet size not changed.");
    }

  VAR_2->fixed_p = VAR_3;
  VAR_2->size = VAR_4;
}
