
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct parse {scalar_t__ nargs; TYPE_1__* argval; } ;
typedef scalar_t__ associd_t ;
struct TYPE_2__ {scalar_t__ uval; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__,int,scalar_t__*,size_t*,char const**) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (size_t,char const*,int,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_4(
 struct parse *VAR_6,
 FILE *VAR_7
 )
{
 const char *VAR_8;
 int VAR_9;
 associd_t VAR_10;
 size_t VAR_11;
 u_short VAR_12;

 if (VAR_6->nargs == 0) {
  VAR_10 = 0;
 } else {

  if (VAR_6->argval[0].uval == 0)
   VAR_10 = 0;
  else if ((VAR_10 = FUNC_0(VAR_6->argval[0].uval)) == 0)
   return;
 }

 VAR_9 = FUNC_1(VAR_4, VAR_0, VAR_10, 1, &VAR_12,
     &VAR_11, &VAR_8);

 if (VAR_9 != 0)
  return;

 if (VAR_5 > 1)
  (void) FUNC_2(VAR_7, "server=%s ", VAR_3);
 if (VAR_11 == 0)
  (void) FUNC_2(VAR_7, "done! (no data returned)\n");
 else {
  (void) FUNC_2(VAR_7,"associd=%u ", VAR_10);
  FUNC_3(VAR_11, VAR_8, (int)VAR_12,
     (VAR_10 != 0) ? VAR_1 : VAR_2, 0, VAR_7);
 }
 return;
}
