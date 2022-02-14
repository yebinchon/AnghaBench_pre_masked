
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {char* msg_control; int msg_controllen; } ;
struct cmsghdr {int cmsg_len; } ;
typedef int msg ;
typedef int dummybuf ;
typedef int ISC_SOCKADDR_LEN_T ;


 struct cmsghdr* FUNC_0 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct msghdr*,int ,int) ;

__attribute__((used)) static inline ISC_SOCKADDR_LEN_T
FUNC_4(ISC_SOCKADDR_LEN_T VAR_0) {



 struct msghdr VAR_1;
 struct cmsghdr *VAR_2;




 char VAR_3[sizeof(struct cmsghdr) + 1024];

 FUNC_3(&VAR_1, 0, sizeof(VAR_1));
 VAR_1.msg_control = VAR_3;
 VAR_1.msg_controllen = sizeof(VAR_3);

 VAR_2 = (struct cmsghdr *)VAR_3;
 VAR_2->cmsg_len = FUNC_2(VAR_0);

 VAR_2 = FUNC_0(&VAR_1, VAR_2);
 if (VAR_2 != ((void*)0))
  return ((char *)VAR_2 - (char *)VAR_1.msg_control);
 else
  return (0);

}
