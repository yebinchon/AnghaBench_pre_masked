
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct nf_conntrack_tuple {int dummy; } ;
struct TYPE_2__ {int htable_size; } ;
struct net {TYPE_1__ ct; } ;


 int FUNC_0 (struct nf_conntrack_tuple const*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline u_int32_t FUNC_1(const struct net *VAR_1,
           const struct nf_conntrack_tuple *VAR_2)
{
 return FUNC_0(VAR_2, VAR_1->ct.htable_size,
    VAR_0);
}
