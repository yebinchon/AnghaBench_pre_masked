
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; } ;
struct ip6_ra_chain {int sel; struct ip6_ra_chain* next; struct sock* sk; } ;
struct TYPE_2__ {scalar_t__ num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 struct ip6_ra_chain* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ip6_ra_chain*) ;
 struct ip6_ra_chain* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct sock *VAR_8, int VAR_9)
{
 struct ip6_ra_chain *VAR_10, *VAR_11, **VAR_12;


 if (VAR_8->sk_type != VAR_5 || FUNC_0(VAR_8)->num != VAR_4)
  return -VAR_2;

 VAR_11 = (VAR_9>=0) ? FUNC_2(sizeof(*VAR_11), VAR_3) : ((void*)0);

 FUNC_5(&VAR_7);
 for (VAR_12 = &VAR_6; (VAR_10=*VAR_12) != ((void*)0); VAR_12 = &VAR_10->next) {
  if (VAR_10->sk == VAR_8) {
   if (VAR_9>=0) {
    FUNC_6(&VAR_7);
    FUNC_1(VAR_11);
    return -VAR_0;
   }

   *VAR_12 = VAR_10->next;
   FUNC_6(&VAR_7);

   FUNC_4(VAR_8);
   FUNC_1(VAR_10);
   return 0;
  }
 }
 if (VAR_11 == ((void*)0)) {
  FUNC_6(&VAR_7);
  return -VAR_1;
 }
 VAR_11->sk = VAR_8;
 VAR_11->sel = VAR_9;
 VAR_11->next = VAR_10;
 *VAR_12 = VAR_11;
 FUNC_3(VAR_8);
 FUNC_6(&VAR_7);
 return 0;
}
