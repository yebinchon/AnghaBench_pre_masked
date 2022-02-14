
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int val; int * name; } ;



__attribute__((used)) static int
FUNC_0(struct option *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].val != VAR_1 && VAR_0[VAR_2].name != ((void*)0); VAR_2++)
  continue;
 return (VAR_2);
}
