
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct nf_conntrack_expect {TYPE_1__ timeout; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct nf_conntrack_expect *VAR_2,
         unsigned VAR_3)
{
 if (!VAR_2 || !FUNC_1(&VAR_2->timeout))
  return 0;

 VAR_2->timeout.expires = VAR_1 + VAR_3 * VAR_0;
 FUNC_0(&VAR_2->timeout);

 return 1;
}
