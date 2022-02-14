
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibdiag_opt {char* member_0; char member_1; char* member_4; int * member_3; int member_2; } ;
typedef int names ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int,char**,int *,char*,struct ibdiag_opt const*,int ,char*,char const**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (char**,int) ;
 int FUNC_4 (char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (char**,int) ;
 scalar_t__ FUNC_9 () ;

int FUNC_10(int VAR_7, char *VAR_8[])
{
 char VAR_9[VAR_1][VAR_0];
 int VAR_10 = -1;
 int VAR_11, VAR_12;

 const struct ibdiag_opt VAR_13[] = {
  {"list_of_cas", 'l', 0, ((void*)0), "list all IB devices"},
  {"short", 's', 0, ((void*)0), "short output"},
  {"port_list", 'p', 0, ((void*)0), "show port list"},
  {0}
 };
 char VAR_14[] = "<ca_name> [portnum]";
 const char *VAR_15[] = {
  "-l       # list all IB devices",
  "mthca0 2 # stat port 2 of 'mthca0'",
  ((void*)0)
 };

 FUNC_2(VAR_7, VAR_8, ((void*)0), "CDeGKLPsty", VAR_13, VAR_5,
       VAR_14, VAR_15);

 VAR_7 -= VAR_4;
 VAR_8 += VAR_4;

 if (VAR_7 > 1)
  VAR_10 = FUNC_7(VAR_8[1], 0, 0);

 if (FUNC_9() < 0)
  FUNC_0("can't init UMAD library");

 if ((VAR_11 = FUNC_8(VAR_9, VAR_1)) < 0)
  FUNC_0("can't list IB device names");

 if (VAR_7) {
  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
   if (!FUNC_5(VAR_9[VAR_12], VAR_8[0], sizeof VAR_9[VAR_12]))
    break;
  if (VAR_12 >= VAR_11)
   FUNC_0("'%s' IB device can't be found", VAR_8[0]);

  FUNC_6(VAR_9[0], VAR_8[0], sizeof(VAR_9[0])-1);
  VAR_9[0][sizeof(VAR_9[0])-1] = '\0';
  VAR_11 = 1;
 }

 if (VAR_3) {
  if (FUNC_3(VAR_9, VAR_11) < 0)
   FUNC_0("can't list ports");
  return 0;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  if (VAR_2)
   FUNC_4("%s\n", VAR_9[VAR_12]);
  else if (FUNC_1(VAR_9[VAR_12], VAR_10, VAR_6) < 0)
   FUNC_0("stat of IB device '%s' failed", VAR_9[VAR_12]);
 }

 return 0;
}
