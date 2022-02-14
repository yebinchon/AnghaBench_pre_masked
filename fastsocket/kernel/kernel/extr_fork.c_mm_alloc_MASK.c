
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;


 struct mm_struct* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct mm_struct*,int ,int) ;
 struct mm_struct* FUNC_2 (struct mm_struct*,int ) ;

struct mm_struct * FUNC_3(void)
{
 struct mm_struct * VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1) {
  FUNC_1(VAR_1, 0, sizeof(*VAR_1));
  VAR_1 = FUNC_2(VAR_1, VAR_0);
 }
 return VAR_1;
}
