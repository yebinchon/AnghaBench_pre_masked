
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int
FUNC_1(int64_t VAR_0, void *VAR_1, int VAR_2)
{
 int64_t VAR_3;
 int VAR_4;

 VAR_3 = (((int64_t)1) << (VAR_2 * 4)) - 1;
 if (VAR_0 >= 0 && VAR_0 <= VAR_3) {
     FUNC_0(VAR_0, (char *)VAR_1, VAR_2);
     VAR_4 = 0;
 } else {
     FUNC_0(VAR_3, (char *)VAR_1, VAR_2);
     VAR_4 = -1;
 }
 return (VAR_4);
}
