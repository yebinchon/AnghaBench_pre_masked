
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u_int32_t ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int dst; } ;
struct rtable {TYPE_1__ u; } ;
struct nf_afinfo {int (* route ) (struct dst_entry**,struct flowi*) ;} ;
struct flowi {int fl6_dst; int fl4_dst; } ;
struct dst_entry {int dummy; } ;
struct TYPE_6__ {int saddr; } ;
struct TYPE_5__ {int saddr; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (struct sk_buff const*) ;
 TYPE_2__* FUNC_3 (struct sk_buff const*) ;
 struct nf_afinfo* FUNC_4 (unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct dst_entry**,struct flowi*) ;

__attribute__((used)) static u_int32_t FUNC_8(const struct sk_buff *VAR_1,
        unsigned int VAR_2)
{
 struct flowi VAR_3 = {};
 const struct nf_afinfo *VAR_4;
 struct rtable *VAR_5 = ((void*)0);
 u_int32_t VAR_6 = ~0U;

 if (VAR_2 == VAR_0)
  VAR_3.fl4_dst = FUNC_2(VAR_1)->saddr;
 else
  VAR_3.fl6_dst = FUNC_3(VAR_1)->saddr;

 FUNC_5();
 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4 != ((void*)0))
  VAR_4->route((struct dst_entry **)&VAR_5, &VAR_3);
 FUNC_6();

 if (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_0(&VAR_5->u.dst);
  FUNC_1(&VAR_5->u.dst);
 }
 return VAR_6;
}
