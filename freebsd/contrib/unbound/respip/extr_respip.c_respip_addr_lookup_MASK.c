
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct sockaddr_storage {int dummy; } ;
typedef struct resp_addr const resp_addr ;
struct reply_info {size_t an_numrrsets; TYPE_3__** rrsets; } ;
struct rbtree_type {int dummy; } ;
struct packed_rrset_data {size_t count; } ;
typedef int socklen_t ;
struct TYPE_5__ {struct packed_rrset_data* data; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_6__ {TYPE_2__ entry; TYPE_1__ rk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct rbtree_type*,struct sockaddr_storage*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct packed_rrset_data const*,scalar_t__,size_t,struct sockaddr_storage*,int *) ;

__attribute__((used)) static const struct resp_addr*
FUNC_3(const struct reply_info *VAR_2, struct rbtree_type* VAR_3,
 size_t* VAR_4)
{
 size_t VAR_5;
 struct resp_addr* VAR_6;
 struct sockaddr_storage VAR_7;
 socklen_t VAR_8;

 for(VAR_5=0; VAR_5<VAR_2->an_numrrsets; VAR_5++) {
  size_t VAR_9;
  const struct packed_rrset_data* VAR_10;
  uint16_t VAR_11 = FUNC_1(VAR_2->rrsets[VAR_5]->rk.type);

  if(VAR_11 != VAR_0 && VAR_11 != VAR_1)
   continue;
  VAR_10 = VAR_2->rrsets[VAR_5]->entry.data;
  for(VAR_9 = 0; VAR_9 < VAR_10->count; VAR_9++) {
   if(!FUNC_2(VAR_10, VAR_11, VAR_9, &VAR_7, &VAR_8))
    continue;
   VAR_6 = (struct resp_addr*)FUNC_0(VAR_3, &VAR_7,
    VAR_8);
   if(VAR_6) {
    *VAR_4 = VAR_5;
    return VAR_6;
   }
  }
 }

 return ((void*)0);
}
