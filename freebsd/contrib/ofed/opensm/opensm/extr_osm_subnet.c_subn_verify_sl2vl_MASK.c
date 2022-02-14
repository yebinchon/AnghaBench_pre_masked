
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,...) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*,char**) ;
 long FUNC_4 (char*,char**,int ) ;

__attribute__((used)) static void FUNC_5(char **VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4, *VAR_5;
 int VAR_6 = 0;

 if (*VAR_0 == ((void*)0))
  return;

 VAR_2 = FUNC_2(*VAR_0);

 VAR_3 = FUNC_3(VAR_2, ",\n", &VAR_5);
 while (VAR_3) {
  long VAR_7 = FUNC_4(VAR_3, &VAR_4, 0);

  if (*VAR_4)
   FUNC_1(" Warning: Cached Option %s_sl2vl:vl=%s "
       "improperly formatted\n", VAR_1, VAR_3);
  else if (VAR_7 < 0 || VAR_7 > 15)
   FUNC_1(" Warning: Cached Option %s_sl2vl:vl=%ld "
       "out of range\n", VAR_1, VAR_7);

  VAR_6++;
  VAR_3 = FUNC_3(((void*)0), ",\n", &VAR_5);
 }

 if (VAR_6 < 16)
  FUNC_1(" Warning: Cached Option %s_sl2vl: < 16 VLs "
      "listed\n", VAR_1);
 else if (VAR_6 > 16)
  FUNC_1(" Warning: Cached Option %s_sl2vl: > 16 listed: "
      "excess VLs will be dropped\n", VAR_1);

 FUNC_0(VAR_2);
}
