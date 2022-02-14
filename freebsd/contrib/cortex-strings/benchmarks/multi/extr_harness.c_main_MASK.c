
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* stub_t ) (char*,char*,int) ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct test {char* name; int (* stub ) (char*,char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (char*) ;
 struct test* FUNC_3 (char const*) ;
 int FUNC_4 (int,char**,char*) ;
 char* FUNC_5 (size_t) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,int*,int*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,char*,char*,int,int,int,int,char const*,double,double,int,char*,int,double) ;
 scalar_t__ FUNC_9 () ;
 char* FUNC_10 (char*,int) ;
 int FUNC_11 (int) ;
 char* FUNC_12 (int ) ;
 char* FUNC_13 (char*,char) ;
 char* FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (char*) ;

int FUNC_18(int VAR_4, char **VAR_5)
{

  size_t VAR_6 = VAR_2;


  int VAR_7 = 31;

  int VAR_8 = 10000000;

  int VAR_9 = 0;

  const char *VAR_10 = ((void*)0);

  int VAR_11 = 8;
  int VAR_12 = 8;

  const char *VAR_13 = "0";

  int VAR_14;

  while ((VAR_14 = FUNC_4(VAR_4, VAR_5, "c:l:ft:r:hva:")) > 0)
    {
      switch (VAR_14)
 {
 case 'c':
          VAR_7 = FUNC_7(VAR_3, VAR_5[0]);
          break;
 case 'l':
          VAR_8 = FUNC_7(VAR_3, VAR_5[0]);
          break;
 case 'a':
          FUNC_6(VAR_3, VAR_5[0], &VAR_11, &VAR_12);
          break;
 case 'f':
          VAR_9 = 1;
          break;
 case 't':
          VAR_10 = FUNC_12(VAR_3);
          break;
 case 'r':
          VAR_13 = FUNC_12(VAR_3);
          break;
 case 'h':
          FUNC_17(VAR_5[0]);
          break;
 default:
          FUNC_17(VAR_5[0]);
          break;
 }
    }


  const struct test *VAR_15 = FUNC_3(VAR_10);

  if (VAR_15 == ((void*)0))
    {
      FUNC_17(VAR_5[0]);
    }

  if (VAR_7 + VAR_1 * 2 > VAR_2)
    {
      VAR_6 = VAR_7 + VAR_1 * 2;
    }


  char *VAR_16 = FUNC_5(VAR_6);
  char *VAR_17 = FUNC_5(VAR_6);

  FUNC_0(VAR_16 != ((void*)0) && VAR_17 != ((void*)0));

  VAR_16 = FUNC_10(VAR_16, VAR_11);
  VAR_17 = FUNC_10(VAR_17, VAR_12);


  FUNC_11(1539);

  for (int VAR_18 = 0; VAR_18 < VAR_6; VAR_18++)
    {
      VAR_16[VAR_18] = (char)FUNC_9() | 1;
      VAR_17[VAR_18] = VAR_16[VAR_18];
    }


  VAR_16[VAR_7] = 0;
  VAR_17[VAR_7] = 0;

  struct timespec VAR_19, VAR_20;
  int VAR_21 = FUNC_1(VAR_0, &VAR_19);
  FUNC_0(VAR_21 == 0);


  stub_t VAR_22 = VAR_15->stub;


  if (VAR_9 == 0)
    {
      for (int VAR_23 = 0; VAR_23 < VAR_8; VAR_23++)
 {
   (*VAR_22)(VAR_17, VAR_16, VAR_7);
 }
    }
  else
    {
      for (int VAR_24 = 0; VAR_24 < VAR_8; VAR_24++)
 {
   (*VAR_22)(VAR_17, VAR_16, VAR_7);
   FUNC_2(VAR_17);
 }
    }

  VAR_21 = FUNC_1(VAR_0, &VAR_20);
  FUNC_0(VAR_21 == 0);


  char *VAR_25 = FUNC_13(VAR_5[0], '/');

  if (VAR_25 == ((void*)0))
    {
      VAR_25 = VAR_5[0];
    }

  VAR_25 = FUNC_14(VAR_25, "try-");
  FUNC_0(VAR_25 != ((void*)0));

  double VAR_26 = (VAR_20.tv_sec - VAR_19.tv_sec) + (VAR_20.tv_nsec - VAR_19.tv_nsec) * 1e-9;

  double VAR_27 = 0.448730 * VAR_8 / 50000000;


  FUNC_8("%s:%s:%u:%u:%d:%d:%s:%.6f: took %.6f s for %u calls to %s of %u bytes.  ~%.3f MB/s corrected.\n",
         VAR_25 + 4, VAR_15->name,
  VAR_7, VAR_8, VAR_11, VAR_12, VAR_13,
  VAR_26,
         VAR_26, VAR_8, VAR_15->name, VAR_7,
         (double)VAR_8*VAR_7/(VAR_26 - VAR_27)/(1024*1024));

  return 0;
}
