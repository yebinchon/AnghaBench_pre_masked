
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 scalar_t__ FUNC_2 (int,char**) ;
 scalar_t__ FUNC_3 (int,char const*) ;
 int FUNC_4 (char**) ;
 scalar_t__ FUNC_5 (char*,char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_5,
          int *VAR_6, int *VAR_7, int VAR_8)
{
 unsigned long long VAR_9;
 unsigned long long VAR_10;
 char *VAR_11;
 int VAR_12;

 VAR_9 = VAR_3;
 VAR_10 = VAR_4;

 if (FUNC_3(VAR_0, "field") < 0)
  return;
 if (FUNC_3(VAR_2, ":") < 0)
  return;


 if (FUNC_2(VAR_0, &VAR_11) < 0)
  goto fail;
 FUNC_1(VAR_11);




 if (VAR_8) {
  if (FUNC_3(VAR_0, VAR_5) < 0)
   return;
 } else {
  if (FUNC_2(VAR_0, &VAR_11) < 0)
   goto fail;
  if (FUNC_5(VAR_11, VAR_5) != 0)
   goto discard;
  FUNC_1(VAR_11);
 }

 if (FUNC_3(VAR_2, ";") < 0)
  return;
 if (FUNC_3(VAR_0, "offset") < 0)
  return;
 if (FUNC_3(VAR_2, ":") < 0)
  return;
 if (FUNC_2(VAR_0, &VAR_11) < 0)
  goto fail;
 *VAR_6 = FUNC_0(VAR_11);
 FUNC_1(VAR_11);
 if (FUNC_3(VAR_2, ";") < 0)
  return;
 if (FUNC_3(VAR_0, "size") < 0)
  return;
 if (FUNC_3(VAR_2, ":") < 0)
  return;
 if (FUNC_2(VAR_0, &VAR_11) < 0)
  goto fail;
 *VAR_7 = FUNC_0(VAR_11);
 FUNC_1(VAR_11);
 if (FUNC_3(VAR_2, ";") < 0)
  return;
 VAR_12 = FUNC_4(&VAR_11);
 if (VAR_12 != VAR_1) {

  if (VAR_12 != VAR_0)
   goto fail;

  if (FUNC_5(VAR_11, "signed") != 0)
   goto fail;

  FUNC_1(VAR_11);

  if (FUNC_3(VAR_2, ":") < 0)
   return;

  if (FUNC_2(VAR_0, &VAR_11))
   goto fail;

  FUNC_1(VAR_11);
  if (FUNC_3(VAR_2, ";") < 0)
   return;

  if (FUNC_2(VAR_1, &VAR_11))
   goto fail;
 }
 fail:
 FUNC_1(VAR_11);
 return;

 discard:
 VAR_3 = VAR_9;
 VAR_4 = VAR_10;
 *VAR_6 = 0;
 *VAR_7 = 0;
 FUNC_1(VAR_11);
}
