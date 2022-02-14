
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int mountb ;
typedef int mounta ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,char*,int,int *,int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(const void *VAR_5, const void *VAR_6)
{
 zfs_handle_t *const *VAR_7 = VAR_5;
 zfs_handle_t *VAR_8 = *VAR_7;
 zfs_handle_t *const *VAR_9 = VAR_6;
 zfs_handle_t *VAR_10 = *VAR_9;
 char VAR_11[VAR_1];
 char VAR_12[VAR_1];
 const char *VAR_13 = VAR_11;
 const char *VAR_14 = VAR_12;
 boolean_t VAR_15, VAR_16;
 uint64_t VAR_17, VAR_18;

 VAR_17 = FUNC_5(VAR_8, VAR_3);
 VAR_18 = FUNC_5(VAR_10, VAR_3);
 if (VAR_17 && !VAR_18)
  return (1);
 if (!VAR_17 && VAR_18)
  return (-1);
 VAR_15 = (FUNC_3(VAR_8) == VAR_4);
 if (VAR_15)
  FUNC_1(FUNC_4(VAR_8, VAR_2, VAR_11,
      sizeof (VAR_11), ((void*)0), ((void*)0), 0, VAR_0) == 0);
 VAR_16 = (FUNC_3(VAR_10) == VAR_4);
 if (VAR_16)
  FUNC_1(FUNC_4(VAR_10, VAR_2, VAR_12,
      sizeof (VAR_12), ((void*)0), ((void*)0), 0, VAR_0) == 0);

 if (VAR_15 && VAR_16) {
  while (*VAR_13 != '\0' && (*VAR_13 == *VAR_14)) {
   VAR_13++;
   VAR_14++;
  }
  if (*VAR_13 == *VAR_14)
   return (0);
  if (*VAR_13 == '\0')
   return (-1);
  if (*VAR_14 == '\0')
   return (1);
  if (*VAR_13 == '/')
   return (-1);
  if (*VAR_14 == '/')
   return (1);
  return (*VAR_13 < *VAR_14 ? -1 : *VAR_13 > *VAR_14);
 }

 if (VAR_15)
  return (-1);
 if (VAR_16)
  return (1);





 return (FUNC_0(FUNC_2(VAR_8), FUNC_2(VAR_10)));
}
