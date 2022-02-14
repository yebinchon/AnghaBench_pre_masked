
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ip6_ext {int ip6e_len; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_len; int cmsg_type; } ;


 scalar_t__ FUNC_0 (struct cmsghdr const*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(const struct cmsghdr *VAR_1, u_int8_t **VAR_2)
{
 struct ip6_ext *VAR_3;
 int VAR_4, VAR_5;
 u_int8_t *VAR_6;

 if (VAR_1->cmsg_level != VAR_0 ||
     (!FUNC_4(VAR_1->cmsg_type) &&
      !FUNC_3(VAR_1->cmsg_type)))
  return(-1);


 if (VAR_1->cmsg_len < FUNC_1(sizeof(struct ip6_ext)))
  return(-1);
 VAR_3 = (struct ip6_ext *)FUNC_0(VAR_1);
 VAR_4 = (VAR_3->ip6e_len + 1) << 3;
 if (VAR_1->cmsg_len < FUNC_1(VAR_4))
  return(-1);






 VAR_6 = (u_int8_t *)VAR_3 + VAR_4;
 if (*VAR_2 == ((void*)0))
  *VAR_2 = (u_int8_t *)(VAR_3 + 1);
 else {
  if ((VAR_5 = FUNC_2(*VAR_2, VAR_6)) == 0)
   return(-1);

  *VAR_2 = *VAR_2 + VAR_5;
 }
 if (*VAR_2 >= VAR_6) {
  *VAR_2 = ((void*)0);
  return(-1);
 }




 if (FUNC_2(*VAR_2, VAR_6) == 0)
  return(-1);
 else
  return(0);
}
