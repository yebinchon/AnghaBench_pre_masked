
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int token_t ;
struct TYPE_3__ {scalar_t__ at_type; int * at_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,int ,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,char*,char const*,char*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_8 (char const*,char*,int *) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_12, const char *VAR_13,
    u_int32_t VAR_14)
{
 token_t *VAR_15;
 char *VAR_16;

 VAR_16 = (char *)FUNC_5(FUNC_7(VAR_13) + 6);
 if (VAR_14 == VAR_2) {
  FUNC_4(VAR_0, "fe80::1", VAR_11.at_addr);
  VAR_11.at_type = VAR_2;
  FUNC_6(VAR_16, "%s%s", VAR_13, "-IPv6");
 } else {
  VAR_11.at_addr[0] = FUNC_3("127.0.0.1");
  VAR_11.at_type = VAR_1;
  FUNC_6(VAR_16, "%s%s", VAR_13, "-IPv4");
 }

 VAR_15 = FUNC_0(VAR_4, VAR_6,
     VAR_5, VAR_9, VAR_8, VAR_7,
     VAR_10, &VAR_11);
 if (VAR_15 == ((void*)0))
  FUNC_1(VAR_3, "au_to_subject32_ex");
 FUNC_8(VAR_12, VAR_16, VAR_15);
 FUNC_2(VAR_16);
}
