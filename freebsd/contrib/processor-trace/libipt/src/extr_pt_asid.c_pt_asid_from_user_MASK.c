
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_asid {size_t size; } ;


 int FUNC_0 (struct pt_asid*,struct pt_asid const*,size_t) ;
 int FUNC_1 (struct pt_asid*) ;
 int VAR_0 ;

int FUNC_2(struct pt_asid *VAR_1, const struct pt_asid *VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 FUNC_1(VAR_1);

 if (VAR_2) {
  size_t VAR_3;

  VAR_3 = VAR_2->size;


  if (sizeof(*VAR_1) < VAR_3)
   VAR_3 = sizeof(*VAR_1);


  FUNC_0(VAR_1, VAR_2, VAR_3);


  VAR_1->size = sizeof(*VAR_1);
 }

 return 0;
}
