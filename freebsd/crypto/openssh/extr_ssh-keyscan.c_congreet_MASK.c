
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* c_name; TYPE_2__* c_ssh; } ;
typedef TYPE_1__ con ;
typedef int buf ;
struct TYPE_9__ {scalar_t__ compat; } ;




 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int,char*,int) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*) ;
 int VAR_2 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_8 (int ,char*,char,char*,int,char*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,char,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*,int,char*,int,int) ;
 int FUNC_12 (char*,char*,int*,int*,char*) ;
 int FUNC_13 (int,int) ;
 TYPE_2__* FUNC_14 (int *,int,int) ;
 int FUNC_15 (TYPE_2__*,int ,int) ;
 int VAR_6 ;
 int FUNC_16 (TYPE_2__*,TYPE_1__*) ;
 int VAR_7 ;
 char* FUNC_17 (int) ;
 scalar_t__ FUNC_18 (char*,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_19(int VAR_10)
{
 int VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 char VAR_14[256], *VAR_15;
 char VAR_16[sizeof VAR_14];
 size_t VAR_17;
 con *VAR_18 = &VAR_3[VAR_10];


 VAR_11 = FUNC_11(VAR_14, sizeof VAR_14, "SSH-%d.%d-OpenSSH-keyscan\r\n",
     VAR_0, VAR_1);
 if (VAR_11 < 0 || (size_t)VAR_11 >= sizeof(VAR_14)) {
  FUNC_6("snprintf: buffer too small");
  FUNC_3(VAR_10);
  return;
 }
 if (FUNC_0(VAR_9, VAR_10, VAR_14, VAR_11) != (size_t)VAR_11) {
  FUNC_6("write (%s): %s", VAR_18->c_name, FUNC_17(VAR_2));
  FUNC_3(VAR_10);
  return;
 }

 for (;;) {
  FUNC_10(VAR_14, '\0', sizeof(VAR_14));
  VAR_17 = sizeof(VAR_14);
  VAR_15 = VAR_14;
  while (VAR_17-- &&
      (VAR_11 = FUNC_0(VAR_5, VAR_10, VAR_15, 1)) == 1 && *VAR_15 != '\n') {
   if (*VAR_15 == '\r')
    *VAR_15 = '\n';
   VAR_15++;
  }
  if (VAR_11 != 1 || FUNC_18(VAR_14, "SSH-", 4) == 0)
   break;
 }
 if (VAR_11 == 0) {
  switch (VAR_2) {
  case 128:
   FUNC_6("%s: Connection closed by remote host", VAR_18->c_name);
   break;
  case 129:
   break;
  default:
   FUNC_6("read (%s): %s", VAR_18->c_name, FUNC_17(VAR_2));
   break;
  }
  FUNC_4(VAR_10);
  return;
 }
 if (*VAR_15 != '\n' && *VAR_15 != '\r') {
  FUNC_6("%s: bad greeting", VAR_18->c_name);
  FUNC_3(VAR_10);
  return;
 }
 *VAR_15 = '\0';
 if ((VAR_18->c_ssh = FUNC_14(((void*)0), VAR_10, VAR_10)) == ((void*)0))
  FUNC_7("ssh_packet_set_connection failed");
 FUNC_15(VAR_18->c_ssh, VAR_8, 1);
 FUNC_16(VAR_18->c_ssh, VAR_18);
 if (FUNC_12(VAR_14, "SSH-%d.%d-%[^\n]\n",
     &VAR_12, &VAR_13, VAR_16) == 3)
  VAR_18->c_ssh->compat = FUNC_2(VAR_16);
 else
  VAR_18->c_ssh->compat = 0;
 if (!FUNC_13(VAR_12, VAR_13)) {
  FUNC_5("%s doesn't support ssh2", VAR_18->c_name);
  FUNC_3(VAR_10);
  return;
 }
 FUNC_8(VAR_7, "%c %s:%d %s\n", VAR_4 ? ';' : '#',
     VAR_18->c_name, VAR_6, FUNC_1(VAR_14));
 FUNC_9(VAR_18);
 FUNC_3(VAR_10);
}
