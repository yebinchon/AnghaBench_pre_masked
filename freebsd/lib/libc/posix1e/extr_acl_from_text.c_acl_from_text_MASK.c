
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * acl_t ;




 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 void* VAR_2 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ) ;
 char* FUNC_12 (char**,char*) ;

acl_t
FUNC_13(const char *VAR_3)
{
 acl_t VAR_4;
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;


 VAR_5 = FUNC_9(VAR_3);
 if (VAR_5 == ((void*)0))
  return(((void*)0));

 VAR_4 = FUNC_6(3);
 if (VAR_4 == ((void*)0)) {
  FUNC_8(VAR_5);
  return(((void*)0));
 }


 VAR_7 = VAR_5;
 while ((VAR_6 = FUNC_12(&VAR_7, "\n"))) {

  VAR_9 = VAR_6;
  VAR_8 = FUNC_12(&VAR_9, "#");


  while ((VAR_10 = FUNC_12(&VAR_8, ","))) {


   if (FUNC_11(FUNC_10(VAR_10)) == 0)
    continue;

   if (FUNC_0(VAR_4) == VAR_0) {
    if (FUNC_4(VAR_10))
     FUNC_1(VAR_4, 129);
    else
     FUNC_1(VAR_4, 128);
   }

   switch (FUNC_0(VAR_4)) {
   case 129:
    VAR_11 = FUNC_2(VAR_4, VAR_10);
    break;

   case 128:
    VAR_11 = FUNC_3(VAR_4, VAR_10);
    break;

   default:
    VAR_11 = VAR_1;
    break;
   }

   if (VAR_11)
    goto error_label;
  }
 }
 FUNC_8(VAR_5);
 return(VAR_4);

error_label:
 FUNC_5(VAR_4);
 FUNC_8(VAR_5);
 return(((void*)0));
}
