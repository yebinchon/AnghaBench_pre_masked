
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_asid {size_t size; } ;


 int FUNC_0 (struct pt_asid*,struct pt_asid const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct pt_asid *VAR_2, const struct pt_asid *VAR_3,
      size_t VAR_4)
{
 if (!VAR_2 || !VAR_3)
  return -VAR_0;


 if (VAR_4 < sizeof(VAR_3->size))
  return -VAR_1;


 if (sizeof(*VAR_3) < VAR_4)
  VAR_4 = sizeof(*VAR_3);


 FUNC_0(VAR_2, VAR_3, VAR_4);


 VAR_2->size = VAR_4;

 return 0;
}
