
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshbuf {int dummy; } ;
struct TYPE_2__ {char* key; int * val; scalar_t__ crit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sshbuf*,char*) ;
 int FUNC_1 (struct sshbuf*,char*,int *) ;
 TYPE_1__* VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 size_t VAR_11 ;
 int FUNC_2 (struct sshbuf*) ;

__attribute__((used)) static void
FUNC_3(struct sshbuf *VAR_12, int VAR_13)
{
 size_t VAR_14;

 FUNC_2(VAR_12);
 if ((VAR_13 & VAR_5) != 0 &&
     VAR_8 != ((void*)0))
  FUNC_1(VAR_12, "force-command", VAR_8);
 if ((VAR_13 & VAR_6) != 0 &&
     (VAR_9 & VAR_4) != 0)
  FUNC_0(VAR_12, "permit-X11-forwarding");
 if ((VAR_13 & VAR_6) != 0 &&
     (VAR_9 & VAR_0) != 0)
  FUNC_0(VAR_12, "permit-agent-forwarding");
 if ((VAR_13 & VAR_6) != 0 &&
     (VAR_9 & VAR_1) != 0)
  FUNC_0(VAR_12, "permit-port-forwarding");
 if ((VAR_13 & VAR_6) != 0 &&
     (VAR_9 & VAR_2) != 0)
  FUNC_0(VAR_12, "permit-pty");
 if ((VAR_13 & VAR_6) != 0 &&
     (VAR_9 & VAR_3) != 0)
  FUNC_0(VAR_12, "permit-user-rc");
 if ((VAR_13 & VAR_5) != 0 &&
     VAR_10 != ((void*)0))
  FUNC_1(VAR_12, "source-address", VAR_10);
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  if ((VAR_7[VAR_14].crit && (VAR_13 & VAR_6)) ||
      (!VAR_7[VAR_14].crit && (VAR_13 & VAR_5)))
   continue;
  if (VAR_7[VAR_14].val == ((void*)0))
   FUNC_0(VAR_12, VAR_7[VAR_14].key);
  else {
   FUNC_1(VAR_12, VAR_7[VAR_14].key,
       VAR_7[VAR_14].val);
  }
 }
}
