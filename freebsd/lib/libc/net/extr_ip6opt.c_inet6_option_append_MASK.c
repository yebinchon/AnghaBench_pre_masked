
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_char ;
struct ip6_ext {int ip6e_len; } ;
struct cmsghdr {int cmsg_len; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int const VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int,int) ;

int
FUNC_4(struct cmsghdr *VAR_1, const u_int8_t *VAR_2, int VAR_3,
    int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 u_char *VAR_8 = (u_char *)VAR_1 + VAR_1->cmsg_len;
 struct ip6_ext *VAR_9 = (struct ip6_ext *)FUNC_0(VAR_1);


 if (VAR_3 != 1 && VAR_3 != 2 && VAR_3 != 4 && VAR_3 != 8)
  return(-1);
 if (VAR_4 < 0 || VAR_4 > 7)
  return(-1);






 if (VAR_8 == (u_char *)VAR_9) {
  VAR_8 += 2;
  VAR_1->cmsg_len += 2;
 }


 VAR_7 = VAR_8 - (u_char *)VAR_9;
 VAR_5 = FUNC_3(VAR_7 % VAR_3, VAR_3) - (VAR_7 % VAR_3);
 VAR_5 += VAR_4;
 VAR_5 %= VAR_3;

 FUNC_1(VAR_8, VAR_5);
 VAR_1->cmsg_len += VAR_5;
 VAR_8 += VAR_5;


 if (VAR_2[0] == VAR_0)
  VAR_6 = 1;
 else
  VAR_6 = VAR_2[1] + 2;
 FUNC_2(VAR_8, VAR_2, VAR_6);
 VAR_8 += VAR_6;
 VAR_1->cmsg_len += VAR_6;


 VAR_7 = VAR_8 - (u_char *)VAR_9;
 VAR_5 = ((VAR_7 + 7) & ~7) - VAR_7;
 FUNC_1(VAR_8, VAR_5);
 VAR_8 += VAR_5;
 VAR_1->cmsg_len += VAR_5;


 VAR_9->ip6e_len = ((VAR_8 - (u_char *)VAR_9) >> 3) - 1;

 return(0);
}
