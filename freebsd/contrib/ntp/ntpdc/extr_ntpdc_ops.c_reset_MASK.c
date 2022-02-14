
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reset_flags {int flags; } ;
struct parse {size_t nargs; TYPE_1__* argval; } ;
struct TYPE_4__ {int flag; int str; } ;
struct TYPE_3__ {char* string; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 size_t FUNC_1 (scalar_t__,int ,int,int,int,char*,size_t*,size_t*,char const**,int ,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static void
FUNC_4(
 struct parse *VAR_6,
 FILE *VAR_7
 )
{
 struct reset_flags VAR_8;
 size_t VAR_9;
 size_t VAR_10;
 const char *VAR_11;
 int VAR_12;
 size_t VAR_13;
 int VAR_14;

 VAR_14 = 0;
 VAR_8.flags = 0;
 for (VAR_13 = 0; VAR_13 < VAR_6->nargs; VAR_13++) {
  for (VAR_12 = 0; VAR_5[VAR_12].flag != 0; VAR_12++) {
   if (FUNC_0(VAR_6->argval[VAR_13].string, VAR_5[VAR_12].str))
    break;
  }
  if (VAR_5[VAR_12].flag == 0) {
   FUNC_2(VAR_7, "Flag %s unknown\n",
    VAR_6->argval[VAR_13].string);
   VAR_14 = 1;
  } else {
   VAR_8.flags |= VAR_5[VAR_12].flag;
  }
 }
 VAR_8.flags = FUNC_3(VAR_8.flags);

 if (VAR_14) {
  (void) FUNC_2(VAR_7, "Not done due to errors\n");
  return;
 }

again:
 VAR_13 = FUNC_1(VAR_4, VAR_3, 1, 1,
        sizeof(struct reset_flags), (char *)&VAR_8, &VAR_9,
        &VAR_10, &VAR_11, 0, sizeof(struct reset_flags));

 if (VAR_13 == VAR_2 && VAR_4 == VAR_0) {
  VAR_4 = VAR_1;
  goto again;
 }

 if (VAR_13 == 0)
     (void) FUNC_2(VAR_7, "done!\n");
 return;
}
