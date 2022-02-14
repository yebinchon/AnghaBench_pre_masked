
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sockaddr {int dummy; } ;
struct msghdr {int msg_namelen; struct sockaddr* msg_name; } ;
struct mbuf {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr*,int ) ;
 int FUNC_1 (struct thread*,int,struct msghdr*,int ,struct mbuf*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sockaddr*,struct sockaddr**,int*) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_1, int VAR_2, struct msghdr *VAR_3, int VAR_4,
    struct mbuf *VAR_5, enum uio_seg VAR_6)
{
 struct sockaddr *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_3->msg_name != ((void*)0)) {
  VAR_9 = VAR_3->msg_namelen;
  VAR_8 = FUNC_3(VAR_3->msg_name, &VAR_7, &VAR_9);
  if (VAR_8 != 0)
   return (VAR_8);
  VAR_3->msg_name = VAR_7;
 } else
  VAR_7 = ((void*)0);

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, FUNC_2(VAR_4), VAR_5,
     VAR_6);

 if (VAR_7)
  FUNC_0(VAR_7, VAR_0);
 return (VAR_8);
}
