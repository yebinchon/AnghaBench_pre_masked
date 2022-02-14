
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mm_struct*,long,int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mm_struct *VAR_3, long VAR_4)
{
 int VAR_5, VAR_6 = 0;

 VAR_5 = FUNC_2(VAR_2, FUNC_1(), VAR_0,
        VAR_1);
 if (VAR_5 == 0)
  VAR_6 = 1;

 return FUNC_0(VAR_3, VAR_4, VAR_6);
}
