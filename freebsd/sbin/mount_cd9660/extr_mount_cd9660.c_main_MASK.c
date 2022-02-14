
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct iovec**,int*,char*,char*,size_t) ;
 int FUNC_2 (struct iovec**,int*,char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,int*,int *) ;
 int FUNC_8 (int,char**,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (struct iovec*,int,int) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (struct iovec**,int*,char*) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_6, char **VAR_7)
{
 struct iovec *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;
 char *VAR_12, *VAR_13, *VAR_14, *VAR_15, VAR_16[VAR_1];
 int VAR_17;
 int VAR_18;
 char VAR_19[] = "cd9660";

 VAR_8 = ((void*)0);
 VAR_9 = 0;
 VAR_11 = VAR_17 = 0;
 VAR_18 = -1;

 while ((VAR_10 = FUNC_8(VAR_6, VAR_7, "begjo:rs:vC:")) != -1)
  switch (VAR_10) {
  case 'b':
   FUNC_1(&VAR_8, &VAR_9, "brokenjoliet", ((void*)0), (size_t)-1);
   break;
  case 'e':
   FUNC_1(&VAR_8, &VAR_9, "extatt", ((void*)0), (size_t)-1);
   break;
  case 'g':
   FUNC_1(&VAR_8, &VAR_9, "gens", ((void*)0), (size_t)-1);
   break;
  case 'j':
   FUNC_1(&VAR_8, &VAR_9, "nojoliet", ((void*)0), (size_t)-1);
   break;
  case 'o':
   FUNC_7(VAR_4, VAR_3, &VAR_11, ((void*)0));
   VAR_14 = FUNC_13(VAR_4, '=');
   VAR_15 = ((void*)0);
   if (VAR_14 != ((void*)0)) {
    *VAR_14 = '\0';
    VAR_15 = VAR_14 + 1;
   }
   FUNC_1(&VAR_8, &VAR_9, VAR_4, VAR_15, (size_t)-1);
   break;
  case 'r':
   FUNC_1(&VAR_8, &VAR_9, "norrip", ((void*)0), (size_t)-1);
   break;
  case 's':
   VAR_18 = FUNC_0(VAR_4);
   break;
  case 'v':
   VAR_17++;
   break;
  case 'C':
   if (FUNC_12(&VAR_8, &VAR_9, VAR_4) == -1)
    FUNC_4(VAR_0, "cd9660_iconv");
   FUNC_1(&VAR_8, &VAR_9, "kiconv", ((void*)0), (size_t)-1);
   break;
  case '?':
  default:
   FUNC_14();
  }
 VAR_6 -= VAR_5;
 VAR_7 += VAR_5;

 if (VAR_6 != 2)
  FUNC_14();

 VAR_12 = VAR_7[0];
 VAR_13 = VAR_7[1];





 if (FUNC_3(VAR_13, VAR_16) != 0)
  FUNC_4(1, "%s", VAR_16);
 (void)FUNC_11(VAR_12, VAR_12);

 if (VAR_18 == -1) {
  if ((VAR_18 = FUNC_6(VAR_12)) == -1) {
   if (VAR_17)
    FUNC_10("could not determine starting sector, "
           "using very first session\n");
   VAR_18 = 0;
  } else if (VAR_17)
   FUNC_10("using starting sector %d\n", VAR_18);
 }
 VAR_11 |= VAR_2;
 FUNC_1(&VAR_8, &VAR_9, "fstype", VAR_19, (size_t)-1);
 FUNC_1(&VAR_8, &VAR_9, "fspath", VAR_16, (size_t)-1);
 FUNC_1(&VAR_8, &VAR_9, "from", VAR_12, (size_t)-1);
 FUNC_2(&VAR_8, &VAR_9, "ssector", "%d", VAR_18);

 if (FUNC_9(VAR_8, VAR_9, VAR_11) < 0)
  FUNC_4(1, "%s", VAR_12);
 FUNC_5(0);
}
