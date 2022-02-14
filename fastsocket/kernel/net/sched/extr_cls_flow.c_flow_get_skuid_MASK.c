
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {TYPE_4__* sk; } ;
struct TYPE_8__ {TYPE_3__* sk_socket; } ;
struct TYPE_7__ {TYPE_2__* file; } ;
struct TYPE_6__ {TYPE_1__* f_cred; } ;
struct TYPE_5__ {int fsuid; } ;



__attribute__((used)) static u32 FUNC_0(const struct sk_buff *VAR_0)
{
 if (VAR_0->sk && VAR_0->sk->sk_socket && VAR_0->sk->sk_socket->file)
  return VAR_0->sk->sk_socket->file->f_cred->fsuid;
 return 0;
}
