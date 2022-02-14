
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_pid; int nlmsg_flags; int nlmsg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nlmsghdr*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*,int ) ;
 struct nlmsghdr* FUNC_6 (struct sk_buff*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static inline void
FUNC_10(struct sk_buff *VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 struct nlmsghdr *VAR_21;

 VAR_20 = VAR_14->len;
 if (VAR_20 < sizeof(*VAR_21))
  return;

 VAR_21 = FUNC_6(VAR_14);
 VAR_19 = VAR_21->nlmsg_len;
 if (VAR_19 < sizeof(*VAR_21) || VAR_20 < VAR_19)
  return;

 VAR_17 = VAR_21->nlmsg_pid;
 VAR_18 = VAR_21->nlmsg_flags;

 if(VAR_17 <= 0 || !(VAR_18 & VAR_11) || VAR_18 & VAR_10)
  FUNC_2(-VAR_3);

 if (VAR_18 & VAR_7)
  FUNC_2(-VAR_2);

 VAR_16 = VAR_21->nlmsg_type;
 if (VAR_16 < VAR_8 || VAR_16 >= VAR_6)
  FUNC_2(-VAR_3);

 if (VAR_16 <= VAR_5)
  return;

 if (FUNC_7(VAR_14, VAR_0))
  FUNC_2(-VAR_4);

 FUNC_8(&VAR_13);

 if (VAR_12) {
  if (VAR_12 != VAR_17) {
   FUNC_9(&VAR_13);
   FUNC_2(-VAR_1);
  }
 } else {
  FUNC_4();
  VAR_12 = VAR_17;
 }

 FUNC_9(&VAR_13);

 VAR_15 = FUNC_3(FUNC_0(VAR_21), VAR_16,
      VAR_19 - FUNC_1(0));
 if (VAR_15 < 0)
  FUNC_2(VAR_15);

 if (VAR_18 & VAR_9)
  FUNC_5(VAR_14, VAR_21, 0);
 return;
}
