
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct part_conf {int dummy; } ;
typedef int osm_subn_t ;
typedef int osm_log_t ;
typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int FUNC_3 (struct part_conf*) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,int) ;
 struct part_conf* FUNC_6 (int *,int *) ;
 int FUNC_7 (struct part_conf*,char*,int) ;
 int VAR_3 ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (int ) ;

int FUNC_10(osm_log_t * VAR_4, osm_subn_t * VAR_5,
          const char *VAR_6)
{
 char VAR_7[4096];
 struct part_conf *VAR_8 = ((void*)0);
 FILE *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7[0] = '\0';
 VAR_9 = FUNC_4(VAR_6, "r");
 if (!VAR_9) {
  FUNC_0(VAR_4, VAR_1,
   "Cannot open config file \'%s\': %s\n",
   VAR_6, FUNC_9(VAR_2));
  return -1;
 }

 VAR_10 = 0;

 VAR_11 = 0;

 while (FUNC_2(VAR_7, sizeof(VAR_7) - 1, VAR_9) != ((void*)0)) {
  char *VAR_12, *VAR_13 = VAR_7;

  VAR_10++;

  VAR_13 = VAR_7;

  VAR_12 = FUNC_8(VAR_13, '#');
  if (VAR_12)
   *VAR_12 = '\0';

  do {
   int VAR_14;
   while (*VAR_13 == ' ' || *VAR_13 == '\t' || *VAR_13 == '\n')
    VAR_13++;
   if (*VAR_13 == '\0')
    break;

   if (!VAR_8 && !(VAR_8 = FUNC_6(VAR_4, VAR_5))) {
    FUNC_0(VAR_4, VAR_0,
     "PARSE ERROR: line %d: "
     "internal: cannot create config\n",
     VAR_10);
    FUNC_5(VAR_3,
     "PARSE ERROR: line %d: "
     "internal: cannot create config\n",
     VAR_10);
    VAR_11 = -1;
    break;
   }

   VAR_12 = FUNC_8(VAR_13, ';');
   if (VAR_12)
    *VAR_12 = '\0';

   VAR_14 = FUNC_7(VAR_8, VAR_13, VAR_10);
   if (VAR_14 < 0) {
    VAR_11 = -1;
    break;
   }

   VAR_11 = 1;

   VAR_13 += VAR_14;

   if (VAR_12) {
    FUNC_3(VAR_8);
    VAR_8 = ((void*)0);
   }
  } while (VAR_12);

  if (VAR_11 == -1)
   break;
 }

 FUNC_1(VAR_9);

 return (VAR_11 == 1) ? 0 : 1;
}
