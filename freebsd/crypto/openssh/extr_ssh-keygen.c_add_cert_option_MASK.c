
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* key; char* val; int crit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 TYPE_1__* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (char*,...) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int,int) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(char *VAR_10)
{
 char *VAR_11, *VAR_12;
 int VAR_13 = 0;

 if (FUNC_2(VAR_10, "clear") == 0)
  VAR_7 = 0;
 else if (FUNC_2(VAR_10, "no-x11-forwarding") == 0)
  VAR_7 &= ~VAR_4;
 else if (FUNC_2(VAR_10, "permit-x11-forwarding") == 0)
  VAR_7 |= VAR_4;
 else if (FUNC_2(VAR_10, "no-agent-forwarding") == 0)
  VAR_7 &= ~VAR_0;
 else if (FUNC_2(VAR_10, "permit-agent-forwarding") == 0)
  VAR_7 |= VAR_0;
 else if (FUNC_2(VAR_10, "no-port-forwarding") == 0)
  VAR_7 &= ~VAR_1;
 else if (FUNC_2(VAR_10, "permit-port-forwarding") == 0)
  VAR_7 |= VAR_1;
 else if (FUNC_2(VAR_10, "no-pty") == 0)
  VAR_7 &= ~VAR_2;
 else if (FUNC_2(VAR_10, "permit-pty") == 0)
  VAR_7 |= VAR_2;
 else if (FUNC_2(VAR_10, "no-user-rc") == 0)
  VAR_7 &= ~VAR_3;
 else if (FUNC_2(VAR_10, "permit-user-rc") == 0)
  VAR_7 |= VAR_3;
 else if (FUNC_4(VAR_10, "force-command=", 14) == 0) {
  VAR_11 = VAR_10 + 14;
  if (*VAR_11 == '\0')
   FUNC_1("Empty force-command option");
  if (VAR_6 != ((void*)0))
   FUNC_1("force-command already specified");
  VAR_6 = FUNC_6(VAR_11);
 } else if (FUNC_4(VAR_10, "source-address=", 15) == 0) {
  VAR_11 = VAR_10 + 15;
  if (*VAR_11 == '\0')
   FUNC_1("Empty source-address option");
  if (VAR_8 != ((void*)0))
   FUNC_1("source-address already specified");
  if (FUNC_0(((void*)0), VAR_11) != 0)
   FUNC_1("Invalid source-address list");
  VAR_8 = FUNC_6(VAR_11);
 } else if (FUNC_4(VAR_10, "extension:", 10) == 0 ||
     (VAR_13 = (FUNC_4(VAR_10, "critical:", 9) == 0))) {
  VAR_11 = FUNC_6(FUNC_3(VAR_10, ':') + 1);
  if ((VAR_12 = FUNC_3(VAR_11, '=')) != ((void*)0))
   *VAR_12++ = '\0';
  VAR_5 = FUNC_5(VAR_5, VAR_9 + 1,
      sizeof(*VAR_5));
  VAR_5[VAR_9].key = VAR_11;
  VAR_5[VAR_9].val = VAR_12 == ((void*)0) ?
      ((void*)0) : FUNC_6(VAR_12);
  VAR_5[VAR_9].crit = VAR_13;
  VAR_9++;
 } else
  FUNC_1("Unsupported certificate option \"%s\"", VAR_10);
}
