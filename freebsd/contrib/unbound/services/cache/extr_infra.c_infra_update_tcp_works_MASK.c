
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct lruhash_entry {int lock; scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ rto; } ;
struct infra_data {TYPE_1__ rtt; } ;
struct infra_cache {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 struct lruhash_entry* FUNC_0 (struct infra_cache*,struct sockaddr_storage*,int ,int *,size_t,int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct infra_cache* VAR_1,
        struct sockaddr_storage* VAR_2, socklen_t VAR_3, uint8_t* VAR_4,
 size_t VAR_5)
{
 struct lruhash_entry* VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3,
  VAR_4, VAR_5, 1);
 struct infra_data* VAR_7;
 if(!VAR_6)
  return;
 VAR_7 = (struct infra_data*)VAR_6->data;
 if(VAR_7->rtt.rto >= VAR_0)


  VAR_7->rtt.rto = VAR_0-1000;
 FUNC_1(&VAR_6->lock);
}
