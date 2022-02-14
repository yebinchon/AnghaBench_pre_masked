
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct vatpic {int mtx; struct vm* vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vatpic* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int *,char*,int *,int ) ;

struct vatpic *
FUNC_2(struct vm *VAR_4)
{
 struct vatpic *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct vatpic), VAR_1, VAR_2 | VAR_3);
 VAR_5->vm = VAR_4;

 FUNC_1(&VAR_5->mtx, "vatpic lock", ((void*)0), VAR_0);

 return (VAR_5);
}
