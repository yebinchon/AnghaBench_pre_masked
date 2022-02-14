
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int z_nrules; int z_format; int z_rule; int z_stdoff; int z_linenum; int z_filename; struct rule* z_rules; } ;
struct rule {int r_name; int r_filename; int r_linenum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (void*,size_t,size_t,int ) ;
 int VAR_5 ;
 struct rule* VAR_6 ;
 scalar_t__ FUNC_6 (int ,char) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 struct zone* VAR_7 ;

__attribute__((used)) static void
FUNC_9(void)
{
 register struct zone * VAR_8;
 register struct rule * VAR_9;
 register int VAR_10, VAR_11;
 register int VAR_12, VAR_13;

 if (VAR_3 != 0) {
  (void) FUNC_5((void *) VAR_6, (size_t) VAR_3,
   (size_t) sizeof *VAR_6, VAR_5);
  for (VAR_12 = 0; VAR_12 < VAR_3 - 1; ++VAR_12) {
   if (FUNC_7(VAR_6[VAR_12].r_name,
    VAR_6[VAR_12 + 1].r_name) != 0)
     continue;
   if (FUNC_7(VAR_6[VAR_12].r_filename,
    VAR_6[VAR_12 + 1].r_filename) == 0)
     continue;
   FUNC_1(VAR_6[VAR_12].r_filename, VAR_6[VAR_12].r_linenum);
   FUNC_8(FUNC_0("same rule name in multiple files"));
   FUNC_1(VAR_6[VAR_12 + 1].r_filename, VAR_6[VAR_12 + 1].r_linenum);
   FUNC_8(FUNC_0("same rule name in multiple files"));
   for (VAR_13 = VAR_12 + 2; VAR_13 < VAR_3; ++VAR_13) {
    if (FUNC_7(VAR_6[VAR_12].r_name,
     VAR_6[VAR_13].r_name) != 0)
      break;
    if (FUNC_7(VAR_6[VAR_12].r_filename,
     VAR_6[VAR_13].r_filename) == 0)
      continue;
    if (FUNC_7(VAR_6[VAR_12 + 1].r_filename,
     VAR_6[VAR_13].r_filename) == 0)
      continue;
    break;
   }
   VAR_12 = VAR_13 - 1;
  }
 }
 for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
  VAR_8 = &VAR_7[VAR_12];
  VAR_8->z_rules = ((void*)0);
  VAR_8->z_nrules = 0;
 }
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10 = VAR_11) {
  VAR_9 = &VAR_6[VAR_10];
  for (VAR_11 = VAR_10 + 1; VAR_11 < VAR_3; ++VAR_11)
   if (FUNC_7(VAR_9->r_name, VAR_6[VAR_11].r_name) != 0)
    break;
  for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
   VAR_8 = &VAR_7[VAR_12];
   if (FUNC_7(VAR_8->z_rule, VAR_9->r_name) != 0)
    continue;
   VAR_8->z_rules = VAR_9;
   VAR_8->z_nrules = VAR_11 - VAR_10;
  }
 }
 for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
  VAR_8 = &VAR_7[VAR_12];
  if (VAR_8->z_nrules == 0) {



   FUNC_1(VAR_8->z_filename, VAR_8->z_linenum);
   VAR_8->z_stdoff = FUNC_4(VAR_8->z_rule, FUNC_0("unruly zone"),
    VAR_1);




   if (FUNC_6(VAR_8->z_format, '%') != 0)
    FUNC_2(FUNC_0("%s in ruleless zone"));
  }
 }
 if (VAR_2)
  FUNC_3(VAR_0);
}
