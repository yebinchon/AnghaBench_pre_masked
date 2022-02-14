
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct datapath*,struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nlattr const*) ;
 int FUNC_5 (struct nlattr const*) ;
 struct nlattr* FUNC_6 (struct nlattr const*,int*) ;
 int FUNC_7 (struct nlattr const*) ;
 int FUNC_8 (struct datapath*,struct sk_buff*,struct nlattr const*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct datapath*,struct sk_buff*,struct nlattr const*) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct datapath *VAR_1, struct sk_buff *VAR_2,
   const struct nlattr *VAR_3, int VAR_4, bool VAR_5)
{




 int VAR_6 = -1;
 const struct nlattr *VAR_7;
 int VAR_8;

 for (VAR_7 = VAR_3, VAR_8 = VAR_4; VAR_8 > 0;
      VAR_7 = FUNC_6(VAR_7, &VAR_8)) {
  int VAR_9 = 0;

  if (VAR_6 != -1) {
   FUNC_1(VAR_1, FUNC_12(VAR_2, VAR_0), VAR_6);
   VAR_6 = -1;
  }

  switch (FUNC_7(VAR_7)) {
  case 133:
   VAR_6 = FUNC_5(VAR_7);
   break;

  case 128:
   FUNC_8(VAR_1, VAR_2, VAR_7);
   break;

  case 131:
   VAR_9 = FUNC_10(VAR_2, FUNC_4(VAR_7));
   if (FUNC_13(VAR_9))
    return VAR_9;
   break;

  case 132:
   VAR_9 = FUNC_9(VAR_2);
   break;

  case 129:
   VAR_9 = FUNC_2(VAR_2, FUNC_4(VAR_7));
   break;

  case 130:
   VAR_9 = FUNC_11(VAR_1, VAR_2, VAR_7);
   break;
  }

  if (FUNC_13(VAR_9)) {
   FUNC_3(VAR_2);
   return VAR_9;
  }
 }

 if (VAR_6 != -1) {
  if (VAR_5)
   VAR_2 = FUNC_12(VAR_2, VAR_0);

  FUNC_1(VAR_1, VAR_2, VAR_6);
 } else if (!VAR_5)
  FUNC_0(VAR_2);

 return 0;
}
