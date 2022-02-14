
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class_datum {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, void *VAR_3, void *VAR_4)
{
 struct class_datum *VAR_5 = VAR_3;
 char *VAR_6 = VAR_2, **VAR_7 = VAR_4;
 int VAR_8 = VAR_5->value - 1;

 VAR_7[VAR_8] = FUNC_0(VAR_6, VAR_1);
 if (!VAR_7[VAR_8])
  return -VAR_0;

 return 0;
}
