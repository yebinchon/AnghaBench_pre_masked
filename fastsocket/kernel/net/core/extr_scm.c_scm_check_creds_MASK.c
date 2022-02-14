
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ pid; scalar_t__ uid; scalar_t__ gid; } ;
struct cred {scalar_t__ uid; scalar_t__ euid; scalar_t__ suid; scalar_t__ gid; scalar_t__ egid; scalar_t__ sgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 struct cred* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static __inline__ int FUNC_3(struct ucred *VAR_5)
{
 const struct cred *VAR_6 = FUNC_1();

 if ((VAR_5->pid == FUNC_2(VAR_4) || FUNC_0(VAR_2)) &&
     ((VAR_5->uid == VAR_6->uid || VAR_5->uid == VAR_6->euid ||
       VAR_5->uid == VAR_6->suid) || FUNC_0(VAR_1)) &&
     ((VAR_5->gid == VAR_6->gid || VAR_5->gid == VAR_6->egid ||
       VAR_5->gid == VAR_6->sgid) || FUNC_0(VAR_0))) {
        return 0;
 }
 return -VAR_3;
}
