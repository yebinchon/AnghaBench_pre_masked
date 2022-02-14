
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hostent_test_data {int dummy; } ;
typedef TYPE_1__* res_state ;
typedef enum test_methods { ____Placeholder_test_methods } test_methods ;
struct TYPE_4__ {int options; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct hostent_test_data*,int ,void*) ;
 int FUNC_3 (int ,struct hostent_test_data*,struct hostent_test_data*,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_4 (int ,struct hostent_test_data*) ;
 int FUNC_5 (int ,struct hostent_test_data*,int ,int ) ;




 int FUNC_6 (int ,char const*,struct hostent_test_data*,int ) ;
 int FUNC_7 (int ,char const*,struct hostent_test_data*,int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_8 () ;
 scalar_t__ FUNC_9 (char const*,int) ;
 int FUNC_10 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_15 ;
 char* FUNC_14 (char const*) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_15(const char *VAR_17, const char *VAR_18, int VAR_19,
    enum test_methods VAR_20, bool VAR_21)
{
 char *VAR_22;
 struct hostent_test_data VAR_23, VAR_24, VAR_25;
 res_state VAR_26;
 int VAR_27 = -2;

 if (VAR_18 == ((void*)0))
  VAR_22 = ((void*)0);
 else {
  VAR_22 = FUNC_14(VAR_18);
  FUNC_0(VAR_22 != ((void*)0));
 }
 VAR_18 = VAR_22;

 switch (VAR_19) {
 case 135:
  FUNC_1("inet");
  FUNC_0(!VAR_21);
  break;
 case 134:
  FUNC_1("inet6");
  break;
 default:
  FUNC_10("unhandled address family: %d", VAR_19);
  break;
 }

 if (!VAR_16) {
  VAR_26 = FUNC_8();
  if (VAR_26 == ((void*)0) || ((VAR_26->options & VAR_1) == 0 &&
      FUNC_13(VAR_26) == -1)) {
   FUNC_12("error: can't init res_state\n");
   VAR_27 = -1;
   goto fin2;
  }

  if (VAR_21)
   VAR_26->options |= VAR_2;
  else
   VAR_26->options &= ~VAR_2;
 }

 FUNC_5(VAR_9, &VAR_23, VAR_5, VAR_8);
 FUNC_5(VAR_9, &VAR_24, VAR_5, VAR_8);
 FUNC_5(VAR_9, &VAR_25, VAR_5, VAR_8);

 if (FUNC_9(VAR_17, VAR_3) != 0) {
  FUNC_12("can't access the hostlist file %s\n", VAR_17);
  VAR_27 = -1;
  goto fin;
 }





 VAR_27 = FUNC_6(VAR_9, VAR_17, &VAR_23,
  VAR_10);
 if (VAR_27 != 0) {
  FUNC_12("failed to read the host list file: %s\n",
      VAR_17);
  goto fin;
 }

 if (VAR_18 != ((void*)0)) {
  if (FUNC_9(VAR_18, VAR_4 | VAR_3) != 0) {
   if (VAR_7 == VAR_0) {
    if (VAR_20 != 131)
     VAR_20 = 132;
    else
     VAR_20 = 133;
   } else {
    FUNC_12("can't access the snapshot file %s\n",
        VAR_18);
    VAR_27 = -1;
    goto fin;
   }
  } else {
   VAR_27 = FUNC_6(VAR_9, VAR_18,
    &VAR_25, VAR_11);
   if (VAR_27 != 0) {
    FUNC_12("error reading snapshot file\n");
    goto fin;
   }
  }
 }

 switch (VAR_20) {
 case 129:
  if (VAR_18 != ((void*)0))
   VAR_27 = FUNC_3(VAR_9, &VAR_23, &VAR_25,
       VAR_6, ((void*)0));
  break;
 case 131:
  VAR_27 = FUNC_2(VAR_9, &VAR_23,
   VAR_13, (void *)&VAR_24);
  if (VAR_27 != 0)
   goto fin;

  if (VAR_18 != ((void*)0))
   VAR_27 = FUNC_3(VAR_9, &VAR_24, &VAR_25,
       VAR_6, ((void*)0));
  break;
 case 128:
  VAR_27 = FUNC_2(VAR_9, &VAR_23,
   VAR_12, ((void*)0));
  break;
 case 130:
  VAR_27 = FUNC_2(VAR_9, &VAR_23,
   VAR_14, ((void*)0));
  break;
 case 132:
  if (VAR_18 != ((void*)0)) {
   VAR_27 = FUNC_7(VAR_9, VAR_18,
       &VAR_23, VAR_15);
  }
  break;
 case 133:
  if (VAR_18 != ((void*)0)) {
   VAR_27 = FUNC_2(VAR_9, &VAR_23,
       VAR_13, (void *)&VAR_24);
   if (VAR_27 != 0)
    goto fin;
   VAR_27 = FUNC_7(VAR_9, VAR_18,
       &VAR_24, VAR_15);
  }
  break;
 default:
  VAR_27 = 0;
  break;
 }

fin:
 FUNC_4(VAR_9, &VAR_25);
 FUNC_4(VAR_9, &VAR_24);
 FUNC_4(VAR_9, &VAR_23);

fin2:
 FUNC_11(VAR_22);

 return (VAR_27);
}
