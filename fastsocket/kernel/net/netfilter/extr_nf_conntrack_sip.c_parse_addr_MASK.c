
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int ip6; int ip; } ;
typedef int u8 ;
struct nf_conn {int dummy; } ;




 int FUNC_0 () ;
 int FUNC_1 (char const*,int,int *,int,char const**) ;
 int FUNC_2 (char const*,int,int *,int,char const**) ;
 int FUNC_3 (union nf_inet_addr*,int ,int) ;
 int FUNC_4 (struct nf_conn const*) ;

__attribute__((used)) static int FUNC_5(const struct nf_conn *VAR_0, const char *VAR_1,
                      const char **VAR_2, union nf_inet_addr *VAR_3,
                      const char *VAR_4)
{
 const char *VAR_5;
 int VAR_6 = 0;

 if (!VAR_0)
  return 0;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 switch (FUNC_4(VAR_0)) {
 case 129:
  VAR_6 = FUNC_1(VAR_1, VAR_4 - VAR_1, (u8 *)&VAR_3->ip, -1, &VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_2(VAR_1, VAR_4 - VAR_1, (u8 *)&VAR_3->ip6, -1, &VAR_5);
  break;
 default:
  FUNC_0();
 }

 if (VAR_6 == 0 || VAR_5 == VAR_1)
  return 0;
 if (VAR_2)
  *VAR_2 = VAR_5;
 return 1;
}
