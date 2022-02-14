
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {struct pt_section* status; struct pt_section* filename; int lock; int alock; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pt_section *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->filename);
 FUNC_0(VAR_0->status);
 FUNC_0(VAR_0);
}
