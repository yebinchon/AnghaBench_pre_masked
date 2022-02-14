
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int udf_flags ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iovec**,int*,char*,...) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int*,int *) ;
 int FUNC_5 (int,char**,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct iovec*,int,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char**,char**,int ) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_8, char **VAR_9)
{
 char VAR_10[VAR_2];
 char VAR_11[] = "udf";
 struct iovec *VAR_12;
 char *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 VAR_18 = VAR_19 = VAR_20 = VAR_21 = 0;
 VAR_13 = VAR_14 = ((void*)0);
 VAR_12 = ((void*)0);
 while ((VAR_17 = FUNC_5(VAR_8, VAR_9, "o:vC:")) != -1)
  switch (VAR_17) {
  case 'o':
   FUNC_4(VAR_6, VAR_5, &VAR_19, ((void*)0));
   break;
  case 'v':
   VAR_21++;
   break;
  case 'C':
   if (FUNC_8(&VAR_13, &VAR_14, VAR_6) == -1)
    FUNC_2(VAR_0, "udf_iconv");
   VAR_20 |= VAR_4;
   break;
  case '?':
  default:
   FUNC_9();
  }
 VAR_8 -= VAR_7;
 VAR_9 += VAR_7;

 if (VAR_8 != 2)
  FUNC_9();

 VAR_15 = VAR_9[0];
 VAR_16 = VAR_9[1];





 if (FUNC_1(VAR_16, VAR_10) != 0)
  FUNC_2(VAR_1, "%s", VAR_10);
 (void)FUNC_7(VAR_15, VAR_15);




 VAR_19 |= VAR_3;

 FUNC_0(&VAR_12, &VAR_18, "fstype", VAR_11, (size_t)-1);
 FUNC_0(&VAR_12, &VAR_18, "fspath", VAR_10, (size_t)-1);
 FUNC_0(&VAR_12, &VAR_18, "from", VAR_15, (size_t)-1);
 FUNC_0(&VAR_12, &VAR_18, "flags", &VAR_20, sizeof(VAR_20));
 if (VAR_20 & VAR_4) {
  FUNC_0(&VAR_12, &VAR_18, "cs_disk", VAR_13, (size_t)-1);
  FUNC_0(&VAR_12, &VAR_18, "cs_local", VAR_14, (size_t)-1);
 }
 if (FUNC_6(VAR_12, VAR_18, VAR_19) < 0)
  FUNC_2(1, "%s", VAR_15);
 FUNC_3(0);
}
