
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_krbhst_info {scalar_t__ proto; scalar_t__ port; struct krb5_krbhst_info* next; int hostname; } ;
struct krb5_krbhst_data {struct krb5_krbhst_info** end; struct krb5_krbhst_info* hosts; } ;


 int FUNC_0 (struct krb5_krbhst_info*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct krb5_krbhst_data *VAR_0, struct krb5_krbhst_info *VAR_1)
{
    struct krb5_krbhst_info *VAR_2;

    for(VAR_2 = VAR_0->hosts; VAR_2; VAR_2 = VAR_2->next)
 if(VAR_2->proto == VAR_1->proto &&
    VAR_2->port == VAR_1->port &&
    FUNC_1(VAR_2->hostname, VAR_1->hostname) == 0) {
     FUNC_0(VAR_1);
     return;
 }
    *VAR_0->end = VAR_1;
    VAR_0->end = &VAR_1->next;
}
