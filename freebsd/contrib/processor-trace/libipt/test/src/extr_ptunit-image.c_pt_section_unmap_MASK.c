
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int (* unmap ) (struct pt_section*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_section*) ;

int FUNC_1(struct pt_section *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 if (!VAR_2->unmap)
  return -VAR_1;

 return VAR_2->unmap(VAR_2);
}
