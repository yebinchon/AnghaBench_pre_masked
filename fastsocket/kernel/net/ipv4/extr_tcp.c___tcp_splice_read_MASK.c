
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_splice_state {int len; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {struct tcp_splice_state* data; } ;
struct TYPE_5__ {int count; TYPE_1__ arg; } ;
typedef TYPE_2__ read_descriptor_t ;


 int FUNC_0 (struct sock*,TYPE_2__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_1, struct tcp_splice_state *VAR_2)
{

 read_descriptor_t VAR_3 = {
  .arg.data = VAR_2,
  .count = VAR_2->len,
 };

 return FUNC_0(VAR_1, &VAR_3, VAR_0);
}
