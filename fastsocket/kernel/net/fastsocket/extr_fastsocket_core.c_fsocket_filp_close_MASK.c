
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct file* old_file; struct file* sub_file; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct file*) ;
 int FUNC_1 (struct file*) ;

__attribute__((used)) static inline int FUNC_2(struct file *VAR_1)
{
 struct file *VAR_2, *VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->sub_file;
 VAR_3 = VAR_1->old_file;

 FUNC_0(VAR_0, "Close file 0x%p\n", VAR_1);

 VAR_4 = FUNC_1(VAR_1);



 if (VAR_2 && !VAR_4) {
  FUNC_0(VAR_0, "Close sub file 0x%p\n", VAR_2);
  FUNC_1(VAR_2);
 }


 if (VAR_3 && !VAR_4) {
  FUNC_0(VAR_0, "Close old file 0x%p\n", VAR_3);
  FUNC_1(VAR_3);
 }

 return 0;
}
