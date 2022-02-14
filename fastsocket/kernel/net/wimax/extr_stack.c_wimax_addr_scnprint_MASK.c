
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,size_t,char*,unsigned char,char) ;

__attribute__((used)) static
size_t FUNC_1(char *VAR_0, size_t VAR_1,
      unsigned char *VAR_2, size_t VAR_3)
{
 unsigned VAR_4, VAR_5;
 for (VAR_5 = VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_5 += FUNC_0(VAR_0 + VAR_5, VAR_1 - VAR_5,
       "%02x%c", VAR_2[VAR_4],
       VAR_4 == VAR_3 - 1 ? '\0' : ':');
 return VAR_5;
}
