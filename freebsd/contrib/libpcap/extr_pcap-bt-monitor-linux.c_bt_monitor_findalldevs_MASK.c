
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcap_if_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,int,char*,char*) ;

int
FUNC_1(pcap_if_list_t *VAR_3, char *VAR_4)
{
    int VAR_5 = 0;
    if (FUNC_0(VAR_3, VAR_0,
                VAR_2|VAR_1,
                "Bluetooth Linux Monitor", VAR_4) == ((void*)0))
    {
        VAR_5 = -1;
    }

    return VAR_5;
}
