
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 scalar_t__ FUNC_4 (struct sbuf*) ;
 struct sbuf* FUNC_5 (int *,int *,size_t,int ) ;
 int FUNC_6 (struct sbuf*,char*,char const) ;
 int FUNC_7 (struct sbuf*,char const) ;
 int FUNC_8 (char*,int ,size_t) ;

__attribute__((used)) static void
FUNC_9(char *VAR_1, size_t VAR_2)
{
 struct sbuf *VAR_3;
 const u_char *VAR_4;

 VAR_3 = FUNC_5(((void*)0), ((void*)0), VAR_2, VAR_0);
 for (VAR_4 = VAR_1; *VAR_4 != '\0'; VAR_4++) {
  if (!FUNC_0(*VAR_4) || FUNC_1(*VAR_4) || *VAR_4 =='"' || *VAR_4 == '%')
   FUNC_6(VAR_3, "%%%02X", *VAR_4);
  else
   FUNC_7(VAR_3, *VAR_4);
 }
 if (FUNC_4(VAR_3) != 0)
  VAR_1[0] = '\0';
 else
  FUNC_8(VAR_1, FUNC_2(VAR_3), VAR_2);
 FUNC_3(VAR_3);
}
