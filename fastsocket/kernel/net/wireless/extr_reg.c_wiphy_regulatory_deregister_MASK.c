
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regd; } ;
struct regulatory_request {int country_ie_env; int wiphy_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct regulatory_request* FUNC_0 () ;
 int FUNC_1 (struct wiphy*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wiphy*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct wiphy* FUNC_7 (int ) ;

void FUNC_8(struct wiphy *VAR_4)
{
 struct wiphy *VAR_5 = ((void*)0);
 struct regulatory_request *VAR_6;

 FUNC_2(&VAR_2);
 VAR_6 = FUNC_0();

 if (!FUNC_6(VAR_4))
  VAR_3--;

 FUNC_5(FUNC_1(VAR_4));
 FUNC_4(VAR_4->regd, ((void*)0));

 if (VAR_6)
  VAR_5 = FUNC_7(VAR_6->wiphy_idx);

 if (!VAR_5 || VAR_5 != VAR_4)
  goto out;

 VAR_6->wiphy_idx = VAR_1;
 VAR_6->country_ie_env = VAR_0;
out:
 FUNC_3(&VAR_2);
}
