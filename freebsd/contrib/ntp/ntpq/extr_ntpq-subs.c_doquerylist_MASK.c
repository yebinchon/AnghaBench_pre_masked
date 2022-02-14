
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct varlist {int dummy; } ;
typedef int data ;
typedef int associd_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int,size_t,char*,int *,size_t*,char const**) ;
 int FUNC_1 (struct varlist*,size_t*,char*) ;

__attribute__((used)) static int
FUNC_2(
 struct varlist *VAR_1,
 int VAR_2,
 associd_t VAR_3,
 int VAR_4,
 u_short *VAR_5,
 size_t *VAR_6,
 const char **VAR_7
 )
{
 char VAR_8[VAR_0];
 size_t VAR_9;

 VAR_9 = sizeof(VAR_8);
 FUNC_1(VAR_1, &VAR_9, VAR_8);

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_9, VAR_8, VAR_5, VAR_6,
         VAR_7);
}
