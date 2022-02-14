
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_long ;
struct ctl_var {int code; char* text; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ctl_var*) ;
 char* FUNC_1 (int ) ;
 struct ctl_var* FUNC_2 (struct ctl_var*,int) ;

char *
FUNC_3(
 struct ctl_var **VAR_1,
 u_long VAR_2,
 u_short VAR_3
 )
{
 u_short VAR_4;
 struct ctl_var *VAR_5;
 char * VAR_6;

 VAR_4 = FUNC_0(*VAR_1);
 *VAR_1 = FUNC_2(*VAR_1, (VAR_4 + 2) * sizeof(**VAR_1));
 VAR_5 = *VAR_1;
 VAR_6 = FUNC_1(VAR_2);
 VAR_5[VAR_4].code = VAR_4;
 VAR_5[VAR_4].text = VAR_6;
 VAR_5[VAR_4].flags = VAR_3;
 VAR_5[VAR_4 + 1].code = 0;
 VAR_5[VAR_4 + 1].text = ((void*)0);
 VAR_5[VAR_4 + 1].flags = VAR_0;

 return VAR_6;
}
