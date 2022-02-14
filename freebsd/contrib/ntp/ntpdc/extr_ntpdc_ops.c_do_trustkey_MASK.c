
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct parse {size_t nargs; TYPE_1__* argval; } ;
typedef int dummy ;
struct TYPE_2__ {int uval; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int,int,int,int,char*,size_t*,size_t*,char const**,int ,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_2(
 struct parse *VAR_5,
 FILE *VAR_6,
 int VAR_7
 )
{
 u_long VAR_8[VAR_3];
 size_t VAR_9;
 size_t VAR_10;
 size_t VAR_11;
 const char *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_5->nargs; VAR_9++) {
  VAR_8[VAR_13++] = VAR_5->argval[VAR_9].uval;
 }

again:
 VAR_14 = FUNC_0(VAR_4, VAR_7, 1, VAR_13, sizeof(u_long),
        (char *)VAR_8, &VAR_10, &VAR_11, &VAR_12, 0,
        sizeof(VAR_12));

 if (VAR_14 == VAR_2 && VAR_4 == VAR_0) {
  VAR_4 = VAR_1;
  goto again;
 }

 if (VAR_14 == 0)
     (void) FUNC_1(VAR_6, "done!\n");
 return;
}
