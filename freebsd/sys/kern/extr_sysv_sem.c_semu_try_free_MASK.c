
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sem_undo {scalar_t__ un_cnt; } ;


 int FUNC_0 (int *,struct sem_undo*,int ) ;
 int FUNC_1 (struct sem_undo*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct sem_undo *VAR_3)
{

 FUNC_2(VAR_0);

 if (VAR_3->un_cnt != 0)
  return (0);
 FUNC_1(VAR_3, VAR_2);
 FUNC_0(&VAR_1, VAR_3, VAR_2);
 return (1);
}
