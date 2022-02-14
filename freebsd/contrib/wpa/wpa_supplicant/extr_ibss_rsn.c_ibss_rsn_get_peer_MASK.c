
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ibss_rsn_peer {int addr; struct ibss_rsn_peer* next; } ;
struct ibss_rsn {struct ibss_rsn_peer* peers; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ,int ) ;

__attribute__((used)) static struct ibss_rsn_peer * FUNC_1(struct ibss_rsn *VAR_1,
      const u8 *VAR_2)
{
 struct ibss_rsn_peer *VAR_3;

 for (VAR_3 = VAR_1->peers; VAR_3; VAR_3 = VAR_3->next)
  if (FUNC_0(VAR_2, VAR_3->addr, VAR_0) == 0)
   break;
 return VAR_3;
}
