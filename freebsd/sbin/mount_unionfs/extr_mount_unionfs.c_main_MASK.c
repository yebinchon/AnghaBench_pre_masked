
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_str ;
struct iovec {int dummy; } ;
typedef int gid_str ;
typedef int errmsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iovec**,int*,char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (int ,char*,char*,char*,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (struct iovec*,int,int ) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_5, char *VAR_6[])
{
 struct iovec *VAR_7;
 int VAR_8, VAR_9;
 char VAR_10 [VAR_2], VAR_11[VAR_2], VAR_12[255];
 char VAR_13[20], VAR_14[20];
 char VAR_15[] = "unionfs";
 char *VAR_16, *VAR_17;

 VAR_7 = ((void*)0);
 VAR_9 = 0;
 FUNC_6(VAR_12, 0, sizeof(VAR_12));

 while ((VAR_8 = FUNC_5(VAR_5, VAR_6, "bo:")) != -1) {
  switch (VAR_8) {
  case 'b':
   FUNC_10("\n  -b is deprecated.  Use \"-o below\" instead\n");
   FUNC_0(&VAR_7, &VAR_9, "below", ((void*)0), 0);
   break;
  case 'o':
                        VAR_16 = FUNC_11(VAR_3, '=');
                        VAR_17 = ((void*)0);
                        if (VAR_16 != ((void*)0)) {
                                *VAR_16 = '\0';
                                VAR_17 = VAR_16 + 1;
    if (FUNC_12(VAR_3, "gid") == 0) {
     FUNC_8(VAR_17, VAR_14, sizeof(VAR_14));
     VAR_17 = VAR_14;
    }
    else if (FUNC_12(VAR_3, "uid") == 0) {
     FUNC_9(VAR_17, VAR_13, sizeof(VAR_13));
     VAR_17 = VAR_13;
    }
                        }
                        FUNC_0(&VAR_7, &VAR_9, VAR_3, VAR_17, (size_t)-1);
   break;
  case '?':
  default:
   FUNC_14();

  }
 }
 VAR_5 -= VAR_4;
 VAR_6 += VAR_4;

 if (VAR_5 != 2)
  FUNC_14();


 if (FUNC_1(VAR_6[0], VAR_11) != 0)
  FUNC_2(VAR_1, "%s", VAR_11);
 if (FUNC_1(VAR_6[1], VAR_10) != 0)
  FUNC_2(VAR_1, "%s", VAR_10);

 if (FUNC_13(VAR_11, VAR_10) || FUNC_13(VAR_10, VAR_11))
  FUNC_3(VAR_1, "%s (%s) and %s (%s) are not distinct paths",
       VAR_6[0], VAR_11, VAR_6[1], VAR_10);

 FUNC_0(&VAR_7, &VAR_9, "fstype", VAR_15, (size_t)-1);
 FUNC_0(&VAR_7, &VAR_9, "fspath", VAR_10, (size_t)-1);
 FUNC_0(&VAR_7, &VAR_9, "from", VAR_11, (size_t)-1);
 FUNC_0(&VAR_7, &VAR_9, "errmsg", VAR_12, sizeof(VAR_12));

 if (FUNC_7(VAR_7, VAR_9, 0))
  FUNC_2(VAR_0, "%s: %s", VAR_10, VAR_12);
 FUNC_4(0);
}
