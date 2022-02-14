
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_1, device_t VAR_2)
{
 const char *VAR_3, *VAR_4, *VAR_5;

 if (!VAR_0)
  return;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == ((void*)0))
  return;
 VAR_3 = FUNC_3(VAR_2);
 VAR_4 = FUNC_4(VAR_2);

 FUNC_1(VAR_1, "<%s>", VAR_3 != ((void*)0) ? VAR_3 : "unknown");
 FUNC_7(FUNC_0(VAR_2));
 if (!FUNC_5(VAR_2))
  FUNC_6(" disabled");
 if (VAR_4)
  FUNC_6(" type %s", VAR_4);
 FUNC_6(" compat %s (no driver attached)\n", VAR_5);
}
