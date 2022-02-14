
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct net {int dummy; } ;
struct flowi {int fl6_src; int fl6_dst; } ;
struct dst_entry {int error; } ;


 struct dst_entry* FUNC_0 (int) ;
 int FUNC_1 (struct dst_entry*) ;
 struct dst_entry* FUNC_2 (struct net*,int *,struct flowi*) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static struct dst_entry *FUNC_4(struct net *VAR_0, int VAR_1,
       xfrm_address_t *VAR_2,
       xfrm_address_t *VAR_3)
{
 struct flowi VAR_4 = {};
 struct dst_entry *VAR_5;
 int VAR_6;

 FUNC_3(&VAR_4.fl6_dst, VAR_3, sizeof(VAR_4.fl6_dst));
 if (VAR_2)
  FUNC_3(&VAR_4.fl6_src, VAR_2, sizeof(VAR_4.fl6_src));

 VAR_5 = FUNC_2(VAR_0, ((void*)0), &VAR_4);

 VAR_6 = VAR_5->error;
 if (VAR_5->error) {
  FUNC_1(VAR_5);
  VAR_5 = FUNC_0(VAR_6);
 }

 return VAR_5;
}
