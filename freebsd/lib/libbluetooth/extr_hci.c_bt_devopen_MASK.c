
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_hci {int hci_len; int hci_node; int hci_family; } ;
struct sockaddr {int dummy; } ;
typedef int ha ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int * FUNC_2 (char const*,int ,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int) ;
 int VAR_6 ;
 int FUNC_6 (struct sockaddr_hci*,int ,int) ;
 int FUNC_7 (int ,int ,int ) ;

int
FUNC_8(char const *VAR_7)
{
 struct sockaddr_hci VAR_8;
 bdaddr_t VAR_9;
 int VAR_10;

 if (VAR_7 == ((void*)0)) {
  VAR_6 = VAR_2;
  return (-1);
 }

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.hci_len = sizeof(VAR_8);
 VAR_8.hci_family = VAR_0;

 if (FUNC_1(VAR_7, &VAR_9)) {
  if (!FUNC_3(VAR_8.hci_node, &VAR_9))
   return (-1);
 } else if (FUNC_2(VAR_7, VAR_8.hci_node,
     sizeof(VAR_8.hci_node)) == ((void*)0)) {
  VAR_6 = VAR_3;
  return (-1);
 }

 VAR_10 = FUNC_7(VAR_4, VAR_5, VAR_1);
 if (VAR_10 < 0)
  return (-1);

 if (FUNC_0(VAR_10, (struct sockaddr *) &VAR_8, sizeof(VAR_8)) < 0 ||
     FUNC_5(VAR_10, (struct sockaddr *) &VAR_8, sizeof(VAR_8)) < 0) {
  FUNC_4(VAR_10);
  return (-1);
 }

 return (VAR_10);
}
