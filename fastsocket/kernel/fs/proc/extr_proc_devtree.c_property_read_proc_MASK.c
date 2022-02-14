
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {scalar_t__ length; scalar_t__ value; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, char **VAR_1, off_t VAR_2,
         int VAR_3, int *VAR_4, void *VAR_5)
{
 struct property *VAR_6 = VAR_5;
 int VAR_7;

 if (VAR_2 >= VAR_6->length) {
  *VAR_4 = 1;
  return 0;
 }
 VAR_7 = VAR_6->length - VAR_2;
 if (VAR_7 > VAR_3)
  VAR_7 = VAR_3;
 else
  *VAR_4 = 1;
 FUNC_0(VAR_0, (char *)VAR_6->value + VAR_2, VAR_7);
 *VAR_1 = VAR_0;
 return VAR_7;
}
