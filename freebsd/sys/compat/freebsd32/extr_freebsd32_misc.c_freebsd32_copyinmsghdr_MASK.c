
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr32 {int msg_flags; int msg_controllen; int msg_control; int msg_iovlen; int msg_iov; int msg_namelen; int msg_name; } ;
struct msghdr {int msg_flags; int msg_controllen; void* msg_control; int msg_iovlen; void* msg_iov; int msg_namelen; void* msg_name; } ;
typedef int m32 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct msghdr32*,struct msghdr32*,int) ;

__attribute__((used)) static int
FUNC_2(struct msghdr32 *VAR_0, struct msghdr *VAR_1)
{
 struct msghdr32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_2, sizeof(VAR_2));
 if (VAR_3)
  return (VAR_3);
 VAR_1->msg_name = FUNC_0(VAR_2);
 VAR_1->msg_namelen = VAR_2;
 VAR_1->msg_iov = FUNC_0(VAR_2);
 VAR_1->msg_iovlen = VAR_2;
 VAR_1->msg_control = FUNC_0(VAR_2);
 VAR_1->msg_controllen = VAR_2;
 VAR_1->msg_flags = VAR_2;
 return (0);
}
