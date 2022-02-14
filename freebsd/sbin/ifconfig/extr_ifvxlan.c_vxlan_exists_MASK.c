
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifvxlancfg {int dummy; } ;
typedef int cfg ;


 int VAR_0 ;
 int FUNC_0 (struct ifvxlancfg*,int) ;
 int FUNC_1 (int,int ,struct ifvxlancfg*,int,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_1)
{
 struct ifvxlancfg VAR_2;

 FUNC_0(&VAR_2, sizeof(VAR_2));

 return (FUNC_1(VAR_1, VAR_0, &VAR_2, sizeof(VAR_2), 0) != -1);
}
