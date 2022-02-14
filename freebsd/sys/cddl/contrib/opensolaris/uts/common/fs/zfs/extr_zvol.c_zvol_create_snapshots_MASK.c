
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,char*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,int,char*,char const*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(objset_t *VAR_8, const char *VAR_9)
{
 uint64_t VAR_10, VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = VAR_11 = 0;
 VAR_12 = FUNC_6(VAR_6, VAR_5);






 for (;;) {
  VAR_14 = FUNC_9(VAR_12, VAR_6, "%s@", VAR_9);
  if (VAR_14 >= VAR_6) {
   FUNC_2(VAR_8, VAR_4);
   VAR_13 = VAR_2;
   break;
  }

  FUNC_4(FUNC_1(VAR_8), VAR_4);
  VAR_13 = FUNC_3(VAR_8, VAR_6 - VAR_14,
      VAR_12 + VAR_14, &VAR_11, &VAR_10, ((void*)0));
  FUNC_5(FUNC_1(VAR_8), VAR_4);
  if (VAR_13 != 0) {
   if (VAR_13 == VAR_3)
    VAR_13 = 0;
   break;
  }

  VAR_13 = FUNC_10(VAR_12);
  if (VAR_13 != 0 && VAR_13 != VAR_1) {
   FUNC_8("ZFS WARNING: Unable to create ZVOL %s (error=%d).\n",
       VAR_12, VAR_13);
   break;
  }
 }

 FUNC_7(VAR_12, VAR_6);
 return (VAR_13);
}
