
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int32 ;
struct parse {TYPE_1__* argval; } ;
typedef int dummy ;
struct TYPE_2__ {int uval; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,int,int,int,char*,size_t*,size_t*,char const**,int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(
 struct parse *VAR_4,
 FILE *VAR_5,
 int VAR_6
 )
{
 u_long VAR_7;
 size_t VAR_8;
 size_t VAR_9;
 const char *VAR_10;
 int VAR_11;


 VAR_7 = FUNC_2((u_int32)VAR_4->argval[0].uval);

again:
 VAR_11 = FUNC_0(VAR_3, VAR_6, 1, 1, sizeof(u_int32),
        (char *)&VAR_7, &VAR_8, &VAR_9, &VAR_10, 0,
        sizeof(VAR_10));

 if (VAR_11 == VAR_2 && VAR_3 == VAR_0) {
  VAR_3 = VAR_1;
  goto again;
 }

 if (VAR_11 == 0)
     (void) FUNC_1(VAR_5, "done!\n");
 return;
}
