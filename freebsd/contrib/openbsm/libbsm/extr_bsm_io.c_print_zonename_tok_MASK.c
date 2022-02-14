
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int len; int zonename; } ;
struct TYPE_5__ {TYPE_2__ zonename; } ;
struct TYPE_7__ {TYPE_1__ tt; int id; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_6(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{

 FUNC_5(VAR_1, VAR_2->id, "zone", VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_2(VAR_1, "name");
  FUNC_4(VAR_1, VAR_2->tt.zonename.zonename,
      VAR_2->tt.zonename.len);
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_2->id);
 } else {
  FUNC_3(VAR_1, VAR_3);
  FUNC_4(VAR_1, VAR_2->tt.zonename.zonename,
      VAR_2->tt.zonename.len);
 }
}
