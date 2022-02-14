
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(int VAR_2, const void *VAR_3, size_t VAR_4)
{
 size_t VAR_5 = 0;
 ssize_t VAR_6;

 while ((VAR_4 - VAR_5) > 0) {
  VAR_6 = FUNC_2(VAR_2, ((char *) VAR_3) + VAR_5, VAR_4 - VAR_5);
  if (VAR_6 < 0) {
   if (VAR_1 == VAR_0)
    continue;
   else {
    FUNC_0("write: %s\n", FUNC_1(VAR_1));
    return -1;
   }
  }
  VAR_5 += VAR_6;
 }
 return VAR_5;
}
