
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct regulatory_request {char* alpha2; int initiator; int wiphy_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wiphy*) ;
 struct regulatory_request* FUNC_2 (int,int ) ;
 int FUNC_3 (struct regulatory_request*) ;

int FUNC_4(struct wiphy *VAR_4, const char *VAR_5)
{
 struct regulatory_request *VAR_6;

 if (FUNC_0(!VAR_5 || !VAR_4))
  return -VAR_0;

 VAR_6 = FUNC_2(sizeof(struct regulatory_request), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->wiphy_idx = FUNC_1(VAR_4);

 VAR_6->alpha2[0] = VAR_5[0];
 VAR_6->alpha2[1] = VAR_5[1];
 VAR_6->initiator = VAR_3;

 FUNC_3(VAR_6);

 return 0;
}
