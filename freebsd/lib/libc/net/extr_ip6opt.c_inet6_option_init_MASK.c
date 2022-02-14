
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmsghdr {int cmsg_type; int cmsg_len; int cmsg_level; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

int
FUNC_3(void *VAR_1, struct cmsghdr **VAR_2, int VAR_3)
{
 struct cmsghdr *VAR_4 = (struct cmsghdr *)VAR_1;


 if (!FUNC_2(VAR_3) && !FUNC_1(VAR_3))
  return(-1);

 VAR_4->cmsg_level = VAR_0;
 VAR_4->cmsg_type = VAR_3;
 VAR_4->cmsg_len = FUNC_0(0);

 *VAR_2 = VAR_4;
 return(0);
}
