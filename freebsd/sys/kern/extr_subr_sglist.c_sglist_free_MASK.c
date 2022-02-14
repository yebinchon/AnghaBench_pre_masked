
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sglist {int sg_refs; } ;


 int VAR_0 ;
 int FUNC_0 (struct sglist*,int ) ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(struct sglist *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return;

 if (FUNC_1(&VAR_1->sg_refs))
  FUNC_0(VAR_1, VAR_0);
}
