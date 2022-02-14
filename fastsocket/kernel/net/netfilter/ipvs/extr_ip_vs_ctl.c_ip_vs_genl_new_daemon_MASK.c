
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct nlattr **VAR_4)
{
 if (!(VAR_4[VAR_2] &&
       VAR_4[VAR_1] &&
       VAR_4[VAR_3]))
  return -VAR_0;

 return FUNC_2(FUNC_1(VAR_4[VAR_2]),
     FUNC_0(VAR_4[VAR_1]),
     FUNC_1(VAR_4[VAR_3]));
}
