
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_map {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cpu_map* FUNC_0 () ;
 struct cpu_map* FUNC_1 () ;
 struct cpu_map* FUNC_2 (int,int*) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (char const) ;
 int* FUNC_5 (int*,int) ;
 unsigned long FUNC_6 (char const*,char**,int ) ;

struct cpu_map *FUNC_7(const char *VAR_2)
{
 struct cpu_map *VAR_3 = ((void*)0);
 unsigned long VAR_4, VAR_5 = 0;
 char *VAR_6 = ((void*)0);
 int VAR_7, VAR_8 = 0;
 int *VAR_9 = ((void*)0), *VAR_10;
 int VAR_11 = 0;

 if (!VAR_2)
  return FUNC_1();

 if (!FUNC_4(*VAR_2))
  goto out;

 while (FUNC_4(*VAR_2)) {
  VAR_6 = ((void*)0);
  VAR_4 = FUNC_6(VAR_2, &VAR_6, 0);
  if (VAR_4 >= VAR_0
      || (*VAR_6 != '\0' && *VAR_6 != ',' && *VAR_6 != '-'))
   goto invalid;

  if (*VAR_6 == '-') {
   VAR_2 = ++VAR_6;
   VAR_6 = ((void*)0);
   VAR_5 = FUNC_6(VAR_2, &VAR_6, 0);

   if (VAR_5 >= VAR_0 || (*VAR_6 != '\0' && *VAR_6 != ','))
    goto invalid;

   if (VAR_5 < VAR_4)
    goto invalid;
  } else {
   VAR_5 = VAR_4;
  }

  for (; VAR_4 <= VAR_5; VAR_4++) {

   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    if (VAR_9[VAR_7] == (int)VAR_4)
     goto invalid;

   if (VAR_8 == VAR_11) {
    VAR_11 += VAR_1;
    VAR_10 = FUNC_5(VAR_9, VAR_11 * sizeof(int));
    if (VAR_10 == ((void*)0))
     goto invalid;
    VAR_9 = VAR_10;
   }
   VAR_9[VAR_8++] = (int)VAR_4;
  }
  if (*VAR_6)
   ++VAR_6;

  VAR_2 = VAR_6;
 }

 if (VAR_8 > 0)
  VAR_3 = FUNC_2(VAR_8, VAR_9);
 else
  VAR_3 = FUNC_0();
invalid:
 FUNC_3(VAR_9);
out:
 return VAR_3;
}
