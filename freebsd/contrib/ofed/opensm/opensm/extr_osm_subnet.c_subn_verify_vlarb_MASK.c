
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,char const*,...) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*,char**) ;
 long FUNC_5 (char*,char**,int ) ;

__attribute__((used)) static void FUNC_6(char **VAR_0, const char *VAR_1,
         const char *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 int VAR_7 = 0;

 if (*VAR_0 == ((void*)0))
  return;

 VAR_3 = FUNC_3(*VAR_0);

 VAR_4 = FUNC_4(VAR_3, ",\n", &VAR_6);
 while (VAR_4) {
  char *VAR_8, *VAR_9;

  VAR_8 = VAR_4;
  VAR_9 = FUNC_2(VAR_4, ':');

  if (VAR_9) {
   long VAR_10, VAR_11;

   *VAR_9 = '\0';
   VAR_9++;

   VAR_10 = FUNC_5(VAR_8, &VAR_5, 0);

   if (*VAR_5)
    FUNC_1(" Warning: Cached Option "
        "%s_vlarb_%s:vl=%s"
        " improperly formatted\n",
        VAR_1, VAR_2, VAR_8);
   else if (VAR_10 < 0 || VAR_10 > 14)
    FUNC_1(" Warning: Cached Option "
        "%s_vlarb_%s:vl=%ld out of range\n",
        VAR_1, VAR_2, VAR_10);

   VAR_11 = FUNC_5(VAR_9, &VAR_5, 0);

   if (*VAR_5)
    FUNC_1(" Warning: Cached Option "
        "%s_vlarb_%s:weight=%s "
        "improperly formatted\n",
        VAR_1, VAR_2, VAR_9);
   else if (VAR_11 < 0 || VAR_11 > 255)
    FUNC_1(" Warning: Cached Option "
        "%s_vlarb_%s:weight=%ld "
        "out of range\n",
        VAR_1, VAR_2, VAR_11);
  } else
   FUNC_1(" Warning: Cached Option "
       "%s_vlarb_%s:vl:weight=%s "
       "improperly formatted\n",
       VAR_1, VAR_2, VAR_4);

  VAR_7++;
  VAR_4 = FUNC_4(((void*)0), ",\n", &VAR_6);
 }

 if (VAR_7 > 64)
  FUNC_1(" Warning: Cached Option %s_vlarb_%s: > 64 listed:"
      " excess vl:weight pairs will be dropped\n",
      VAR_1, VAR_2);

 FUNC_0(VAR_3);
}
