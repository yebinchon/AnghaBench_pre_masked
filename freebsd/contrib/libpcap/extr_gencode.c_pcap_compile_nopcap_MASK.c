
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int dummy; } ;
typedef int pcap_t ;
typedef int bpf_u_int32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct bpf_program*,char const*,int,int ) ;
 int * FUNC_2 (int,int) ;

int
FUNC_3(int VAR_0, int VAR_1,
      struct bpf_program *VAR_2,
      const char *VAR_3, int VAR_4, bpf_u_int32 VAR_5)
{
 pcap_t *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_1, VAR_0);
 if (VAR_6 == ((void*)0))
  return (-1);
 VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_6);
 return (VAR_7);
}
