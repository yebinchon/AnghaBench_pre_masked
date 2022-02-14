
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sctp_bind_hashbucket {int lock; } ;
struct sctp_bind_bucket {int dummy; } ;
struct TYPE_4__ {scalar_t__ num; } ;
struct TYPE_3__ {struct sctp_bind_bucket* bind_hash; } ;


 int FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sctp_bind_bucket*) ;
 size_t FUNC_3 (scalar_t__) ;
 struct sctp_bind_hashbucket* VAR_0 ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct sock *VAR_1)
{
 struct sctp_bind_hashbucket *VAR_2 =
  &VAR_0[FUNC_3(FUNC_1(VAR_1)->num)];
 struct sctp_bind_bucket *VAR_3;

 FUNC_5(&VAR_2->lock);
 VAR_3 = FUNC_4(VAR_1)->bind_hash;
 FUNC_0(VAR_1);
 FUNC_4(VAR_1)->bind_hash = ((void*)0);
 FUNC_1(VAR_1)->num = 0;
 FUNC_2(VAR_3);
 FUNC_6(&VAR_2->lock);
}
