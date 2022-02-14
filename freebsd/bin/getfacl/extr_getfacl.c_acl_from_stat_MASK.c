
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int * acl_t ;
typedef int acl_permset_t ;
typedef int acl_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static acl_t
FUNC_7(const struct stat *VAR_15)
{
 acl_t VAR_16;
 acl_entry_t VAR_17;
 acl_permset_t VAR_18;


 VAR_16 = FUNC_4(3);
 if (!VAR_16)
  return ((void*)0);


 if (FUNC_2(&VAR_16, &VAR_17) == -1)
  return ((void*)0);
 if (FUNC_6(VAR_17, VAR_4) == -1)
  return ((void*)0);

 if (FUNC_3(VAR_17, &VAR_18) == -1)
  return ((void*)0);
 if (FUNC_1(VAR_18) == -1)
  return ((void*)0);


 if (VAR_15->st_mode & VAR_8)
  if (FUNC_0(VAR_18, VAR_3) == -1)
   return ((void*)0);
 if (VAR_15->st_mode & VAR_11)
  if (FUNC_0(VAR_18, VAR_5) == -1)
   return ((void*)0);
 if (VAR_15->st_mode & VAR_14)
  if (FUNC_0(VAR_18, VAR_0) == -1)
   return ((void*)0);
 if (FUNC_5(VAR_17, VAR_18) == -1)
  return ((void*)0);


 if (FUNC_2(&VAR_16, &VAR_17) == -1)
  return ((void*)0);
 if (FUNC_6(VAR_17, VAR_1) == -1)
  return ((void*)0);

 if (FUNC_3(VAR_17, &VAR_18) == -1)
  return ((void*)0);
 if (FUNC_1(VAR_18) == -1)
  return ((void*)0);


 if (VAR_15->st_mode & VAR_6)
  if (FUNC_0(VAR_18, VAR_3) == -1)
   return ((void*)0);
 if (VAR_15->st_mode & VAR_9)
  if (FUNC_0(VAR_18, VAR_5) == -1)
   return ((void*)0);
 if (VAR_15->st_mode & VAR_12)
  if (FUNC_0(VAR_18, VAR_0) == -1)
   return ((void*)0);
 if (FUNC_5(VAR_17, VAR_18) == -1)
  return ((void*)0);


 if (FUNC_2(&VAR_16, &VAR_17) == -1)
  return ((void*)0);
 if (FUNC_6(VAR_17, VAR_2) == -1)
  return ((void*)0);

 if (FUNC_3(VAR_17, &VAR_18) == -1)
  return ((void*)0);
 if (FUNC_1(VAR_18) == -1)
  return ((void*)0);


 if (VAR_15->st_mode & VAR_7)
  if (FUNC_0(VAR_18, VAR_3) == -1)
   return ((void*)0);
 if (VAR_15->st_mode & VAR_10)
  if (FUNC_0(VAR_18, VAR_5) == -1)
   return ((void*)0);
 if (VAR_15->st_mode & VAR_13)
  if (FUNC_0(VAR_18, VAR_0) == -1)
   return ((void*)0);
 if (FUNC_5(VAR_17, VAR_18) == -1)
  return ((void*)0);

 return(VAR_16);
}
