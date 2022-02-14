
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char const**,int*) ;
 int FUNC_3 (unsigned char const**,int *) ;

__attribute__((used)) static int
FUNC_4(const unsigned char *VAR_5, const char *VAR_6, int VAR_7,
     int *VAR_8, void *VAR_9)
{
 const unsigned char *VAR_10, *VAR_11;
 int VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = VAR_5;
 FUNC_2(&VAR_10, &VAR_12);
 FUNC_2(&VAR_10, &VAR_12);

 VAR_11 = VAR_10;
 FUNC_2(&VAR_10, &VAR_13);
 FUNC_2(&VAR_10, &VAR_14);
 while (VAR_13 && VAR_14) {
  int VAR_15, VAR_16, VAR_17;
  const char *VAR_18;

  FUNC_2(&VAR_10, &VAR_15);
  VAR_18 = (const char*) VAR_10;
  VAR_10 += FUNC_1(VAR_15, 4);
  FUNC_2(&VAR_10, &VAR_16);

  if (!FUNC_0(VAR_6, VAR_18, VAR_15) && VAR_7 == VAR_16) {
   FUNC_2(&VAR_10, &VAR_17);
   if (VAR_8)
    *VAR_8 = VAR_17;
   if (VAR_7 == VAR_3) {
    FUNC_3(&VAR_10, (uint64_t *) VAR_9);
    return (0);
   } else if (VAR_7 == VAR_2) {
    int VAR_19;
    FUNC_2(&VAR_10, &VAR_19);
    (*(const char**) VAR_9) = (const char*) VAR_10;
    return (0);
   } else if (VAR_7 == VAR_0
       || VAR_7 == VAR_1) {
    (*(const unsigned char**) VAR_9) =
      (const unsigned char*) VAR_10;
    return (0);
   } else {
    return (VAR_4);
   }
  } else {



   VAR_10 = VAR_11 + VAR_13;
  }

  VAR_11 = VAR_10;
  FUNC_2(&VAR_10, &VAR_13);
  FUNC_2(&VAR_10, &VAR_14);
 }

 return (VAR_4);
}
