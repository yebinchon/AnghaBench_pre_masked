
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int num_data; int * data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;

void
FUNC_2 (struct objfile *VAR_0)
{
  FUNC_0 (VAR_0->data != ((void*)0));
  FUNC_1 (VAR_0->data, 0, VAR_0->num_data * sizeof (void *));
}
