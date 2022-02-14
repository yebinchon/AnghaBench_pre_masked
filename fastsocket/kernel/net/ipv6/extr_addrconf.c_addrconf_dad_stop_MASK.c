
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {int flags; int lock; struct inet6_ifaddr* ifpub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inet6_ifaddr*) ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 int FUNC_3 (struct inet6_ifaddr*,struct inet6_ifaddr*) ;
 int FUNC_4 (struct inet6_ifaddr*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct inet6_ifaddr *VAR_4, int VAR_5)
{
 if (VAR_4->flags&VAR_1) {
  FUNC_5(&VAR_4->lock);
  FUNC_0(VAR_4);
  VAR_4->flags |= VAR_3;
  if (VAR_5)
   VAR_4->flags |= VAR_0;
  FUNC_6(&VAR_4->lock);
  FUNC_2(VAR_4);
 } else
  FUNC_4(VAR_4);
}
