
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmsghdr {int nlmsg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u32
FUNC_0(const struct nlmsghdr *VAR_2)
{
 return VAR_2->nlmsg_flags & VAR_1 ? 0 : VAR_0;
}
