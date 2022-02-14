
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct msghdr {int msg_flags; int msg_namelen; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (struct thread*,int,struct msghdr*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_3, int VAR_4, struct msghdr *VAR_5, void *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_2, ((void*)0));
 if (VAR_7 != 0)
  return (VAR_7);
 if (VAR_6 != ((void*)0)) {
  VAR_7 = FUNC_1(&VAR_5->msg_namelen, VAR_6, sizeof (socklen_t));





 }
 return (VAR_7);
}
