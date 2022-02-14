
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef size_t u_char ;
typedef int stack ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (size_t const**,int,int) ;
 int FUNC_2 (size_t const**,int,int) ;
 int FUNC_3 (size_t const**,int,int,size_t const*,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(const u_char **VAR_2, const u_char **VAR_3, int VAR_4, int VAR_5, const u_char *VAR_6,
    u_int VAR_7)
{
 static int VAR_8[256], VAR_9, VAR_10;
 int VAR_11;
 const u_char **VAR_12, **VAR_13;
 stack VAR_14[512], *VAR_15, *VAR_16, *VAR_17, VAR_18;
 const u_char **VAR_19[256];
 int *VAR_20, VAR_21;

 VAR_15 = VAR_14;
 FUNC_2(VAR_2, VAR_4, VAR_5);
 while (!FUNC_0(VAR_14)) {
  FUNC_1(VAR_2, VAR_4, VAR_5);
  if (VAR_4 < VAR_1) {
   FUNC_3(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
   continue;
  }

  if (VAR_9 == 0) {
   VAR_10 = 255;
   for (VAR_12 = VAR_2 + VAR_4; --VAR_12 >= VAR_2;) {
    VAR_11 = VAR_6[(*VAR_12)[VAR_5]];
    if (++VAR_8[VAR_11] == 1 && VAR_11 != VAR_7) {
     if (VAR_11 < VAR_10)
      VAR_10 = VAR_11;
     VAR_9++;
    }
   }
   if (VAR_15 + VAR_9 > VAR_14 + VAR_0) {
    FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    continue;
   }
  }

  VAR_16 = VAR_17 = VAR_15;
  VAR_21 = 2;
  if (VAR_7 == 0) {
   VAR_19[0] = VAR_12 = VAR_2 + VAR_8[0];
   VAR_8[0] = 0;
  } else {
   VAR_12 = VAR_2;
   VAR_19[255] = VAR_2 + VAR_4;
   VAR_8[255] = 0;
  }
  for (VAR_20 = VAR_8 + VAR_10; VAR_9 > 0; VAR_20++) {
   while (*VAR_20 == 0)
    VAR_20++;
   if ((VAR_11 = *VAR_20) > 1) {
    if (VAR_11 > VAR_21) {
     VAR_21 = VAR_11;
     VAR_17 = VAR_15;
    }
    FUNC_2(VAR_12, VAR_11, VAR_5+1);
   }
   VAR_19[VAR_20-VAR_8] = VAR_12 += VAR_11;
   *VAR_20 = 0;
   VAR_9--;
  }
  FUNC_4(*VAR_16, *VAR_17, VAR_18);

  for (VAR_12 = VAR_3 + VAR_4, VAR_13 = VAR_2+VAR_4; VAR_12 > VAR_3;)
   *--VAR_12 = *--VAR_13;
  for (VAR_12 = VAR_3+VAR_4; --VAR_12 >= VAR_3;)
   *--VAR_19[VAR_6[(*VAR_12)[VAR_5]]] = *VAR_12;
 }
}
