
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int to; int from; } ;
typedef TYPE_1__ substring_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int FUNC_4(substring_t *VAR_3, int *VAR_4, int VAR_5)
{
 char *VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_3->to - VAR_3->from + 1, VAR_2);
 if (!VAR_7)
  return -VAR_1;
 FUNC_2(VAR_7, VAR_3->from, VAR_3->to - VAR_3->from);
 VAR_7[VAR_3->to - VAR_3->from] = '\0';
 *VAR_4 = FUNC_3(VAR_7, &VAR_6, VAR_5);
 VAR_8 = 0;
 if (VAR_6 == VAR_7)
  VAR_8 = -VAR_0;
 FUNC_0(VAR_7);
 return VAR_8;
}
