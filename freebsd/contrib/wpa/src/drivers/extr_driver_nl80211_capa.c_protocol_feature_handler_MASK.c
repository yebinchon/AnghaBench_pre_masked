
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nl_msg {int dummy; } ;
struct genlmsghdr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct genlmsghdr*,int ) ;
 int FUNC_1 (struct genlmsghdr*,int ) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,int ,int ,int *) ;
 struct genlmsghdr* FUNC_4 (int ) ;
 int FUNC_5 (struct nl_msg*) ;

__attribute__((used)) static int FUNC_6(struct nl_msg *VAR_3, void *VAR_4)
{
 u32 *VAR_5 = VAR_4;
 struct nlattr *VAR_6[VAR_0 + 1];
 struct genlmsghdr *VAR_7 = FUNC_4(FUNC_5(VAR_3));

 FUNC_3(VAR_6, VAR_0, FUNC_0(VAR_7, 0),
    FUNC_1(VAR_7, 0), ((void*)0));

 if (VAR_6[VAR_1])
  *VAR_5 = FUNC_2(VAR_6[VAR_1]);

 return VAR_2;
}
