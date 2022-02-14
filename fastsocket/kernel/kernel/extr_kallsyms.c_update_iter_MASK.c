
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kallsym_iter {scalar_t__ pos; int nameoff; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct kallsym_iter*) ;
 int FUNC_1 (struct kallsym_iter*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct kallsym_iter*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct kallsym_iter *VAR_1, loff_t VAR_2)
{

 if (VAR_2 >= VAR_0) {
  VAR_1->pos = VAR_2;
  return FUNC_1(VAR_1);
 }


 if (VAR_2 != VAR_1->pos)
  FUNC_2(VAR_1, VAR_2);

 VAR_1->nameoff += FUNC_0(VAR_1);
 VAR_1->pos++;

 return 1;
}
