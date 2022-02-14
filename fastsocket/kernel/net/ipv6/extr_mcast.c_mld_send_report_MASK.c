
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct inet6_dev {int lock; struct ifmcaddr6* mc_list; } ;
struct ifmcaddr6 {int mca_flags; int mca_lock; scalar_t__* mca_sfcount; struct ifmcaddr6* next; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,struct ifmcaddr6*,int,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct inet6_dev *VAR_4, struct ifmcaddr6 *VAR_5)
{
 struct sk_buff *VAR_6 = ((void*)0);
 int VAR_7;

 if (!VAR_5) {
  FUNC_2(&VAR_4->lock);
  for (VAR_5=VAR_4->mc_list; VAR_5; VAR_5=VAR_5->next) {
   if (VAR_5->mca_flags & VAR_0)
    continue;
   FUNC_4(&VAR_5->mca_lock);
   if (VAR_5->mca_sfcount[VAR_1])
    VAR_7 = VAR_2;
   else
    VAR_7 = VAR_3;
   VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_7, 0, 0);
   FUNC_5(&VAR_5->mca_lock);
  }
  FUNC_3(&VAR_4->lock);
 } else {
  FUNC_4(&VAR_5->mca_lock);
  if (VAR_5->mca_sfcount[VAR_1])
   VAR_7 = VAR_2;
  else
   VAR_7 = VAR_3;
  VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_7, 0, 0);
  FUNC_5(&VAR_5->mca_lock);
 }
 if (VAR_6)
  FUNC_1(VAR_6);
}
