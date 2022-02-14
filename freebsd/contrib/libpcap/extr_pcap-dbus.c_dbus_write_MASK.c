
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pcap_dbus {int conn; } ;
struct TYPE_7__ {int errbuf; struct pcap_dbus* priv; } ;
typedef TYPE_1__ pcap_t ;
struct TYPE_8__ {int message; } ;
typedef int DBusMessage ;
typedef TYPE_2__ DBusError ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (void const*,size_t,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_6(pcap_t *VAR_2, const void *VAR_3, size_t VAR_4)
{

 struct pcap_dbus *VAR_5 = VAR_2->priv;

 DBusError VAR_6 = VAR_0;
 DBusMessage *VAR_7;

 if (!(VAR_7 = FUNC_3(VAR_3, VAR_4, &VAR_6))) {
  FUNC_5(VAR_2->errbuf, VAR_1, "dbus_message_demarshal() failed: %s", VAR_6.message);
  FUNC_2(&VAR_6);
  return -1;
 }

 FUNC_1(VAR_5->conn, VAR_7, ((void*)0));
 FUNC_0(VAR_5->conn);

 FUNC_4(VAR_7);
 return 0;
}
