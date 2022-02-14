
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumpdates {int dd_ddate; int dd_level; int dd_name; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int ,int *,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct dumpdates *VAR_1, const char *VAR_2)
{
 char VAR_3[128];

 (void) FUNC_0(VAR_2, VAR_0, VAR_1->dd_name, &VAR_1->dd_level, VAR_3);
 VAR_1->dd_ddate = FUNC_1(VAR_3);
 if (VAR_1->dd_ddate < 0)
  return(-1);
 return(0);
}
