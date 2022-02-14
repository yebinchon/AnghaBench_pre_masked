
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char const* VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,int) ;
 size_t FUNC_3 (int,char*,size_t) ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,char const*) ;
 size_t FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;

int
FUNC_12(const char *VAR_10,
  int *VAR_11,
  char **VAR_12,
  const char *VAR_13,
  int VAR_14,
  int VAR_15,
  const char **VAR_16)
{
 int VAR_17, VAR_18, VAR_19, VAR_20;
 char *VAR_21, *VAR_22;
 const char *VAR_23;
 char VAR_24[VAR_4];
 struct stat VAR_25;
 size_t VAR_26, VAR_27;


 if (FUNC_8(VAR_10, "C") == 0 || FUNC_8(VAR_10, "POSIX") == 0 ||
     FUNC_11(VAR_10, "C.", 2) == 0) {
  *VAR_11 = 0;
  return (VAR_5);
 }




 if (*VAR_12 != ((void*)0) && FUNC_8(VAR_10, *VAR_12) == 0) {
  *VAR_11 = 1;
  return (VAR_5);
 }




 VAR_26 = FUNC_10(VAR_10) + 1;




 FUNC_9(VAR_24, VAR_8);
 FUNC_7(VAR_24, "/");
 FUNC_7(VAR_24, VAR_10);
 FUNC_7(VAR_24, "/");
 FUNC_7(VAR_24, VAR_13);
 if ((VAR_18 = FUNC_2(VAR_24, VAR_3 | VAR_2)) < 0)
  return (VAR_6);
 if (FUNC_1(VAR_18, &VAR_25) != 0)
  goto bad_locale;
 if (VAR_25.st_size <= 0) {
  VAR_9 = VAR_0;
  goto bad_locale;
 }
 VAR_27 = VAR_26 + VAR_25.st_size;
 if ((VAR_21 = FUNC_5(VAR_27)) == ((void*)0)) {
  VAR_9 = VAR_1;
  goto bad_locale;
 }
 (void)FUNC_9(VAR_21, VAR_10);
 VAR_22 = VAR_21 + VAR_26;
 VAR_23 = VAR_22 + VAR_25.st_size;
 if (FUNC_3(VAR_18, VAR_22, (size_t) VAR_25.st_size) != VAR_25.st_size)
  goto bad_lbuf;



 if (VAR_23[-1] != '\n') {
  VAR_9 = VAR_0;
  goto bad_lbuf;
 }
 VAR_20 = FUNC_6(VAR_22, VAR_23);
 if (VAR_20 >= VAR_14)
  VAR_20 = VAR_14;
 else if (VAR_20 >= VAR_15)
  VAR_20 = VAR_15;
 else {
  VAR_9 = VAR_0;
  goto bad_lbuf;
 }
 (void)FUNC_0(VAR_18);



 if (*VAR_12 != ((void*)0))
  FUNC_4(*VAR_12);
 *VAR_12 = VAR_21;
 for (VAR_22 = *VAR_12, VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
  VAR_16[VAR_19] = (VAR_22 += FUNC_10(VAR_22) + 1);
 for (VAR_19 = VAR_20; VAR_19 < VAR_14; VAR_19++)
  VAR_16[VAR_19] = ((void*)0);
 *VAR_11 = 1;

 return (VAR_7);

bad_lbuf:
 VAR_17 = VAR_9;
 FUNC_4(VAR_21);
 VAR_9 = VAR_17;
bad_locale:
 VAR_17 = VAR_9;
 (void)FUNC_0(VAR_18);
 VAR_9 = VAR_17;

 return (VAR_6);
}
