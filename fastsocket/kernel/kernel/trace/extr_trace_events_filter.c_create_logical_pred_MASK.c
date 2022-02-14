
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_pred {int op; } ;


 int VAR_0 ;
 struct filter_pred* FUNC_0 (int,int ) ;

__attribute__((used)) static struct filter_pred *FUNC_1(int VAR_1)
{
 struct filter_pred *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->op = VAR_1;

 return VAR_2;
}
