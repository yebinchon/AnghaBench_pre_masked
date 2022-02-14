
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* afsdb; } ;
struct rk_resource_record {scalar_t__ type; struct rk_resource_record* next; TYPE_1__ u; } ;
struct rk_dns_reply {struct rk_resource_record* head; } ;
struct TYPE_4__ {int preference; int domain; } ;


 int FUNC_0 (struct rk_dns_reply*) ;
 struct rk_dns_reply* FUNC_1 (char const*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
    struct rk_dns_reply *VAR_4;
    int VAR_5 = -1;
    VAR_4 = FUNC_1(VAR_1, "afsdb");
    if(VAR_4){
 struct rk_resource_record *VAR_6 = VAR_4->head;
 while(VAR_6){
     if(VAR_6->type == VAR_0 && VAR_6->u.afsdb->preference == 1){
  FUNC_2(VAR_2,
    VAR_6->u.afsdb->domain,
    VAR_3);
  VAR_5 = 0;
  break;
     }
     VAR_6 = VAR_6->next;
 }
 FUNC_0(VAR_4);
    }
    return VAR_5;
}
