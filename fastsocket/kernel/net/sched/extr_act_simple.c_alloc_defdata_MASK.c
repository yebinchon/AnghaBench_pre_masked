
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_defact {int tcfd_defdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct tcf_defact *VAR_3, char *VAR_4)
{
 VAR_3->tcfd_defdata = FUNC_0(VAR_4, VAR_2, VAR_1);
 if (FUNC_1(!VAR_3->tcfd_defdata))
  return -VAR_0;

 return 0;
}
