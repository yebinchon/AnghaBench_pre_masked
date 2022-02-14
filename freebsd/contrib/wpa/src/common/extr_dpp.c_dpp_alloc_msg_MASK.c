
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef enum dpp_public_action_frame_type { ____Placeholder_dpp_public_action_frame_type } dpp_public_action_frame_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wpabuf* FUNC_0 (int) ;
 int FUNC_1 (struct wpabuf*,int ) ;
 int FUNC_2 (struct wpabuf*,int) ;

struct wpabuf * FUNC_3(enum dpp_public_action_frame_type VAR_4,
         size_t VAR_5)
{
 struct wpabuf *VAR_6;

 VAR_6 = FUNC_0(8 + VAR_5);
 if (!VAR_6)
  return ((void*)0);
 FUNC_2(VAR_6, VAR_2);
 FUNC_2(VAR_6, VAR_3);
 FUNC_1(VAR_6, VAR_1);
 FUNC_2(VAR_6, VAR_0);
 FUNC_2(VAR_6, 1);
 FUNC_2(VAR_6, VAR_4);
 return VAR_6;
}
