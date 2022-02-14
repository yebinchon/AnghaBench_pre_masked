
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int no; int * list; } ;
struct TYPE_6__ {TYPE_1__ grps; } ;
struct TYPE_7__ {TYPE_2__ tt; int id; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_4(VAR_1, VAR_2->id, "group", VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_2->tt.grps.no; VAR_5++) {
  if (VAR_4 & VAR_0) {
   FUNC_1(VAR_1, "<gid>");
   FUNC_3(VAR_1, VAR_2->tt.grps.list[VAR_5], VAR_4);
   FUNC_1(VAR_1, "</gid>");
   FUNC_0(VAR_1, VAR_2->id);
  } else {
   FUNC_2(VAR_1, VAR_3);
   FUNC_3(VAR_1, VAR_2->tt.grps.list[VAR_5], VAR_4);
  }
 }
}
