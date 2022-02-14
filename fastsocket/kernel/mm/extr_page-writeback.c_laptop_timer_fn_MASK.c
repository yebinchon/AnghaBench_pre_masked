
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct work_struct*,int ) ;
 int VAR_1 ;
 struct work_struct* FUNC_1 (int,int ) ;
 int FUNC_2 (struct work_struct*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct work_struct *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_3, VAR_1);
  FUNC_2(VAR_3);
 }
}
