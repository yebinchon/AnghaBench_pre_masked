
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int writebuf ;
typedef char* u_long ;
struct grouplist {scalar_t__ groupid; struct grouplist* next; } ;
struct group {char** gr_mem; int gr_gid; } ;
typedef scalar_t__ gid_t ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 () ;
 struct group* FUNC_1 () ;
 int * VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (int,char*,void*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char*,int,int *) ;
 int * FUNC_9 (void*,char*) ;
 int FUNC_10 (int,char**,char*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 struct grouplist* FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int ,int) ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,int,char*,char*,char*,char*) ;
 char* FUNC_15 (char*,char) ;
 char* FUNC_16 (char*,char*) ;
 int FUNC_17 () ;
 int FUNC_18 (char*,char*,...) ;
 scalar_t__ FUNC_19 (char**) ;

int
FUNC_20(int VAR_10, char *VAR_11[])
{
 FILE *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 char VAR_16[VAR_0];
 char VAR_17[VAR_0];
 struct group *VAR_18;
 struct grouplist *VAR_19;
 char *VAR_20;
 int VAR_21;
 gid_t VAR_22;
 char *VAR_23, *VAR_24, *VAR_25, *VAR_26;
 int VAR_27 = 0;

 VAR_20 = ((void*)0);
 while ((VAR_21 = FUNC_10(VAR_10, VAR_11, "g:p:h:n:d:q")) != -1) {
  switch(VAR_21) {
  case 'g':
   VAR_4 = VAR_8;
   break;
  case 'p':
   VAR_9 = VAR_8;
   break;
  case 'h':
   VAR_5 = VAR_8;
   break;
  case 'n':
   VAR_7 = VAR_8;
   break;
  case 'd':
   VAR_20 = VAR_8;
   break;
  case 'q':
   VAR_27++;
   break;
  default:
   FUNC_17();
   break;
  }
 }

 if (VAR_20 == ((void*)0)) {
  if (FUNC_19(&VAR_20))
   FUNC_5(1, "no domain name specified and default domain not set");

 }

 if ((VAR_12 = FUNC_9(VAR_4, "r")) == ((void*)0)) {
  FUNC_4(1, "%s", VAR_4);
 }

 if ((VAR_13 = FUNC_9(VAR_9, "r")) == ((void*)0)) {
  FUNC_4(1, "%s", VAR_9);
 }

 if ((VAR_14 = FUNC_9(VAR_5, "r")) == ((void*)0)) {
  FUNC_4(1, "%s", VAR_5);
 }

 if ((VAR_15 = FUNC_9(VAR_7, "r")) == ((void*)0)) {

  VAR_15 = ((void*)0);
 }

 VAR_2 = VAR_12;



 FUNC_2();
 while((VAR_18 = FUNC_1()) != ((void*)0)) {
  while(*VAR_18->gr_mem) {
   FUNC_12(VAR_6, *VAR_18->gr_mem, VAR_18->gr_gid, 0);
   VAR_18->gr_mem++;
  }
 }

 FUNC_7(VAR_12);
 FUNC_0();





 while(FUNC_8(VAR_16, VAR_0, VAR_13)) {

  for (VAR_23 = VAR_16; *VAR_23 != '\0'; VAR_23++)
   if (*VAR_23 != ' ' && *VAR_23 != '\t')
    break;
  if (*VAR_23 == '#' || *VAR_23 == '\0')
   continue;
  if ((VAR_23 = FUNC_15(VAR_16, ':')) == ((void*)0)) {
   FUNC_18("bad passwd file entry: %s", VAR_16);
   continue;
  }
  *VAR_23 = '\0';
  VAR_23++;
  if ((VAR_23 = FUNC_15(VAR_23, ':')) == ((void*)0)) {
   FUNC_18("bad passwd file entry: %s", VAR_16);
   continue;
  }
  *VAR_23 = '\0';
  VAR_23++;
  VAR_24 = VAR_23;
  if ((VAR_23 = FUNC_15(VAR_23, ':')) == ((void*)0)) {
   FUNC_18("bad passwd file entry: %s", VAR_16);
   continue;
  }
  *VAR_23 = '\0';
  VAR_23++;
  VAR_25 = VAR_23;
  if ((VAR_23 = FUNC_15(VAR_23, ':')) == ((void*)0)) {
   FUNC_18("bad passwd file entry: %s", VAR_16);
   continue;
  }
  *VAR_23 = '\0';
  VAR_22 = FUNC_3(VAR_25);

  FUNC_14(VAR_17, sizeof(VAR_17), "%s.%s@%s", VAR_1,
       VAR_24, VAR_20);

  if (FUNC_11(VAR_3, VAR_17)) {
   if (!VAR_27)
    FUNC_18("duplicate netid '%s.%s@%s' -- skipping",
      VAR_1, VAR_24, VAR_20);
   continue;
  } else {
   FUNC_12(VAR_3, VAR_17, 0, 1);
  }
  FUNC_13("%s.%s@%s %s:%s", VAR_1, VAR_24, VAR_20, VAR_24, VAR_25);
  if ((VAR_19 = FUNC_11(VAR_6, (char *)&VAR_16)) != ((void*)0)) {
   while(VAR_19) {
    if (VAR_19->groupid != VAR_22)
     FUNC_13(",%lu", (u_long)VAR_19->groupid);
    VAR_19 = VAR_19->next;
   }
  }
  FUNC_13 ("\n");
 }

 FUNC_7(VAR_13);





 while ((VAR_23 = FUNC_8(VAR_16, VAR_0, VAR_14))) {
  if (*VAR_23 == '#')
   continue;
  if (!(VAR_26 = FUNC_16(VAR_23, "#\n")))
   continue;
  *VAR_26 = '\0';
  if (!(VAR_26 = FUNC_16(VAR_23, " \t")))
   continue;
  *VAR_26++ = '\0';
  VAR_23 = VAR_26;
  while (*VAR_23 == ' ' || *VAR_23 == '\t')
   VAR_23++;
  if (!(VAR_26 = FUNC_16(VAR_23, " \t")))
   continue;
  *VAR_26++ = '\0';
  FUNC_14(VAR_17, sizeof(VAR_17), "%s.%s@%s", VAR_1,
        VAR_23, VAR_20);
  if (FUNC_11(VAR_3, (char *)&VAR_17)) {
   if (!VAR_27)
    FUNC_18("duplicate netid '%s' -- skipping",
        VAR_17);
   continue;
  } else {
   FUNC_12(VAR_3, (char *)&VAR_17, 0, 1);
  }
  FUNC_13 ("%s.%s@%s 0:%s\n", VAR_1, VAR_23, VAR_20, VAR_23);
 }

 FUNC_7(VAR_14);






 if (VAR_15 != ((void*)0)) {
  while(FUNC_8(VAR_16, VAR_0, VAR_15)) {
   if (VAR_16[0] == '#')
    continue;
   if ((VAR_23 = FUNC_16((char*)&VAR_16, " \t")) == ((void*)0)) {
    FUNC_18("bad netid entry: '%s'", VAR_16);
    continue;
   }

   VAR_17[0] = *VAR_23;
   *VAR_23 = '\0';
   if (FUNC_11(VAR_3, (char *)&VAR_16)) {
    if (!VAR_27)
     FUNC_18("duplicate netid '%s' -- skipping",
        VAR_16);
    continue;
   } else {
    FUNC_12(VAR_3, (char *)&VAR_16, 0, 1);
   }
   *VAR_23 = VAR_17[0];
   FUNC_13("%s",VAR_16);
  }
  FUNC_7(VAR_15);
 }

 FUNC_6(0);
}
