
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_char ;
struct ip6_ext {int ip6e_len; } ;
struct cmsghdr {int cmsg_len; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int) ;

u_int8_t *
FUNC_3(struct cmsghdr *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 u_int8_t *VAR_6 = (u_char *)VAR_0 + VAR_0->cmsg_len;
 u_int8_t *VAR_7;
 struct ip6_ext *VAR_8 = (struct ip6_ext *)FUNC_0(VAR_0);


 if (VAR_2 != 1 && VAR_2 != 2 && VAR_2 != 4 && VAR_2 != 8)
  return(((void*)0));
 if (VAR_3 < 0 || VAR_3 > 7)
  return(((void*)0));






 if (VAR_6 == (u_char *)VAR_8) {
  VAR_6 += 2;
  VAR_0->cmsg_len += 2;
 }


 VAR_5 = VAR_6 - (u_char *)VAR_8;
 VAR_4 = FUNC_2(VAR_5 % VAR_2, VAR_2) - (VAR_5 % VAR_2);
 VAR_4 += VAR_3;
 VAR_4 %= VAR_2;

 FUNC_1(VAR_6, VAR_4);
 VAR_0->cmsg_len += VAR_4;
 VAR_6 += VAR_4;


 VAR_7 = VAR_6;
 VAR_6 += VAR_1;
 VAR_0->cmsg_len += VAR_1;


 VAR_5 = VAR_6 - (u_char *)VAR_8;
 VAR_4 = ((VAR_5 + 7) & ~7) - VAR_5;
 FUNC_1(VAR_6, VAR_4);
 VAR_6 += VAR_4;
 VAR_0->cmsg_len += VAR_4;


 VAR_8->ip6e_len = ((VAR_6 - (u_char *)VAR_8) >> 3) - 1;

 return(VAR_7);
}
