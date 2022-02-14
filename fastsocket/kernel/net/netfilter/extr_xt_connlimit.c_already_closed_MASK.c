
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; } ;
struct TYPE_4__ {TYPE_1__ tcp; } ;
struct nf_conn {TYPE_2__ proto; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct nf_conn const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct nf_conn *VAR_3)
{
 if (FUNC_0(VAR_3) == VAR_0)
  return VAR_3->proto.tcp.state == VAR_2 ||
         VAR_3->proto.tcp.state == VAR_1;
 else
  return 0;
}
