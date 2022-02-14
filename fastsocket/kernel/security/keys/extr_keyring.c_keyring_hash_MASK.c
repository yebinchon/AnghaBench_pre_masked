
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline unsigned FUNC_0(const char *VAR_1)
{
 unsigned VAR_2 = 0;

 for (; *VAR_1; VAR_1++)
  VAR_2 += (unsigned char)*VAR_1;

 return VAR_2 & (VAR_0 - 1);
}
