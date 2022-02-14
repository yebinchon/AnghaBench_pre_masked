
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmsghdr {int cmsg_len; int cmsg_type; int cmsg_level; } ;
typedef int fd ;


 int FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct cmsghdr *VAR_2, int VAR_3)
{

 FUNC_2(VAR_3 >= 0);

 VAR_2->cmsg_level = VAR_1;
 VAR_2->cmsg_type = VAR_0;
 VAR_2->cmsg_len = FUNC_1(sizeof(VAR_3));
 FUNC_3(&VAR_3, FUNC_0(VAR_2), sizeof(VAR_3));

 return (0);
}
