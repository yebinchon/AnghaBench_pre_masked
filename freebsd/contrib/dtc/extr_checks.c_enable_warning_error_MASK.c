
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct check {int warn; int error; int num_prereqs; struct check** prereq; } ;



__attribute__((used)) static void FUNC_0(struct check *VAR_0, bool VAR_1, bool VAR_2)
{
 int VAR_3;


 if ((VAR_1 && !VAR_0->warn) || (VAR_2 && !VAR_0->error))
  for (VAR_3 = 0; VAR_3 < VAR_0->num_prereqs; VAR_3++)
   FUNC_0(VAR_0->prereq[VAR_3], VAR_1, VAR_2);

 VAR_0->warn = VAR_0->warn || VAR_1;
 VAR_0->error = VAR_0->error || VAR_2;
}
