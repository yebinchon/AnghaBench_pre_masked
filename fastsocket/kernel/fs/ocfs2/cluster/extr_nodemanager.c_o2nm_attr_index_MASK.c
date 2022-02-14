
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_attribute {int dummy; } ;


 int FUNC_0 (struct configfs_attribute**) ;
 int FUNC_1 () ;
 struct configfs_attribute** VAR_0 ;

__attribute__((used)) static int FUNC_2(struct configfs_attribute *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_1 == VAR_0[VAR_2])
   return VAR_2;
 }
 FUNC_1();
 return 0;
}
