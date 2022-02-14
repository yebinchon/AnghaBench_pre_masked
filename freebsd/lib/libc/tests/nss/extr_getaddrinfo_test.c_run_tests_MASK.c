
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct addrinfo_test_data {int dummy; } ;
struct addrinfo {int dummy; } ;
struct TYPE_3__ {int ai_family; int ai_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int ,struct addrinfo_test_data*,struct addrinfo_test_data*,int ,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

 int FUNC_4 (int ,struct addrinfo_test_data*) ;
 int FUNC_5 (int ,struct addrinfo_test_data*,int ,int ) ;

 int FUNC_6 (int ,char const*,struct addrinfo_test_data*,int ) ;
 int FUNC_7 (int ,char const*,struct addrinfo_test_data*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (char const*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (char*) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int VAR_12 ;
 int FUNC_11 (char*,char const*) ;
 int VAR_13 ;
 char* FUNC_12 (char const*) ;
 char* FUNC_13 (scalar_t__) ;

__attribute__((used)) static void
FUNC_14(char *VAR_14, const char *VAR_15, int VAR_16)
{
 struct addrinfo_test_data VAR_17, VAR_18;
 char *VAR_19;
 int VAR_20;

 if (VAR_15 == ((void*)0))
  VAR_19 = ((void*)0);
 else {
  VAR_19 = FUNC_12(VAR_15);
  FUNC_1(VAR_19 != ((void*)0));
 }

 FUNC_10(&VAR_11, 0, sizeof(struct addrinfo));
 VAR_11.ai_family = VAR_16;
 VAR_11.ai_flags = VAR_0;

 if (VAR_15 != ((void*)0))
  VAR_12 = 129;

 FUNC_5(VAR_4, &VAR_17, VAR_7, VAR_10);
 FUNC_5(VAR_4, &VAR_18, VAR_7, VAR_10);

 FUNC_2(FUNC_8(VAR_14, VAR_2) == 0,
  "can't access the hostlist file %s\n", VAR_14);

 FUNC_11("building host lists from %s\n", VAR_14);

 VAR_20 = FUNC_6(VAR_4, VAR_14, &VAR_17,
  VAR_5);
 if (VAR_20 != 0)
  goto fin;

 if (VAR_15 != ((void*)0)) {
  if (FUNC_8(VAR_15, VAR_3 | VAR_2) != 0) {
   if (VAR_9 == VAR_1)
    VAR_12 = 129;
   else {
    FUNC_11("can't access the snapshot "
        "file %s\n", VAR_15);

    VAR_20 = -1;
    goto fin;
   }
  } else {
   VAR_20 = FUNC_6(VAR_4, VAR_15,
    &VAR_18, VAR_6);
   if (VAR_20 != 0) {
    FUNC_11("error reading snapshot file: %s\n",
        FUNC_13(VAR_9));
    goto fin;
   }
  }
 }

 switch (VAR_12) {
 case 128:
  if (VAR_15 != ((void*)0))
   FUNC_0(FUNC_3(VAR_4, &VAR_17, &VAR_18,
    VAR_8, ((void*)0)) == 0);
  break;
 case 129:
  if (VAR_15 != ((void*)0)) {
   FUNC_0(FUNC_7(VAR_4,
       VAR_15, &VAR_17, VAR_13) == 0);
  }
  break;
 default:
  break;
 }

fin:
 FUNC_4(VAR_4, &VAR_18);
 FUNC_4(VAR_4, &VAR_17);

 FUNC_9(VAR_19);
}
