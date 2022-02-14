
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fixed ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2)
{
 fixed VAR_3, VAR_4, VAR_5;

 VAR_3 = ((fixed)(VAR_1 - 1) << VAR_0) / VAR_1;
 VAR_4 = VAR_3;
 while (--VAR_2 > 0) VAR_4 = (VAR_4 * VAR_3) >> VAR_0;
 VAR_5 = (fixed)VAR_1 * (((fixed)1 << VAR_0) - VAR_4);

 return (int)(VAR_5 >> VAR_0);
}
