
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {void* msg_control; } ;
struct cmsghdr {scalar_t__ cmsg_level; int cmsg_type; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 scalar_t__ FUNC_1 (struct msghdr*) ;
 scalar_t__ FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 int FUNC_3 (scalar_t__,size_t) ;
 int FUNC_4 (scalar_t__,size_t) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(struct msghdr *VAR_2)
{
 ssize_t VAR_3;
 void *VAR_4;
 struct cmsghdr *VAR_5;

 VAR_3 = 0;
 VAR_4 = VAR_2->msg_control;
 for (VAR_5 = (struct cmsghdr *)FUNC_1(VAR_2); VAR_5;
      VAR_5 = (struct cmsghdr *)FUNC_2(VAR_2, VAR_5)) {
  if (VAR_5->cmsg_level != VAR_1)
   continue;

  VAR_3 = VAR_0 - ((caddr_t)FUNC_0(VAR_5) - (caddr_t)VAR_4);
  if (VAR_3 <= 0)
   continue;
  switch (VAR_5->cmsg_type) {
  case 130:
   FUNC_5("  HbH Options: ");
   FUNC_3(FUNC_0(VAR_5), (size_t)VAR_3);
   break;
  case 131:

  case 128:

   FUNC_5("  Dst Options: ");
   FUNC_3(FUNC_0(VAR_5), (size_t)VAR_3);
   break;
  case 129:
   FUNC_5("  Routing: ");
   FUNC_4(FUNC_0(VAR_5), (size_t)VAR_3);
   break;
  }
 }
}
