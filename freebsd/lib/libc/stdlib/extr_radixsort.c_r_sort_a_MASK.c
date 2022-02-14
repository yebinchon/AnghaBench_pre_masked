
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef size_t u_char ;
typedef size_t const* stack ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t const**) ;
 int FUNC_1 (size_t const**,int,int) ;
 int FUNC_2 (size_t const**,int,int) ;
 int FUNC_3 (size_t const**,int,int,size_t const*,int) ;
 int FUNC_4 (size_t const*,size_t const*,size_t const*) ;

__attribute__((used)) static void
FUNC_5(const u_char **VAR_2, int VAR_3, int VAR_4, const u_char *VAR_5, u_int VAR_6)
{
 static int VAR_7[256], VAR_8, VAR_9;
 int VAR_10;
 const u_char **VAR_11, *VAR_12;
 stack VAR_13[VAR_0], *VAR_14, *VAR_15, *VAR_16, VAR_17;
 int *VAR_18, VAR_19;
 const u_char **VAR_20, *VAR_21, **VAR_22, **VAR_23[256];


 VAR_14 = VAR_13;
 FUNC_2(VAR_2, VAR_3, VAR_4);
 while (!FUNC_0(VAR_13)) {
  FUNC_1(VAR_2, VAR_3, VAR_4);
  if (VAR_3 < VAR_1) {
   FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
   continue;
  }
  VAR_20 = VAR_2 + VAR_3;


  if (VAR_8 == 0) {
   VAR_9 = 255;
   for (VAR_11 = VAR_2; VAR_11 < VAR_20;) {
    VAR_10 = VAR_5[(*VAR_11++)[VAR_4]];
    if (++VAR_7[VAR_10] == 1 && VAR_10 != VAR_6) {
     if (VAR_10 < VAR_9)
      VAR_9 = VAR_10;
     VAR_8++;
    }
   }
   if (VAR_14 + VAR_8 > VAR_13 + VAR_0) {
    FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    continue;
   }
  }






  if (VAR_8 == 1 && VAR_7[VAR_9] == VAR_3) {
   FUNC_2(VAR_2, VAR_3, VAR_4+1);
   VAR_8 = VAR_7[VAR_9] = 0;
   continue;
  }
  VAR_15 = VAR_16 = VAR_14;
  VAR_19 = 2;
  if (VAR_6 == 0)
   VAR_23[0] = VAR_11 = VAR_2 + VAR_7[0];
  else {
   VAR_11 = VAR_2;
   VAR_23[255] = VAR_20;
  }
  for (VAR_18 = VAR_7 + VAR_9; VAR_8 > 0; VAR_18++) {
   while (*VAR_18 == 0)
    VAR_18++;
   if (*VAR_18 > 1) {
    if (*VAR_18 > VAR_19) {
     VAR_19 = *VAR_18;
     VAR_16 = VAR_14;
    }
    FUNC_2(VAR_11, *VAR_18, VAR_4+1);
   }
   VAR_23[VAR_18-VAR_7] = VAR_11 += *VAR_18;
   VAR_8--;
  }
  FUNC_4(*VAR_15, *VAR_16, VAR_17);
  for (VAR_22 = VAR_2; VAR_22 < VAR_20; *VAR_22 = VAR_12, VAR_22 += VAR_7[VAR_10], VAR_7[VAR_10] = 0)
   for (VAR_12 = *VAR_22; VAR_22 < (VAR_11 = --VAR_23[VAR_10 = VAR_5[VAR_12[VAR_4]]]);)
    FUNC_4(*VAR_11, VAR_12, VAR_21);
 }
}
