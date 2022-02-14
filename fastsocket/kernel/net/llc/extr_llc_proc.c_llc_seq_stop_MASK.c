
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct seq_file {int dummy; } ;
struct llc_sock {struct llc_sap* sap; } ;
struct TYPE_2__ {int lock; } ;
struct llc_sap {TYPE_1__ sk_list; } ;


 void* VAR_0 ;
 int VAR_1 ;
 struct llc_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{
 if (VAR_3 && VAR_3 != VAR_0) {
  struct sock *VAR_4 = VAR_3;
  struct llc_sock *VAR_5 = FUNC_0(VAR_4);
  struct llc_sap *VAR_6 = VAR_5->sap;

  FUNC_1(&VAR_6->sk_list.lock);
 }
 FUNC_1(&VAR_1);
}
