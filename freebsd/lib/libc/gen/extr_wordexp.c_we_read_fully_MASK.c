
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,size_t) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static size_t
FUNC_1(int VAR_2, char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 ssize_t VAR_6;

 VAR_5 = 0;
 do {
  VAR_6 = FUNC_0(VAR_2, VAR_3 + VAR_5, VAR_4 - VAR_5);
  if (VAR_6 == -1 && VAR_1 == VAR_0)
   continue;
  if (VAR_6 <= 0)
   break;
  VAR_5 += VAR_6;
 } while (VAR_5 != VAR_4);
 return VAR_5;
}
