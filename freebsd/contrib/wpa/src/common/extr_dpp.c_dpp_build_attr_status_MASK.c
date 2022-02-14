
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef enum dpp_status_error { ____Placeholder_dpp_status_error } dpp_status_error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wpabuf*,int) ;
 int FUNC_2 (struct wpabuf*,int) ;

__attribute__((used)) static void FUNC_3(struct wpabuf *VAR_2,
      enum dpp_status_error VAR_3)
{
 FUNC_0(VAR_1, "DPP: Status %d", VAR_3);
 FUNC_1(VAR_2, VAR_0);
 FUNC_1(VAR_2, 1);
 FUNC_2(VAR_2, VAR_3);
}
