
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct file* sub_file; struct file* old_file; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int,struct file*) ;
 struct file* FUNC_3 (int,int*) ;
 int FUNC_4 (struct file*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_1)
{
 int VAR_2;
 struct file *VAR_3, *VAR_4, *VAR_5;

 VAR_3 = FUNC_3(VAR_1, &VAR_2);

 VAR_4 = VAR_3->old_file;
 VAR_5 = VAR_3->sub_file;

 FUNC_2(VAR_1, VAR_4);

 FUNC_0(VAR_0, "Close sub file 0x%p\n", VAR_5);
 FUNC_1(VAR_5);
 FUNC_0(VAR_0, "Close new file 0x%p\n", VAR_3);
 FUNC_1(VAR_3);

 FUNC_4(VAR_3, VAR_2);
}
