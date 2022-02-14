
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {int lock; int flags; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inet6_ifaddr*) ;
 int VAR_2 ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr* FUNC_2 (struct inet6_dev*,struct in6_addr const*,int,int,int ,int ,int ) ;
 int FUNC_3 (int ,struct inet6_ifaddr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct inet6_dev *VAR_3, const struct in6_addr *VAR_4,
       int VAR_5, int VAR_6)
{
 struct inet6_ifaddr *VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_0, 0, 0);
 if (!FUNC_0(VAR_7)) {
  FUNC_4(&VAR_7->lock);
  VAR_7->flags &= ~VAR_1;
  FUNC_5(&VAR_7->lock);
  FUNC_3(VAR_2, VAR_7);
  FUNC_1(VAR_7);
 }
}
