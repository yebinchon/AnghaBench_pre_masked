
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int name; int ms; int s; } ;
struct TYPE_6__ {TYPE_1__ file; } ;
struct TYPE_7__ {TYPE_2__ tt; int id; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_9(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{

 FUNC_8(VAR_1, VAR_2->id, "file", VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_3(VAR_1, "time");
  FUNC_6(VAR_1, VAR_2->tt.file.s, VAR_4);
  FUNC_0(VAR_1);
  FUNC_3(VAR_1, "msec");
  FUNC_5(VAR_1, VAR_2->tt.file.ms, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, ">");
  FUNC_7(VAR_1, VAR_2->tt.file.name, VAR_2->tt.file.len);
  FUNC_1(VAR_1, VAR_2->id);
 } else {
  FUNC_4(VAR_1, VAR_3);
  FUNC_6(VAR_1, VAR_2->tt.file.s, VAR_4);
  FUNC_4(VAR_1, VAR_3);
  FUNC_5(VAR_1, VAR_2->tt.file.ms, VAR_4);
  FUNC_4(VAR_1, VAR_3);
  FUNC_7(VAR_1, VAR_2->tt.file.name, VAR_2->tt.file.len);
 }
}
