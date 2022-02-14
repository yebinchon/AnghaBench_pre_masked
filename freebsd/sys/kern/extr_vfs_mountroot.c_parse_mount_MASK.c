
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mntarg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct mntarg*,int ) ;
 char* FUNC_2 (int,int ,int) ;
 struct mntarg* FUNC_3 (struct mntarg*,char*,char*,int) ;
 int FUNC_4 (char**) ;
 struct mntarg* FUNC_5 (struct mntarg*,char*) ;
 int FUNC_6 (char**,char) ;
 int FUNC_7 (char**,char) ;
 int FUNC_8 (char**,char**) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (char*,char*,int) ;
 char* FUNC_12 (char*,char*) ;
 int * FUNC_13 (char*) ;
 int FUNC_14 (char*,char*) ;

__attribute__((used)) static int
FUNC_15(char **VAR_11)
{
 char *VAR_12;
 struct mntarg *VAR_13;
 char *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_19 = FUNC_8(VAR_11, &VAR_17);
 if (VAR_19)
  return (VAR_19);
 VAR_15 = VAR_17;
 VAR_19 = FUNC_7(&VAR_17, ':');
 if (VAR_19) {
  FUNC_0(VAR_15, VAR_4);
  return (VAR_19);
 }
 FUNC_6(&VAR_17, '\0');
 FUNC_4(&VAR_17);
 VAR_14 = VAR_17;

 if (VAR_9 != -1) {

  VAR_17 = FUNC_12(VAR_14, "md#");
  if (VAR_17 != ((void*)0))
   VAR_17[2] = '0' + VAR_9;
 }


 VAR_19 = FUNC_8(VAR_11, &VAR_17);
 VAR_16 = (VAR_19 == 0) ? VAR_17 : ((void*)0);

 FUNC_10("Trying to mount root from %s:%s [%s]...\n", VAR_15, VAR_14,
     (VAR_16 != ((void*)0)) ? VAR_16 : "");

 VAR_12 = FUNC_2(VAR_2, VAR_4, VAR_5 | VAR_6);

 if (FUNC_13(VAR_15) == ((void*)0)) {
  FUNC_11(VAR_12, "unknown file system", VAR_2);
  VAR_19 = VAR_1;
  goto out;
 }

 VAR_19 = FUNC_14(VAR_15, VAR_14);
 if (VAR_19 != 0)
  goto out;

 VAR_18 = VAR_8 / 10;
 VAR_20 = VAR_10 * VAR_8;

 for (;;) {
  VAR_13 = ((void*)0);
  VAR_13 = FUNC_3(VAR_13, "fstype", VAR_15, -1);
  VAR_13 = FUNC_3(VAR_13, "fspath", "/", -1);
  VAR_13 = FUNC_3(VAR_13, "from", VAR_14, -1);
  VAR_13 = FUNC_3(VAR_13, "errmsg", VAR_12, VAR_2);
  VAR_13 = FUNC_3(VAR_13, "ro", ((void*)0), 0);
  VAR_13 = FUNC_5(VAR_13, VAR_16);

  VAR_19 = FUNC_1(VAR_13, VAR_3);
  if (VAR_19 == 0 || VAR_20 <= 0)
   break;

  if (VAR_10 * VAR_8 == VAR_20 ||
      (VAR_7 && VAR_20 % VAR_8 == 0)) {
   FUNC_10("Mounting from %s:%s failed with error %d; "
       "retrying for %d more second%s\n", VAR_15, VAR_14, VAR_19,
       VAR_20 / VAR_8, (VAR_20 / VAR_8 > 1) ? "s" : "");
  }
  FUNC_9("rmretry", VAR_18);
  VAR_20 -= VAR_18;
 }
 out:
 if (VAR_19) {
  FUNC_10("Mounting from %s:%s failed with error %d",
      VAR_15, VAR_14, VAR_19);
  if (VAR_12[0] != '\0')
   FUNC_10(": %s", VAR_12);
  FUNC_10(".\n");
 }
 FUNC_0(VAR_15, VAR_4);
 FUNC_0(VAR_12, VAR_4);
 if (VAR_16 != ((void*)0))
  FUNC_0(VAR_16, VAR_4);

 return ((VAR_19 < 0) ? VAR_0 : VAR_19);
}
