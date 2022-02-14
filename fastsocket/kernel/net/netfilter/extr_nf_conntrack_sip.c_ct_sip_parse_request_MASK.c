
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct nf_conn {int dummy; } ;
typedef int __be16 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct nf_conn const*,char const*,char const**,union nf_inet_addr*,char const*) ;
 unsigned int FUNC_2 (char const*,char**,int) ;
 int FUNC_3 (struct nf_conn const*,char const*,char const*,int*) ;
 unsigned int FUNC_4 (struct nf_conn const*,char const*,char const*,int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*,int ) ;

int FUNC_7(const struct nf_conn *VAR_1,
    const char *VAR_2, unsigned int VAR_3,
    unsigned int *VAR_4, unsigned int *VAR_5,
    union nf_inet_addr *VAR_6, __be16 *VAR_7)
{
 const char *VAR_8 = VAR_2, *VAR_9 = VAR_2 + VAR_3, *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;


 VAR_11 = FUNC_4(VAR_1, VAR_2, VAR_9, ((void*)0));
 if (!VAR_11)
  return 0;
 VAR_2 += VAR_11;
 if (++VAR_2 >= VAR_9)
  return 0;


 VAR_9 -= FUNC_5("sip:");
 for (; VAR_2 < VAR_9; VAR_2++) {
  if (*VAR_2 == '\r' || *VAR_2 == '\n')
   return -1;
  if (FUNC_6(VAR_2, "sip:", FUNC_5("sip:")) == 0)
   break;
 }
 if (!FUNC_3(VAR_1, VAR_2, VAR_9, &VAR_13))
  return 0;
 VAR_2 += VAR_13;

 if (!FUNC_1(VAR_1, VAR_2, &VAR_10, VAR_6, VAR_9))
  return -1;
 if (VAR_10 < VAR_9 && *VAR_10 == ':') {
  VAR_10++;
  VAR_12 = FUNC_2(VAR_10, (char **)&VAR_10, 10);
  if (VAR_12 < 1024 || VAR_12 > 65535)
   return -1;
  *VAR_7 = FUNC_0(VAR_12);
 } else
  *VAR_7 = FUNC_0(VAR_0);

 if (VAR_10 == VAR_2)
  return 0;
 *VAR_4 = VAR_2 - VAR_8;
 *VAR_5 = VAR_10 - VAR_2;
 return 1;
}
