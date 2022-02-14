
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct datapath {int dummy; } ;




 int FUNC_0 (struct datapath*,struct sk_buff*,struct nlattr*,int,int) ;
 int FUNC_1 () ;
 struct nlattr* FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (struct nlattr const*) ;
 int FUNC_4 (struct nlattr const*) ;
 struct nlattr* FUNC_5 (struct nlattr const*,int*) ;
 int FUNC_6 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_7(struct datapath *VAR_0, struct sk_buff *VAR_1,
    const struct nlattr *VAR_2)
{
 const struct nlattr *VAR_3 = ((void*)0);
 const struct nlattr *VAR_4;
 int VAR_5;

 for (VAR_4 = FUNC_2(VAR_2), VAR_5 = FUNC_4(VAR_2); VAR_5 > 0;
   VAR_4 = FUNC_5(VAR_4, &VAR_5)) {
  switch (FUNC_6(VAR_4)) {
  case 128:
   if (FUNC_1() >= FUNC_3(VAR_4))
    return 0;
   break;

  case 129:
   VAR_3 = VAR_4;
   break;
  }
 }

 return FUNC_0(VAR_0, VAR_1, FUNC_2(VAR_3),
       FUNC_4(VAR_3), 1);
}
