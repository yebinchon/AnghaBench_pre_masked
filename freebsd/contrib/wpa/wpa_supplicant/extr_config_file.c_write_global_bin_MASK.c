
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int * FUNC_1 (struct wpabuf const*) ;
 size_t FUNC_2 (struct wpabuf const*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_0, const char *VAR_1,
        const struct wpabuf *VAR_2)
{
 size_t VAR_3;
 const u8 *VAR_4;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_0, "%s=", VAR_1);
 VAR_4 = FUNC_1(VAR_2);
 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_2); VAR_3++)
  FUNC_0(VAR_0, "%02X", *VAR_4++);
 FUNC_0(VAR_0, "\n");
}
