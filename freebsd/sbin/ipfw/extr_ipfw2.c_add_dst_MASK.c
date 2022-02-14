
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct tidx {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int ipfw_insn ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int *,char*,int,struct tidx*) ;
 int * FUNC_1 (int *,char*,int,struct tidx*) ;
 int FUNC_2 (int ,char*,struct in6_addr*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static ipfw_insn *
FUNC_6(ipfw_insn *VAR_4, char *VAR_5, u_char VAR_6, int VAR_7, struct tidx *VAR_8)
{
 struct in6_addr VAR_9;
 char *VAR_10, *VAR_11, VAR_12[VAR_1];
 ipfw_insn *VAR_13 = ((void*)0);
 int VAR_14;


 if ((VAR_11 = FUNC_5(VAR_5, "/,")) != ((void*)0)) {
  VAR_14 = VAR_11 - VAR_5;
  FUNC_4(VAR_12, VAR_5, sizeof(VAR_12));
  if (VAR_14 < sizeof(VAR_12))
   VAR_12[VAR_14] = '\0';
  VAR_10 = VAR_12;
 } else
  VAR_10 = VAR_5;

 if (VAR_6 == VAR_3 || FUNC_3(VAR_5, "me6") == 0 ||
     FUNC_2(VAR_0, VAR_10, &VAR_9) == 1)
  VAR_13 = FUNC_1(VAR_4, VAR_5, VAR_7, VAR_8);

 if (VAR_13 == ((void*)0) && (VAR_6 == VAR_2 || FUNC_3(VAR_5, "me") == 0 ||
     FUNC_2(VAR_0, VAR_10, &VAR_9) != 1))
  VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8);
 if (VAR_13 == ((void*)0) && FUNC_3(VAR_5, "any") != 0)
  VAR_13 = VAR_4;

 return VAR_13;
}
