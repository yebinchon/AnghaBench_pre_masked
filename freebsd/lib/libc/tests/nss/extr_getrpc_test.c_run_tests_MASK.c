
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcent_test_data {int dummy; } ;
typedef enum test_methods { ____Placeholder_test_methods } test_methods ;


 int FUNC_0 (int ,struct rpcent_test_data*,int ,void*) ;
 int FUNC_1 (int ,struct rpcent_test_data*,struct rpcent_test_data*,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int FUNC_2 (int ,struct rpcent_test_data*) ;
 int FUNC_3 (int ,struct rpcent_test_data*,int ,int ) ;




 int FUNC_4 (int ,char const*,struct rpcent_test_data*,int ) ;
 int FUNC_5 (int ,char const*,struct rpcent_test_data*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char*,char const*) ;
 int VAR_7 ;
 int FUNC_8 (struct rpcent_test_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_9(const char *VAR_13, enum test_methods VAR_14)
{
 struct rpcent_test_data VAR_15, VAR_16, VAR_17;
 int VAR_18;

 FUNC_3(VAR_7, &VAR_15, VAR_3, VAR_6);
 FUNC_3(VAR_7, &VAR_16, VAR_3, VAR_6);
 if (VAR_13 != ((void*)0)) {
  if (FUNC_6(VAR_13, VAR_2 | VAR_1) != 0) {
   if (VAR_5 == VAR_0)
    VAR_14 = 132;
   else {
    FUNC_7("can't access the file %s\n",
        VAR_13);

    VAR_18 = -1;
    goto fin;
   }
  } else {
   if (VAR_14 == 132) {
    VAR_18 = 0;
    goto fin;
   }

   FUNC_4(VAR_7, VAR_13,
    &VAR_16, VAR_8);
  }
 }

 VAR_18 = FUNC_8(&VAR_15);
 if (VAR_18 == -1)
  return (-1);
 switch (VAR_14) {
 case 131:
  if (VAR_13 == ((void*)0))
   VAR_18 = FUNC_0(VAR_7, &VAR_15,
    VAR_9, (void *)&VAR_15);
  else
   VAR_18 = FUNC_0(VAR_7, &VAR_16,
    VAR_9, (void *)&VAR_16);
  break;
 case 130:
  if (VAR_13 == ((void*)0))
   VAR_18 = FUNC_0(VAR_7, &VAR_15,
    VAR_10, (void *)&VAR_15);
  else
   VAR_18 = FUNC_0(VAR_7, &VAR_16,
    VAR_10, (void *)&VAR_16);
  break;
 case 129:
  if (VAR_13 == ((void*)0))
   VAR_18 = FUNC_0(VAR_7, &VAR_15, VAR_11,
    (void *)&VAR_15);
  else
   VAR_18 = FUNC_1(VAR_7, &VAR_15, &VAR_16,
    VAR_4, ((void*)0));
  break;
 case 128:
   FUNC_3(VAR_7, &VAR_17, VAR_3, VAR_6);
   VAR_18 = FUNC_8(&VAR_17);
   if (VAR_18 != -1)
    VAR_18 = FUNC_1(VAR_7, &VAR_15, &VAR_17,
     VAR_4, ((void*)0));
   FUNC_2(VAR_7, &VAR_17);
  break;
 case 132:
  if (VAR_13 != ((void*)0))
      VAR_18 = FUNC_5(VAR_7, VAR_13, &VAR_15,
   VAR_12);
  break;
 default:
  VAR_18 = 0;
  break;
 }

fin:
 FUNC_2(VAR_7, &VAR_16);
 FUNC_2(VAR_7, &VAR_15);

 return (VAR_18);
}
