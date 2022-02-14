
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef scalar_t__ ssize_t ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,char*,size_t,unsigned long,int) ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_1, size_t VAR_2,
    u64 *VAR_3, int VAR_4)
{
 unsigned long VAR_5, VAR_6;
 size_t VAR_7;
 ssize_t VAR_8 = 0, VAR_9;

 if (!VAR_2)
  return 0;

 VAR_6 = (unsigned long)(*VAR_3 % VAR_0);
 VAR_5 = (unsigned long)(*VAR_3 / VAR_0);

 do {
  if (VAR_2 > (VAR_0 - VAR_6))
   VAR_7 = VAR_0 - VAR_6;
  else
   VAR_7 = VAR_2;

  VAR_9 = FUNC_0(VAR_5, VAR_1, VAR_7, VAR_6, VAR_4);
  if (VAR_9 < 0)
   return VAR_9;
  *VAR_3 += VAR_7;
  VAR_2 -= VAR_7;
  VAR_1 += VAR_7;
  VAR_8 += VAR_7;
  ++VAR_5;
  VAR_6 = 0;
 } while (VAR_2);

 return VAR_8;
}
