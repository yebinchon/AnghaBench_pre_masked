
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshbuf {int dummy; } ;
struct ssh {int compat; TYPE_1__* kex; } ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,int*,int*,char*) ;
 struct sshbuf* FUNC_4 (struct ssh*) ;
 int FUNC_5 (struct ssh*) ;
 int FUNC_6 (struct sshbuf*,size_t) ;
 size_t FUNC_7 (struct sshbuf*) ;
 scalar_t__ FUNC_8 (struct sshbuf*) ;
 int FUNC_9 (int ,char const*,int ) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;

int
FUNC_13(struct ssh *VAR_4, char **VAR_5)
{
 struct sshbuf *VAR_6;
 const char *VAR_7;
 char VAR_8[256], VAR_9[256];
 const char *VAR_10 = "Protocol mismatch.\r\n";
 int VAR_11, VAR_12, VAR_13;
 size_t VAR_14, VAR_15, VAR_16, VAR_17;

 *VAR_5 = ((void*)0);
 VAR_6 = FUNC_4(VAR_4);
 VAR_17 = FUNC_7(VAR_6);
 VAR_7 = (const char *)FUNC_8(VAR_6);
 for (VAR_16 = VAR_15 = 0;;) {
  for (VAR_14 = 0; VAR_14 < sizeof(VAR_8) - 1; VAR_14++) {
   if (VAR_16 >= VAR_17)
    return (0);
   VAR_8[VAR_14] = VAR_7[VAR_16++];
   if (VAR_8[VAR_14] == '\r') {
    VAR_8[VAR_14] = '\n';
    VAR_8[VAR_14 + 1] = 0;
    continue;
   }
   if (VAR_8[VAR_14] == '\n') {
    VAR_8[VAR_14 + 1] = 0;
    break;
   }
  }
  VAR_8[sizeof(VAR_8) - 1] = 0;
  if (FUNC_12(VAR_8, "SSH-", 4) == 0)
   break;
  FUNC_2("ssh_exchange_identification: %s", VAR_8);
  if (VAR_4->kex->server || ++VAR_15 > 65536) {
   if ((VAR_11 = FUNC_9(FUNC_5(VAR_4),
      VAR_10, FUNC_11(VAR_10))) != 0)
    return VAR_11;
   return VAR_2;
  }
 }
 if ((VAR_11 = FUNC_6(VAR_6, VAR_16)) != 0)
  return VAR_11;





 if (FUNC_3(VAR_8, "SSH-%d.%d-%[^\n]\n",
     &VAR_12, &VAR_13, VAR_9) != 3)
  return VAR_1;
 FUNC_2("Remote protocol version %d.%d, remote software version %.100s",
     VAR_12, VAR_13, VAR_9);

 VAR_4->compat = FUNC_1(VAR_9);
 if (VAR_12 == 1 && VAR_13 == 99) {
  VAR_12 = 2;
  VAR_13 = 0;
 }
 if (VAR_12 != 2)
  return VAR_3;
 FUNC_0(VAR_8);
 FUNC_2("Remote version string %.100s", VAR_8);
 if ((*VAR_5 = FUNC_10(VAR_8)) == ((void*)0))
  return VAR_0;
 return 0;
}
