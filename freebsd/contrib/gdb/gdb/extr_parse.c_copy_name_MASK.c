
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stoken {size_t length; int ptr; } ;


 int FUNC_0 (char*,int ,size_t) ;
 char* VAR_0 ;

char *
FUNC_1 (struct stoken VAR_1)
{
  FUNC_0 (VAR_0, VAR_1.ptr, VAR_1.length);
  VAR_0[VAR_1.length] = 0;
  return VAR_0;
}
