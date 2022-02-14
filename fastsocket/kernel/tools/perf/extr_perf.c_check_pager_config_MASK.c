
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pager_config {char const* cmd; int val; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pager_config*) ;

int FUNC_1(const char *VAR_1)
{
 struct pager_config VAR_2;
 VAR_2.cmd = VAR_1;
 VAR_2.val = -1;
 FUNC_0(VAR_0, &VAR_2);
 return VAR_2.val;
}
