
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcap_if_t ;
typedef int pcap_if_list_t ;
typedef int (* get_if_flags_func ) (char const*,int *,char*) ;
typedef int bpf_u_int32 ;


 int * FUNC_0 (int *,char const*,int ,char const*,char*) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*,int *,char*) ;

pcap_if_t *
FUNC_3(pcap_if_list_t *VAR_0, const char *VAR_1, bpf_u_int32 VAR_2,
    get_if_flags_func VAR_3, const char *VAR_4, char *VAR_5)
{
 pcap_if_t *VAR_6;




 VAR_6 = FUNC_1(VAR_0, VAR_1);
 if (VAR_6 != ((void*)0)) {



  return (VAR_6);
 }
 if ((*VAR_3)(VAR_1, &VAR_2, VAR_5) == -1) {



  return (((void*)0));
 }




 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5));
}
