
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 struct wpabuf* FUNC_3 (int) ;
 struct wpabuf* FUNC_4 (void*,int) ;
 struct wpabuf* FUNC_5 (struct wpabuf*,int *) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,int) ;
 scalar_t__ FUNC_8 (struct wpabuf**,int) ;
 struct wpabuf* FUNC_9 (struct wpabuf*,int) ;

__attribute__((used)) static int FUNC_10(void)
{
 int VAR_2 = 0;
 void *VAR_3;
 struct wpabuf *VAR_4;

 FUNC_2(VAR_1, "wpabuf tests");

 VAR_3 = FUNC_1(100);
 if (VAR_3) {
  VAR_4 = FUNC_4(VAR_3, 100);
  if (VAR_4) {
   if (FUNC_8(&VAR_4, 100) < 0)
    VAR_2++;
   else
    FUNC_7(VAR_4, 100);
   FUNC_6(VAR_4);
  } else {
   VAR_2++;
   FUNC_0(VAR_3);
  }
 } else {
  VAR_2++;
 }

 VAR_4 = FUNC_3(100);
 if (VAR_4) {
  struct wpabuf *VAR_5;

  FUNC_7(VAR_4, 100);
  if (FUNC_8(&VAR_4, 100) < 0)
   VAR_2++;
  else
   FUNC_7(VAR_4, 100);
  VAR_5 = FUNC_5(VAR_4, ((void*)0));
  if (VAR_5 != VAR_4)
   VAR_2++;
  FUNC_6(VAR_5);
 } else {
  VAR_2++;
 }

 VAR_4 = ((void*)0);
 VAR_4 = FUNC_9(VAR_4, 10);
 if (VAR_4 != ((void*)0))
  VAR_2++;

 if (VAR_2) {
  FUNC_2(VAR_0, "%d wpabuf test(s) failed", VAR_2);
  return -1;
 }

 return 0;
}
