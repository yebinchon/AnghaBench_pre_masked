
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int,void*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(int VAR_0, void *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 VAR_3 = VAR_2;
 do {
  ssize_t VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);
  if (VAR_4 == -1) {
   return VAR_4;
  }
  VAR_3 -= VAR_4;
  VAR_1 = (char *)VAR_1 + VAR_4;
 } while (VAR_3 > 0);
 return VAR_2;
}
