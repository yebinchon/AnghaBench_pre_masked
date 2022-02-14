
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmsghdr {int dummy; } ;
struct in_ifaddr {int ifa_flags; scalar_t__ ifa_scope; scalar_t__ ifa_mask; int ifa_address; struct in_ifaddr* ifa_next; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct in_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,struct in_ifaddr*) ;
 int FUNC_3 (struct in_ifaddr*) ;
 int FUNC_4 (struct in_ifaddr*) ;
 int FUNC_5 (int ,struct in_ifaddr*) ;
 int VAR_5 ;
 int FUNC_6 (int ,struct in_ifaddr*,struct nlmsghdr*,int ) ;

__attribute__((used)) static void FUNC_7(struct in_device *VAR_6, struct in_ifaddr **VAR_7,
    int VAR_8, struct nlmsghdr *VAR_9, u32 VAR_10)
{
 struct in_ifaddr *VAR_11 = ((void*)0);
 struct in_ifaddr *VAR_12, *VAR_13 = *VAR_7;
 struct in_ifaddr *VAR_14 = VAR_6->ifa_list;
 struct in_ifaddr *VAR_15 = ((void*)0);
 int VAR_16 = FUNC_1(VAR_6);

 FUNC_0();





 if (!(VAR_13->ifa_flags & VAR_0)) {
  struct in_ifaddr **VAR_17 = &VAR_13->ifa_next;

  while ((VAR_12 = *VAR_17) != ((void*)0)) {
   if (!(VAR_12->ifa_flags & VAR_0) &&
       VAR_13->ifa_scope <= VAR_12->ifa_scope)
    VAR_14 = VAR_12;

   if (!(VAR_12->ifa_flags & VAR_0) ||
       VAR_13->ifa_mask != VAR_12->ifa_mask ||
       !FUNC_5(VAR_13->ifa_address, VAR_12)) {
    VAR_17 = &VAR_12->ifa_next;
    VAR_15 = VAR_12;
    continue;
   }

   if (!VAR_16) {
    *VAR_17 = VAR_12->ifa_next;

    FUNC_6(VAR_3, VAR_12, VAR_9, VAR_10);
    FUNC_2(&VAR_5,
      VAR_1, VAR_12);
    FUNC_4(VAR_12);
   } else {
    VAR_11 = VAR_12;
    break;
   }
  }
 }



 *VAR_7 = VAR_13->ifa_next;
 FUNC_6(VAR_3, VAR_13, VAR_9, VAR_10);
 FUNC_2(&VAR_5, VAR_1, VAR_13);

 if (VAR_11) {

  if (VAR_15) {
   VAR_15->ifa_next = VAR_11->ifa_next;
   VAR_11->ifa_next = VAR_14->ifa_next;
   VAR_14->ifa_next = VAR_11;
  }

  VAR_11->ifa_flags &= ~VAR_0;
  FUNC_6(VAR_4, VAR_11, VAR_9, VAR_10);
  FUNC_2(&VAR_5,
    VAR_2, VAR_11);
  for (VAR_12 = VAR_11->ifa_next; VAR_12; VAR_12 = VAR_12->ifa_next) {
   if (VAR_13->ifa_mask != VAR_12->ifa_mask ||
       !FUNC_5(VAR_13->ifa_address, VAR_12))
     continue;
   FUNC_3(VAR_12);
  }

 }
 if (VAR_8)
  FUNC_4(VAR_13);
}
