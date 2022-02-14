
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union node {int dummy; } node ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (union node*) ;

char *
FUNC_2(union node *VAR_3)
{
 char *VAR_4;

 VAR_1 = VAR_4 = FUNC_0(VAR_0);
 VAR_2 = VAR_0 - 4;
 FUNC_1(VAR_3);
 *VAR_1 = '\0';
 return VAR_4;
}
