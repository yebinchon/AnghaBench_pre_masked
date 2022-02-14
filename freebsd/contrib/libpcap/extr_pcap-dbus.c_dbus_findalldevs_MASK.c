
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcap_if_list_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,int ,char*,char*) ;

int
FUNC_1(pcap_if_list_t *VAR_1, char *VAR_2)
{




 if (FUNC_0(VAR_1, "dbus-system",
     VAR_0, "D-Bus system bus",
     VAR_2) == ((void*)0))
  return -1;
 if (FUNC_0(VAR_1, "dbus-session",
     VAR_0, "D-Bus session bus",
     VAR_2) == ((void*)0))
  return -1;
 return 0;
}
