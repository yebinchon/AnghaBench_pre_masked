
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sendlist {int narg; char* name; int what; scalar_t__ (* handler ) (char*,char*) ;scalar_t__ needconnect; scalar_t__ nbyte; } ;


 scalar_t__ FUNC_0 (struct sendlist*) ;
 struct sendlist* FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int
FUNC_10(int VAR_3, char **VAR_4)
{
    int VAR_5;
    int VAR_6;
    struct sendlist *VAR_7;
    int VAR_8 = 0;
    int VAR_9 = 0;

    if (VAR_3 < 2) {
 FUNC_5("need at least one argument for 'send' command\r\n");
 FUNC_5("'send ?' for help\r\n");
 return 0;
    }






    VAR_5 = 0;
    for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++) {
 VAR_7 = FUNC_1(VAR_4[VAR_6]);
 if (VAR_7 == 0) {
     FUNC_5("Unknown send argument '%s'\r\n'send ?' for help.\r\n",
   VAR_4[VAR_6]);
     return 0;
 } else if (FUNC_0(VAR_7)) {
     FUNC_5("Ambiguous send argument '%s'\r\n'send ?' for help.\r\n",
   VAR_4[VAR_6]);
     return 0;
 }
 if (VAR_6 + VAR_7->narg >= VAR_3) {
     FUNC_4(VAR_2,
     "Need %d argument%s to 'send %s' command.  'send %s ?' for help.\r\n",
  VAR_7->narg, VAR_7->narg == 1 ? "" : "s", VAR_7->name, VAR_7->name);
     return 0;
 }
 VAR_5 += VAR_7->nbyte;
 if (VAR_7->handler == FUNC_8) {
     FUNC_8();
     return 0;
 }

 VAR_6 += VAR_7->narg;
 VAR_9 += VAR_7->needconnect;
    }
    if (!VAR_1 && VAR_9) {
 FUNC_5("?Need to be connected first.\r\n");
 FUNC_5("'send ?' for help\r\n");
 return 0;
    }

    if (FUNC_3() < VAR_5) {
 FUNC_5("There is not enough room in the buffer TO the network\r\n");
 FUNC_5("to process your request.  Nothing will be done.\r\n");
 FUNC_5("('send synch' will throw away most data in the network\r\n");
 FUNC_5("buffer, if this might help.)\r\n");
 return 0;
    }

    VAR_5 = 0;
    for (VAR_6 = 1; VAR_6 < VAR_3; VAR_6++) {
 if ((VAR_7 = FUNC_1(VAR_4[VAR_6])) == 0) {
     FUNC_4(VAR_2, "Telnet 'send' error - argument disappeared!\r\n");
     FUNC_7();

 }
 if (VAR_7->handler) {
     VAR_5++;
     VAR_8 += (*VAR_7->handler)((VAR_7->narg > 0) ? VAR_4[VAR_6+1] : 0,
      (VAR_7->narg > 1) ? VAR_4[VAR_6+2] : 0);
     VAR_6 += VAR_7->narg;
 } else {
     FUNC_2(VAR_0, VAR_7->what);
     FUNC_6("SENT", VAR_0, VAR_7->what);
 }
    }
    return (VAR_5 == VAR_8);
}
