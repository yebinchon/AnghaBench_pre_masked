
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct check {int warn; int error; int num_prereqs; struct check** prereq; } ;


 int FUNC_0 (struct check**) ;
 struct check** VAR_0 ;

__attribute__((used)) static void FUNC_1(struct check *VAR_1, bool VAR_2, bool VAR_3)
{
 int VAR_4;



 if ((VAR_2 && VAR_1->warn) || (VAR_3 && VAR_1->error)) {
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
   struct check *VAR_5 = VAR_0[VAR_4];
   int VAR_6;

   for (VAR_6 = 0; VAR_6 < VAR_5->num_prereqs; VAR_6++)
    if (VAR_5->prereq[VAR_6] == VAR_1)
     FUNC_1(VAR_5, VAR_2, VAR_3);
  }
 }

 VAR_1->warn = VAR_1->warn && !VAR_2;
 VAR_1->error = VAR_1->error && !VAR_3;
}
