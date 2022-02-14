
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instruction {int srcline; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct instruction*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct instruction*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int VAR_3 ;

struct instruction *
FUNC_4(void)
{
 struct instruction *VAR_4;

 VAR_4 = (struct instruction *)FUNC_1(sizeof(struct instruction));
 if (VAR_4 == ((void*)0))
  FUNC_3("Unable to malloc instruction object", VAR_0);
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 FUNC_0(&VAR_2, VAR_4, VAR_1);
 VAR_4->srcline = VAR_3;
 return VAR_4;
}
