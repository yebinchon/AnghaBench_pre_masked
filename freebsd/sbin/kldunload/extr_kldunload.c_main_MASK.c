
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kld_file_stat {int version; char* name; } ;
typedef int stat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,struct kld_file_stat*) ;
 scalar_t__ FUNC_6 (int,int) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_10, char** VAR_11)
{
 struct kld_file_stat VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 char *VAR_17;

 VAR_17 = ((void*)0);
 VAR_16 = VAR_6;

 while ((VAR_13 = FUNC_3(VAR_10, VAR_11, "finv")) != -1) {
  switch (VAR_13) {
  case 'f':
   VAR_16 |= VAR_4;
   break;
  case 'i':
   VAR_16 |= VAR_5;
   break;
  case 'n':




   break;
  case 'v':
   VAR_16 |= VAR_7;
   break;
  default:
   FUNC_8();
  }
 }

 VAR_10 -= VAR_9;
 VAR_11 += VAR_9;

 if (VAR_10 == 0)
  FUNC_8();

 while ((VAR_17 = *VAR_11++) != ((void*)0)) {
  if (VAR_16 & VAR_5) {
   VAR_14 = FUNC_0(VAR_17);
   if (VAR_14 < 0)
    FUNC_2(VAR_0, "Invalid ID %s", VAR_8);
  } else {
   if ((VAR_14 = FUNC_4(VAR_17)) < 0)
    FUNC_2(VAR_0, "can't find file %s",
        VAR_17);
  }
  if (VAR_16 & VAR_7) {
   VAR_12.version = sizeof(VAR_12);
   if (FUNC_5(VAR_14, &VAR_12) < 0)
    FUNC_1(VAR_0, "can't stat file");
   (void) FUNC_7("Unloading %s, id=%d\n", VAR_12.name,
       VAR_14);
  }
  if (VAR_16 & VAR_4)
   VAR_15 = VAR_2;
  else
   VAR_15 = VAR_3;

  if (FUNC_6(VAR_14, VAR_15) < 0)
   FUNC_1(VAR_0, "can't unload file");
 }

 return (VAR_1);
}
