
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_pic {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct intr_pic* FUNC_2 (int ,intptr_t,int) ;

__attribute__((used)) static struct intr_pic *
FUNC_3(device_t VAR_1, intptr_t VAR_2, int VAR_3)
{
 struct intr_pic *VAR_4;

 FUNC_0(&VAR_0);
 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0);
 return (VAR_4);
}
