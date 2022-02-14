
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int pcap_if_t ;
typedef int pcap_if_list_t ;
typedef int get_if_flags_func ;
typedef int bpf_u_int32 ;


 int FUNC_0 (int *,struct sockaddr*,size_t,struct sockaddr*,size_t,struct sockaddr*,size_t,struct sockaddr*,size_t,char*) ;
 int * FUNC_1 (int *,char const*,int ,int ,char*) ;

int
FUNC_2(pcap_if_list_t *VAR_0, const char *VAR_1,
    bpf_u_int32 VAR_2, get_if_flags_func VAR_3,
    struct sockaddr *VAR_4, size_t VAR_5,
    struct sockaddr *VAR_6, size_t VAR_7,
    struct sockaddr *VAR_8, size_t VAR_9,
    struct sockaddr *VAR_10, size_t VAR_11,
    char *VAR_12)
{
 pcap_if_t *VAR_13;




 VAR_13 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_12);
 if (VAR_13 == ((void*)0)) {



  return (-1);
 }

 if (VAR_4 == ((void*)0)) {




  return (0);
 }






 return (FUNC_0(VAR_13, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10,
     VAR_11, VAR_12));
}
