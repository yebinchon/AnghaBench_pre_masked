
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias {int dummy; } ;


 unsigned int VAR_0 ;
 struct alias** VAR_1 ;

__attribute__((used)) static struct alias **
FUNC_0(const char *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = (unsigned char)*VAR_2 << 4;
 while (*VAR_2)
  VAR_3+= *VAR_2++;
 return &VAR_1[VAR_3 % VAR_0];
}
