
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usershell_test_data {int dummy; } ;
struct usershell {int * path; } ;
typedef enum test_methods { ____Placeholder_test_methods } test_methods ;


 int FUNC_0 (int ,struct usershell_test_data*,struct usershell_test_data*,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (int ,struct usershell_test_data*,struct usershell*) ;
 int FUNC_2 (int ,struct usershell_test_data*) ;
 int FUNC_3 (int ,struct usershell_test_data*,int ,int ) ;

 int FUNC_4 (int ,char const*,struct usershell_test_data*,int ) ;
 int FUNC_5 (int ,char const*,struct usershell_test_data*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct usershell*) ;
 int FUNC_8 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_9 () ;
 int FUNC_10 (char*,...) ;
 int VAR_7 ;
 int FUNC_11 () ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_12(const char *VAR_10, enum test_methods VAR_11)
{
 struct usershell_test_data VAR_12, VAR_13;
 struct usershell VAR_14;
 int VAR_15;

 VAR_15 = 0;

 FUNC_3(VAR_8, &VAR_12, VAR_3, VAR_6);
 FUNC_3(VAR_8, &VAR_13, VAR_3, VAR_6);

 FUNC_11();
 while ((VAR_14.path = FUNC_9()) != ((void*)0)) {
  FUNC_10("usershell found:\n");
  FUNC_7(&VAR_14);
  FUNC_1(VAR_8, &VAR_12, &VAR_14);
 }
 FUNC_8();

 if (VAR_10 != ((void*)0)) {
  if (FUNC_6(VAR_10, VAR_2 | VAR_1) != 0) {
   if (VAR_5 == VAR_0)
    VAR_11 = 129;
   else {
    FUNC_10("can't access the snapshot file %s\n",
        VAR_10);

    VAR_15 = -1;
    goto fin;
   }
  } else {
   VAR_15 = FUNC_4(VAR_8, VAR_10,
    &VAR_13, VAR_9);
   if (VAR_15 != 0) {
    FUNC_10("error reading snapshot file\n");
    goto fin;
   }
  }
 }

 switch (VAR_11) {
 case 128:
  VAR_15 = FUNC_0(VAR_8, &VAR_12, &VAR_13,
   VAR_4, ((void*)0));
  break;
 case 129:
  if (VAR_10 != ((void*)0)) {
   VAR_15 = FUNC_5(VAR_8, VAR_10,
       &VAR_12, VAR_7);
  }
  break;
 default:
  VAR_15 = 0;
  break;
 }

fin:
 FUNC_2(VAR_8, &VAR_13);
 FUNC_2(VAR_8, &VAR_12);

 return (VAR_15);
}
