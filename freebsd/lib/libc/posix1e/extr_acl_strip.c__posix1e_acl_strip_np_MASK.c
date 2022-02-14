
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_tag_t ;
typedef int * acl_t ;
typedef int acl_entry_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int **,int *) ;
 int * FUNC_5 (int * const) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int *) ;
 int FUNC_8 (int ,int*) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static acl_t
FUNC_11(const acl_t VAR_5, int VAR_6)
{
 acl_t VAR_7, VAR_8;
 acl_entry_t VAR_9, VAR_10;
 acl_tag_t VAR_11;
 int VAR_12, VAR_13;

 FUNC_10(FUNC_0(VAR_5) == VAR_0);

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 FUNC_10(FUNC_0(VAR_8) == VAR_0);

 VAR_13 = 0;
 VAR_7 = FUNC_9(VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_6(VAR_8);
  return (((void*)0));
 }
 VAR_11 = VAR_4;


 VAR_12 = VAR_1;
 while (FUNC_7(VAR_8, VAR_12, &VAR_9) == 1) {
  VAR_12 = VAR_3;

  FUNC_10(FUNC_1(VAR_9) == VAR_0);

  if (FUNC_8(VAR_9, &VAR_11) == -1)
   goto fail;

  switch(VAR_11) {
  case 128:
  case 131:
  case 129:
   if (FUNC_4(&VAR_7, &VAR_10) == -1)
    goto fail;
   if (FUNC_3(VAR_10, VAR_9) == -1)
    goto fail;
   FUNC_10(FUNC_1(VAR_10) == VAR_0);
   break;
  case 130:
   VAR_13 = 1;
   break;
  default:
   break;
  }
 }

 FUNC_10(FUNC_0(VAR_7) == VAR_0);

 if (VAR_13 && VAR_6) {
  if (FUNC_2(&VAR_7) == -1)
   goto fail;
 }

 return (VAR_7);

fail:
 FUNC_6(VAR_7);
 FUNC_6(VAR_8);

 return (((void*)0));
}
