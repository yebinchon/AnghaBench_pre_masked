
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 char const* VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int * FUNC_0 (int *,char const*,int *) ;
 int * FUNC_1 (int const*,char const*) ;
 int FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (int const*,int *) ;
 int FUNC_4 (int const*,int *) ;

__attribute__((used)) static int
FUNC_5(const nvlist_t *VAR_3, nvlist_t *VAR_4,
    const char *VAR_5, const char *VAR_6)
{
 const nvlist_t *VAR_7, *VAR_8, *VAR_9;
 nvlist_t *VAR_10, *VAR_11, *VAR_12;
 int VAR_13;

 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);
 VAR_12 = ((void*)0);

 VAR_7 = FUNC_1(VAR_3, VAR_5);
 VAR_8 = FUNC_1(VAR_7, VAR_2);
 VAR_9 = FUNC_1(VAR_7, VAR_0);

 VAR_10 = FUNC_0(VAR_4, VAR_6, ((void*)0));
 if (VAR_10 == ((void*)0)) {
  VAR_13 = VAR_1;
  goto out;
 }

 VAR_11 = FUNC_0(VAR_10, VAR_2, ((void*)0));
 if (VAR_11 == ((void*)0)) {
  VAR_13 = VAR_1;
  goto out;
 }

 VAR_12 = FUNC_0(VAR_10, VAR_0,
     ((void*)0));
 if (VAR_12 == ((void*)0)) {
  VAR_13 = VAR_1;
  goto out;
 }

 VAR_13 = FUNC_3(VAR_8, VAR_11);
 if (VAR_13 != 0)
  goto out;

 VAR_13 = FUNC_3(VAR_9, VAR_12);
 if (VAR_13 != 0)
  goto out;

 VAR_13 = FUNC_4(VAR_8, VAR_11);
 if (VAR_13 != 0)
  goto out;

 VAR_13 = FUNC_4(VAR_9, VAR_12);
 if (VAR_13 != 0)
  goto out;

out:

 FUNC_2(VAR_10, VAR_2, VAR_11);
 FUNC_2(VAR_10, VAR_0, VAR_12);
 FUNC_2(VAR_4, VAR_6, VAR_10);

 return (VAR_13);
}
