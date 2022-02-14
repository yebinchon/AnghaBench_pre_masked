
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct media {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct media* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,scalar_t__) ;
 struct sk_buff* FUNC_5 (int) ;
 int VAR_5 ;

struct sk_buff *FUNC_6(void)
{
 struct sk_buff *VAR_6;
 struct media *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_0 * FUNC_0(VAR_1));
 if (!VAR_6)
  return ((void*)0);

 FUNC_1(&VAR_5);
 for (VAR_8 = 0, VAR_7 = VAR_4; VAR_8 < VAR_3; VAR_8++, VAR_7++) {
  FUNC_4(VAR_6, VAR_2, VAR_7->name,
        FUNC_3(VAR_7->name) + 1);
 }
 FUNC_2(&VAR_5);
 return VAR_6;
}
