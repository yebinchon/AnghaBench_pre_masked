
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {scalar_t__ uid; scalar_t__ euid; scalar_t__ suid; int cap_permitted; int cap_effective; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct cred *VAR_1, const struct cred *VAR_2)
{
 if ((VAR_2->uid == 0 || VAR_2->euid == 0 || VAR_2->suid == 0) &&
     (VAR_1->uid != 0 && VAR_1->euid != 0 && VAR_1->suid != 0) &&
     !FUNC_1(VAR_0)) {
  FUNC_0(VAR_1->cap_permitted);
  FUNC_0(VAR_1->cap_effective);
 }
 if (VAR_2->euid == 0 && VAR_1->euid != 0)
  FUNC_0(VAR_1->cap_effective);
 if (VAR_2->euid != 0 && VAR_1->euid == 0)
  VAR_1->cap_effective = VAR_1->cap_permitted;
}
