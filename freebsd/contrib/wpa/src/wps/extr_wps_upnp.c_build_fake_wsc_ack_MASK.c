
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wpabuf* FUNC_0 (int) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*,int ) ;
 int FUNC_3 (struct wpabuf*,int ) ;
 int FUNC_4 (struct wpabuf*,char*) ;
 int FUNC_5 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_6 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_7 (struct wpabuf*) ;
 scalar_t__ FUNC_8 (struct wpabuf*,int ,int *,int ,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_9(void)
{
 struct wpabuf *VAR_5 = FUNC_0(100);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_5(VAR_5, VAR_2);
 FUNC_4(VAR_5, "00:00:00:00:00:00");
 if (FUNC_7(VAR_5) ||
     FUNC_6(VAR_5, VAR_4)) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 FUNC_3(VAR_5, VAR_0);
 FUNC_3(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_3);

 FUNC_3(VAR_5, VAR_1);
 FUNC_3(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_3);
 if (FUNC_8(VAR_5, 0, ((void*)0), 0, 0)) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }
 return VAR_5;
}
