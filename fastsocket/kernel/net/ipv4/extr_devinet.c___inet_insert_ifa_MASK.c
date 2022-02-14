
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmsghdr {int dummy; } ;
struct in_ifaddr {scalar_t__ ifa_local; int ifa_flags; scalar_t__ ifa_scope; scalar_t__ ifa_mask; struct in_ifaddr* ifa_next; int ifa_address; struct in_device* ifa_dev; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,struct in_ifaddr*) ;
 int FUNC_2 (struct in_ifaddr*) ;
 scalar_t__ FUNC_3 (int ,struct in_ifaddr*) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,struct in_ifaddr*,struct nlmsghdr*,int ) ;

__attribute__((used)) static int FUNC_6(struct in_ifaddr *VAR_6, struct nlmsghdr *VAR_7,
        u32 VAR_8)
{
 struct in_device *VAR_9 = VAR_6->ifa_dev;
 struct in_ifaddr *VAR_10, **VAR_11, **VAR_12;

 FUNC_0();

 if (!VAR_6->ifa_local) {
  FUNC_2(VAR_6);
  return 0;
 }

 VAR_6->ifa_flags &= ~VAR_2;
 VAR_12 = &VAR_9->ifa_list;

 for (VAR_11 = &VAR_9->ifa_list; (VAR_10 = *VAR_11) != ((void*)0);
      VAR_11 = &VAR_10->ifa_next) {
  if (!(VAR_10->ifa_flags & VAR_2) &&
      VAR_6->ifa_scope <= VAR_10->ifa_scope)
   VAR_12 = &VAR_10->ifa_next;
  if (VAR_10->ifa_mask == VAR_6->ifa_mask &&
      FUNC_3(VAR_10->ifa_address, VAR_6)) {
   if (VAR_10->ifa_local == VAR_6->ifa_local) {
    FUNC_2(VAR_6);
    return -VAR_0;
   }
   if (VAR_10->ifa_scope != VAR_6->ifa_scope) {
    FUNC_2(VAR_6);
    return -VAR_1;
   }
   VAR_6->ifa_flags |= VAR_2;
  }
 }

 if (!(VAR_6->ifa_flags & VAR_2)) {
  FUNC_4(VAR_6->ifa_local);
  VAR_11 = VAR_12;
 }

 VAR_6->ifa_next = *VAR_11;
 *VAR_11 = VAR_6;




 FUNC_5(VAR_4, VAR_6, VAR_7, VAR_8);
 FUNC_1(&VAR_5, VAR_3, VAR_6);

 return 0;
}
