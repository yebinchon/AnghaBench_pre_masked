
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct units {unsigned int mult; int * name; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 size_t FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,int *,size_t) ;
 int FUNC_5 (char const*,char**,int ) ;
 int FUNC_6 (int,int,unsigned int) ;
 int FUNC_7 (int,int,unsigned int) ;
 int FUNC_8 (int,int,unsigned int) ;

__attribute__((used)) static int
FUNC_9 (const char *VAR_0, const struct units *VAR_1,
   const char *VAR_2,
   int (*VAR_3)(int VAR_4, int VAR_5, unsigned VAR_6),
   int VAR_7,
   int VAR_8)
{
    const char *VAR_9;
    int VAR_10 = VAR_7;
    unsigned VAR_11 = 1;

    if (VAR_2 != ((void*)0)) {
 const struct units *VAR_12;

 for (VAR_12 = VAR_1; VAR_12->name; ++VAR_12) {
     if (FUNC_1 (VAR_12->name, VAR_2) == 0) {
  VAR_11 = VAR_12->mult;
  break;
     }
 }
 if (VAR_12->name == ((void*)0))
     return -1;
    }

    VAR_9 = VAR_0;
    while (*VAR_9) {
 int VAR_13;
 char *VAR_14;
 const struct units *VAR_15, *VAR_16;
 size_t VAR_17;
 unsigned VAR_18;
 int VAR_19 = 0;

 while(FUNC_0((unsigned char)*VAR_9) || *VAR_9 == ',')
     ++VAR_9;

 VAR_13 = FUNC_5(VAR_9, &VAR_14, 0);
 if (VAR_9 == VAR_14) {
     VAR_13 = 0;
     if(!VAR_8)
  return -1;
     VAR_19 = 1;
 }
 VAR_9 = VAR_14;
 while (FUNC_0((unsigned char)*VAR_9))
     ++VAR_9;
 if (*VAR_9 == '\0') {
     VAR_10 = (*VAR_3)(VAR_10, VAR_13, VAR_11);
     if (VAR_10 < 0)
  return VAR_10;
     break;
 } else if (*VAR_9 == '+') {
     ++VAR_9;
     VAR_13 = 1;
 } else if (*VAR_9 == '-') {
     ++VAR_9;
     VAR_13 = -1;
 }
 if (VAR_19 && VAR_13 == 0)
     VAR_13 = 1;
 VAR_17 = FUNC_2 (VAR_9, ", \t");
 VAR_18 = 0;
 VAR_16 = ((void*)0);
 if (VAR_17 > 1 && VAR_9[VAR_17 - 1] == 's')
     --VAR_17;
 for (VAR_15 = VAR_1; VAR_15->name; ++VAR_15) {
     if (FUNC_4 (VAR_9, VAR_15->name, VAR_17) == 0) {
  if (VAR_17 == FUNC_3 (VAR_15->name)) {
      VAR_9 += VAR_17;
      VAR_10 = (*VAR_3)(VAR_10, VAR_13, VAR_15->mult);
      if (VAR_10 < 0)
   return VAR_10;
      break;
  } else {
      ++VAR_18;
      VAR_16 = VAR_15;
  }
     }
 }
 if (VAR_15->name == ((void*)0)) {
     if (VAR_18 == 1) {
  VAR_9 += VAR_17;
  VAR_10 = (*VAR_3)(VAR_10, VAR_13, VAR_16->mult);
  if (VAR_10 < 0)
      return VAR_10;
     } else {
  return -1;
     }
 }
 if (*VAR_9 == 's')
     ++VAR_9;
    }
    return VAR_10;
}
