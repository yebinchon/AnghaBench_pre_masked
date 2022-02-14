
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; } ;
struct ip_ra_chain {void (* destructor ) (struct sock*) ;struct ip_ra_chain* next; struct sock* sk; } ;
struct TYPE_2__ {scalar_t__ num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 struct ip_ra_chain* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ip_ra_chain*) ;
 struct ip_ra_chain* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 void FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct sock *VAR_8, unsigned char VAR_9,
    void (*VAR_10)(struct sock *))
{
 struct ip_ra_chain *VAR_11, *VAR_12, **VAR_13;

 if (VAR_8->sk_type != VAR_5 || FUNC_0(VAR_8)->num == VAR_4)
  return -VAR_1;

 VAR_12 = VAR_9 ? FUNC_2(sizeof(*VAR_12), VAR_3) : ((void*)0);

 FUNC_6(&VAR_7);
 for (VAR_13 = &VAR_6; (VAR_11 = *VAR_13) != ((void*)0); VAR_13 = &VAR_11->next) {
  if (VAR_11->sk == VAR_8) {
   if (VAR_9) {
    FUNC_7(&VAR_7);
    FUNC_1(VAR_12);
    return -VAR_0;
   }
   *VAR_13 = VAR_11->next;
   FUNC_7(&VAR_7);

   if (VAR_11->destructor)
    VAR_11->destructor(VAR_8);
   FUNC_4(VAR_8);
   FUNC_1(VAR_11);
   return 0;
  }
 }
 if (VAR_12 == ((void*)0)) {
  FUNC_7(&VAR_7);
  return -VAR_2;
 }
 VAR_12->sk = VAR_8;
 VAR_12->destructor = VAR_10;

 VAR_12->next = VAR_11;
 *VAR_13 = VAR_12;
 FUNC_3(VAR_8);
 FUNC_7(&VAR_7);

 return 0;
}
