
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcamsg {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct nlattr**,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (struct nlmsghdr const*,int,struct nlattr**,int ,int *) ;

__attribute__((used)) static struct nlattr *
FUNC_5(const struct nlmsghdr *VAR_5)
{
 struct nlattr *VAR_6, *VAR_7[VAR_2+1];
 struct nlattr *VAR_8[VAR_3 + 1];
 struct nlattr *VAR_9[VAR_0 + 1];
 struct nlattr *VAR_10;

 if (FUNC_4(VAR_5, sizeof(struct tcamsg), VAR_9, VAR_0, ((void*)0)) < 0)
  return ((void*)0);
 VAR_6 = VAR_9[VAR_4];
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (FUNC_3(VAR_8, VAR_3, FUNC_1(VAR_6),
        FUNC_0(FUNC_2(VAR_6)), ((void*)0)) < 0)
  return ((void*)0);

 if (VAR_8[1] == ((void*)0))
  return ((void*)0);
 if (FUNC_3(VAR_7, VAR_2, FUNC_1(VAR_8[1]),
        FUNC_2(VAR_8[1]), ((void*)0)) < 0)
  return ((void*)0);
 VAR_10 = VAR_7[VAR_1];

 return VAR_10;
}
