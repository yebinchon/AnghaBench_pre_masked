
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xt_owner_match_info {int match; int invert; scalar_t__ uid_min; scalar_t__ uid_max; scalar_t__ gid_min; scalar_t__ gid_max; } ;
struct xt_match_param {struct xt_owner_match_info* matchinfo; } ;
struct sk_buff {TYPE_2__* sk; } ;
struct file {TYPE_3__* f_cred; } ;
struct TYPE_6__ {scalar_t__ fsuid; scalar_t__ fsgid; } ;
struct TYPE_5__ {TYPE_1__* sk_socket; } ;
struct TYPE_4__ {struct file* file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_0(const struct sk_buff *VAR_3, const struct xt_match_param *VAR_4)
{
 const struct xt_owner_match_info *VAR_5 = VAR_4->matchinfo;
 const struct file *VAR_6;

 if (VAR_3->sk == ((void*)0) || VAR_3->sk->sk_socket == ((void*)0))
  return (VAR_5->match ^ VAR_5->invert) == 0;
 else if (VAR_5->match & VAR_5->invert & VAR_1)




  return 0;

 VAR_6 = VAR_3->sk->sk_socket->file;
 if (VAR_6 == ((void*)0))
  return ((VAR_5->match ^ VAR_5->invert) &
         (VAR_2 | VAR_0)) == 0;

 if (VAR_5->match & VAR_2)
  if ((VAR_6->f_cred->fsuid >= VAR_5->uid_min &&
      VAR_6->f_cred->fsuid <= VAR_5->uid_max) ^
      !(VAR_5->invert & VAR_2))
   return 0;

 if (VAR_5->match & VAR_0)
  if ((VAR_6->f_cred->fsgid >= VAR_5->gid_min &&
      VAR_6->f_cred->fsgid <= VAR_5->gid_max) ^
      !(VAR_5->invert & VAR_0))
   return 0;

 return 1;
}
