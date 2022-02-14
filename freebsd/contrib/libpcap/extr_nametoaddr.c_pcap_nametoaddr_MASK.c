
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {scalar_t__ h_addr_list; scalar_t__ h_addr; } ;
typedef scalar_t__ bpf_u_int32 ;


 int FUNC_0 (scalar_t__) ;
 struct hostent* FUNC_1 (char const*) ;

bpf_u_int32 **
FUNC_2(const char *VAR_0)
{

 static bpf_u_int32 *VAR_1[2];

 bpf_u_int32 **VAR_2;
 struct hostent *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0)) != ((void*)0)) {

  VAR_1[0] = (bpf_u_int32 *)VAR_3->h_addr;
  FUNC_0(VAR_3->h_addr);
  return VAR_1;





 }
 else
  return 0;
}
