
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int **) ;
 int ** FUNC_4 (int) ;
 int * FUNC_5 (int const* const) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (char const*,int ,int ,int ,size_t) ;

nvpair_t *
FUNC_12(const char *VAR_4, const nvlist_t * const *VAR_5,
    size_t VAR_6)
{
 unsigned int VAR_7;
 nvlist_t **VAR_8;
 nvpair_t *VAR_9;
 int VAR_10;

 VAR_8 = ((void*)0);

 if (VAR_5 == ((void*)0) || VAR_6 == 0) {
  FUNC_2(VAR_0);
  return (((void*)0));
 }

 VAR_8 = FUNC_4(sizeof(VAR_5[0]) * VAR_6);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (VAR_5[VAR_7] == ((void*)0)) {
   FUNC_2(VAR_0);
   goto fail;
  }

  VAR_8[VAR_7] = FUNC_5(VAR_5[VAR_7]);
  if (VAR_8[VAR_7] == ((void*)0))
   goto fail;

  if (VAR_7 > 0) {
   nvpair_t *VAR_11;

   VAR_11 = FUNC_11(" ", VAR_2,
       (uint64_t)(uintptr_t)VAR_8[VAR_7], 0, 0);
   if (VAR_11 == ((void*)0)) {
    FUNC_1();
    FUNC_6(VAR_8[VAR_7]);
    FUNC_0();
    goto fail;
   }
   FUNC_8(VAR_8[VAR_7 - 1], VAR_11);
  }
 }
 VAR_10 = FUNC_7(VAR_8[VAR_6 - 1]) | VAR_1;
 FUNC_9(VAR_8[VAR_6 - 1], VAR_10);

 VAR_9 = FUNC_11(VAR_4, VAR_3,
     (uint64_t)(uintptr_t)VAR_8, 0, VAR_6);
 if (VAR_9 == ((void*)0))
  goto fail;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_10(VAR_8[VAR_7], VAR_9);

 return (VAR_9);

fail:
 FUNC_1();
 for (; VAR_7 > 0; VAR_7--)
  FUNC_6(VAR_8[VAR_7 - 1]);
 FUNC_3(VAR_8);
 FUNC_0();

 return (((void*)0));
}
