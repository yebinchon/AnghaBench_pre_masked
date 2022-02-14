
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int critical_section_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,int ) ;

critical_section_t *
FUNC_4(void)
{
 critical_section_t *VAR_3;

 VAR_3= (critical_section_t *)FUNC_1(sizeof(critical_section_t));
 if (VAR_3 == ((void*)0))
  FUNC_3("Unable to malloc critical_section object", VAR_0);
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 FUNC_0(&VAR_1, VAR_3, VAR_2);
 return VAR_3;
}
