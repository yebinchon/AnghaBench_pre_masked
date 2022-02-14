
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct TYPE_5__ {size_t count; int * text; } ;
struct TYPE_6__ {TYPE_1__ execarg; } ;
struct TYPE_7__ {int id; TYPE_2__ tt; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,char*,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{
 u_int32_t VAR_5;

 FUNC_4(VAR_1, VAR_2->id, "exec arg", VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_2->tt.execarg.count; VAR_5++) {
  if (VAR_4 & VAR_0) {
   FUNC_1(VAR_1, "<arg>");
   FUNC_5(VAR_1, VAR_2->tt.execarg.text[VAR_5],
       FUNC_6(VAR_2->tt.execarg.text[VAR_5]));
   FUNC_1(VAR_1, "</arg>");
  } else {
   FUNC_2(VAR_1, VAR_3);
   FUNC_3(VAR_1, VAR_2->tt.execarg.text[VAR_5],
       FUNC_6(VAR_2->tt.execarg.text[VAR_5]));
  }
 }
 if (VAR_4 & VAR_0)
  FUNC_0(VAR_1, VAR_2->id);
}
