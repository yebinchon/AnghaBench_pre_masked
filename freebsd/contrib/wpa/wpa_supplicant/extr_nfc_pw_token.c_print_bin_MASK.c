
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int * FUNC_1 (struct wpabuf const*) ;
 size_t FUNC_2 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, const struct wpabuf *VAR_1)
{
 size_t VAR_2, VAR_3;
 const u8 *VAR_4;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_0("%s=", VAR_0);

 VAR_4 = FUNC_1(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_0("%02X", *VAR_4++);

 FUNC_0("\n");
}
