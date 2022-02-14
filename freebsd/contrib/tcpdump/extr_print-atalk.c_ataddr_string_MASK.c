
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct hnamemem {int addr; char const* name; struct hnamemem* nxt; } ;
struct TYPE_7__ {int (* ndo_error ) (TYPE_1__*,char*) ;int ndo_nflag; } ;
typedef TYPE_1__ netdissect_options ;
typedef int nambuf ;
typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 struct hnamemem* VAR_1 ;
 void* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int,char*,...) ;
 int FUNC_5 (char*,char*,int*,...) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,char*) ;

__attribute__((used)) static const char *
FUNC_10(netdissect_options *VAR_2,
              u_short VAR_3, u_char VAR_4)
{
 register struct hnamemem *VAR_5, *VAR_6;
 register int VAR_7 = (VAR_3 << 8) | VAR_4;
 char VAR_8[256+1];
 static int VAR_9 = 1;
 FILE *VAR_10;





 if (VAR_9 && (VAR_9 = 0, !VAR_2->ndo_nflag)
     && (VAR_10 = FUNC_2("/etc/atalk.names", "r"))) {
  char VAR_11[256];
  int VAR_12, VAR_13;

  while (FUNC_1(VAR_11, sizeof(VAR_11), VAR_10)) {
   if (VAR_11[0] == '\n' || VAR_11[0] == 0 || VAR_11[0] == '#')
    continue;
   if (FUNC_5(VAR_11, "%d.%d %256s", &VAR_12, &VAR_13, VAR_8) == 3)

    VAR_13 |= (VAR_12 << 8);
   else if (FUNC_5(VAR_11, "%d %256s", &VAR_12, VAR_8) == 2)

    VAR_13 = (VAR_12 << 8) | 255;
   else
    continue;

   for (VAR_5 = &VAR_1[VAR_13 & (VAR_0-1)];
        VAR_5->nxt; VAR_5 = VAR_5->nxt)
    ;
   VAR_5->addr = VAR_13;
   VAR_5->nxt = FUNC_3(VAR_2);
   VAR_5->name = FUNC_6(VAR_8);
   if (VAR_5->name == ((void*)0))
    (*VAR_2->ndo_error)(VAR_2,
        "ataddr_string: strdup(nambuf)");
  }
  FUNC_0(VAR_10);
 }

 for (VAR_5 = &VAR_1[VAR_7 & (VAR_0-1)]; VAR_5->nxt; VAR_5 = VAR_5->nxt)
  if (VAR_5->addr == VAR_7)
   return (VAR_5->name);


 VAR_7 |= 255;
 for (VAR_6 = &VAR_1[VAR_7 & (VAR_0-1)]; VAR_6->nxt; VAR_6 = VAR_6->nxt)
  if (VAR_6->addr == VAR_7) {
   VAR_5->addr = (VAR_3 << 8) | VAR_4;
   VAR_5->nxt = FUNC_3(VAR_2);
   (void)FUNC_4(VAR_8, sizeof(VAR_8), "%s.%d",
       VAR_6->name, VAR_4);
   VAR_5->name = FUNC_6(VAR_8);
   if (VAR_5->name == ((void*)0))
    (*VAR_2->ndo_error)(VAR_2,
        "ataddr_string: strdup(nambuf)");
   return (VAR_5->name);
  }

 VAR_5->addr = (VAR_3 << 8) | VAR_4;
 VAR_5->nxt = FUNC_3(VAR_2);
 if (VAR_4 != 255)
  (void)FUNC_4(VAR_8, sizeof(VAR_8), "%d.%d", VAR_3, VAR_4);
 else
  (void)FUNC_4(VAR_8, sizeof(VAR_8), "%d", VAR_3);
 VAR_5->name = FUNC_6(VAR_8);
 if (VAR_5->name == ((void*)0))
  (*VAR_2->ndo_error)(VAR_2, "ataddr_string: strdup(nambuf)");

 return (VAR_5->name);
}
