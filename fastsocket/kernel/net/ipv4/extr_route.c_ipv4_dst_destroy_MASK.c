
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtable {struct in_device* idev; struct inet_peer* peer; } ;
struct inet_peer {int dummy; } ;
struct in_device {int dummy; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct in_device*) ;
 int FUNC_1 (struct inet_peer*) ;

__attribute__((used)) static void FUNC_2(struct dst_entry *VAR_0)
{
 struct rtable *VAR_1 = (struct rtable *) VAR_0;
 struct inet_peer *VAR_2 = VAR_1->peer;
 struct in_device *VAR_3 = VAR_1->idev;

 if (VAR_2) {
  VAR_1->peer = ((void*)0);
  FUNC_1(VAR_2);
 }

 if (VAR_3) {
  VAR_1->idev = ((void*)0);
  FUNC_0(VAR_3);
 }
}
