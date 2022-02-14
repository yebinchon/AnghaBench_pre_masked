
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip; } ;
struct sk_buff {int dummy; } ;
typedef enum sdp_header_types { ____Placeholder_sdp_header_types } sdp_header_types ;


 unsigned int FUNC_0 (struct sk_buff*,char const**,unsigned int*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,char const**,unsigned int,unsigned int*,int,int,char*,unsigned int) ;
 unsigned int FUNC_2 (char*,char*,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct sk_buff *VAR_0, const char **VAR_1,
        unsigned int VAR_2,
        unsigned int *VAR_3,
        enum sdp_header_types VAR_4,
        enum sdp_header_types VAR_5,
        const union nf_inet_addr *VAR_6)
{
 char VAR_7[sizeof("nnn.nnn.nnn.nnn")];
 unsigned int VAR_8;

 VAR_8 = FUNC_2(VAR_7, "%pI4", &VAR_6->ip);
 if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_7, VAR_8))
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_3);
}
