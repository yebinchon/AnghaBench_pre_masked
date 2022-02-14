
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct varlist {int dummy; } ;
struct parse {TYPE_1__* argval; } ;
typedef scalar_t__ associd_t ;
struct TYPE_2__ {scalar_t__ uval; int string; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct varlist*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char* VAR_4 ;
 int FUNC_2 (struct varlist*,int ) ;
 int FUNC_3 (struct varlist*) ;
 int FUNC_4 (struct varlist*,int ,scalar_t__,int,scalar_t__*,size_t*,char const**) ;
 int FUNC_5 (int *,char*,...) ;
 int VAR_5 ;
 int FUNC_6 (size_t,char const*,int,int,int ,int *) ;

__attribute__((used)) static void
FUNC_7(
 struct parse *VAR_6,
 FILE *VAR_7
 )
{
 const char *VAR_8;
 int VAR_9;
 associd_t VAR_10;
 int VAR_11;
 size_t VAR_12;
 u_short VAR_13;
 struct varlist VAR_14[VAR_1];


 if (VAR_6->argval[0].uval == 0)
  VAR_10 = 0;
 else if ((VAR_10 = FUNC_1(VAR_6->argval[0].uval)) == 0)
  return;

 FUNC_0(VAR_14);
 FUNC_2(VAR_14, VAR_6->argval[1].string);

 VAR_9 = FUNC_4(VAR_14, VAR_0, VAR_10, 1, &VAR_13,
     &VAR_12, &VAR_8);

 FUNC_3(VAR_14);

 if (VAR_9 != 0)
  return;

 if (VAR_5 > 1)
  FUNC_5(VAR_7, "server=%s ", VAR_4);
 if (VAR_12 == 0)
  FUNC_5(VAR_7, "done! (no data returned)\n");
 else {
  FUNC_5(VAR_7,"associd=%u ", VAR_10);
  VAR_11 = (0 == VAR_10)
      ? VAR_3
      : VAR_2;
  FUNC_6(VAR_12, VAR_8, (int)VAR_13, VAR_11, 0, VAR_7);
 }
 return;
}
