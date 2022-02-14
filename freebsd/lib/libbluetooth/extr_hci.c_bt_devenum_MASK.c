
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_hci {int hci_len; char* hci_node; int hci_family; } ;
struct sockaddr {int dummy; } ;
struct nodeinfo {int name; } ;
struct ng_btsocket_hci_raw_node_list_names {int num_names; struct nodeinfo* names; } ;
struct bt_devinfo {char* devname; } ;
typedef int rp ;
typedef int ha ;
typedef scalar_t__ (* bt_devenum_cb_t ) (int,struct bt_devinfo*,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (struct bt_devinfo*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int VAR_7 ;
 int FUNC_5 (struct nodeinfo*) ;
 scalar_t__ FUNC_6 (int,int ,struct ng_btsocket_hci_raw_node_list_names*,int) ;
 int FUNC_7 (struct sockaddr_hci*,int ,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*,int ,int) ;
 scalar_t__ FUNC_10 (int,struct bt_devinfo*,void*) ;

int
FUNC_11(bt_devenum_cb_t VAR_8, void *VAR_9)
{
 struct ng_btsocket_hci_raw_node_list_names VAR_10;
 struct bt_devinfo VAR_11;
 struct sockaddr_hci VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_10.num_names = VAR_3;
 VAR_10.names = (struct nodeinfo *) FUNC_2(VAR_10.num_names,
      sizeof(struct nodeinfo));
 if (VAR_10.names == ((void*)0)) {
  VAR_7 = VAR_2;
  return (-1);
 }

 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.hci_len = sizeof(VAR_12);
 VAR_12.hci_family = VAR_0;
 VAR_12.hci_node[0] = 'x';

 VAR_13 = FUNC_8(VAR_4, VAR_6, VAR_1);
 if (VAR_13 < 0) {
  FUNC_5(VAR_10.names);

  return (-1);
 }

 if (FUNC_0(VAR_13, (struct sockaddr *) &VAR_12, sizeof(VAR_12)) < 0 ||
     FUNC_4(VAR_13, (struct sockaddr *) &VAR_12, sizeof(VAR_12)) < 0 ||
     FUNC_6(VAR_13, VAR_5, &VAR_10, sizeof(VAR_10)) < 0) {
  FUNC_3(VAR_13);
  FUNC_5(VAR_10.names);

  return (-1);
 }

 for (VAR_15 = 0, VAR_14 = 0; VAR_14 < VAR_10.num_names; VAR_14 ++) {
  FUNC_9(VAR_11.devname, VAR_10.names[VAR_14].name, sizeof(VAR_11.devname));
  if (FUNC_1(&VAR_11) < 0)
   continue;

  VAR_15 ++;

  if (VAR_8 == ((void*)0))
   continue;

  FUNC_9(VAR_12.hci_node, VAR_10.names[VAR_14].name, sizeof(VAR_12.hci_node));
  if (FUNC_0(VAR_13, (struct sockaddr *) &VAR_12, sizeof(VAR_12)) < 0 ||
      FUNC_4(VAR_13, (struct sockaddr *) &VAR_12, sizeof(VAR_12)) < 0)
   continue;

  if ((*VAR_8)(VAR_13, &VAR_11, VAR_9) > 0)
   break;
 }

 FUNC_3 (VAR_13);
 FUNC_5(VAR_10.names);

 return (VAR_15);
}
