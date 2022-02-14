
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigevent {scalar_t__ sigev_notify_attributes; int sigev_notify_function; int sigev_value; } ;
struct sigev_node {int sn_type; int sn_attr; TYPE_1__* sn_tn; int sn_gen; int sn_func; int sn_value; } ;
struct TYPE_2__ {int tn_refcount; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (scalar_t__,int *) ;
 struct sigev_node* FUNC_7 (int,int) ;
 int FUNC_8 (struct sigev_node*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_9 (int) ;

struct sigev_node *
FUNC_10(int VAR_3, const struct sigevent *VAR_4, struct sigev_node *VAR_5,
 int VAR_6)
{
 struct sigev_node *VAR_7;

 VAR_7 = FUNC_7(1, sizeof(*VAR_7));
 if (VAR_7 != ((void*)0)) {
  VAR_7->sn_value = VAR_4->sigev_value;
  VAR_7->sn_func = VAR_4->sigev_notify_function;
  VAR_7->sn_gen = FUNC_5(&VAR_2, 1,
      VAR_1);
  VAR_7->sn_type = VAR_3;
  FUNC_3(&VAR_7->sn_attr);
  FUNC_4(&VAR_7->sn_attr, VAR_0);
  if (VAR_4->sigev_notify_attributes)
   FUNC_6(VAR_4->sigev_notify_attributes, &VAR_7->sn_attr);
  if (VAR_5) {
   FUNC_0();
   VAR_5->sn_tn->tn_refcount++;
   FUNC_1();
   VAR_7->sn_tn = VAR_5->sn_tn;
  } else {
   VAR_7->sn_tn = FUNC_9(VAR_6);
   if (VAR_7->sn_tn == ((void*)0)) {
    FUNC_2(&VAR_7->sn_attr);
    FUNC_8(VAR_7);
    VAR_7 = ((void*)0);
   }
  }
 }
 return (VAR_7);
}
