
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip_set {TYPE_2__* type; TYPE_1__* variant; int name; } ;
typedef size_t ip_set_id_t ;
struct TYPE_4__ {int me; } ;
struct TYPE_3__ {int (* destroy ) (struct ip_set*) ;} ;


 struct ip_set** VAR_0 ;
 int FUNC_0 (struct ip_set*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct ip_set*) ;

__attribute__((used)) static void
FUNC_4(ip_set_id_t VAR_1)
{
 struct ip_set *VAR_2 = VAR_0[VAR_1];

 FUNC_2("set: %s\n", VAR_2->name);
 VAR_0[VAR_1] = ((void*)0);


 VAR_2->variant->destroy(VAR_2);
 FUNC_1(VAR_2->type->me);
 FUNC_0(VAR_2);
}
