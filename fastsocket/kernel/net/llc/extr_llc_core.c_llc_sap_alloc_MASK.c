
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct llc_sap {int refcnt; TYPE_1__ sk_list; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 struct llc_sap* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct llc_sap *FUNC_3(void)
{
 struct llc_sap *VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);

 if (VAR_2) {

  VAR_2->state = VAR_1;
  FUNC_2(&VAR_2->sk_list.lock);
  FUNC_0(&VAR_2->refcnt, 1);
 }
 return VAR_2;
}
