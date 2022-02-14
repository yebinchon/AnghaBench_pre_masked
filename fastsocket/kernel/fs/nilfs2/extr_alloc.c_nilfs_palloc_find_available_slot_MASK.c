
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 (struct inode*,unsigned long) ;
 int FUNC_2 (int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2,
         unsigned long VAR_3,
         unsigned long VAR_4,
         unsigned char *VAR_5,
         int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_4 > 0) {
  VAR_9 = (VAR_4 + VAR_0 - 1) & ~(VAR_0 - 1);
  if (VAR_9 > VAR_6)
   VAR_9 = VAR_6;
  VAR_8 = FUNC_0(VAR_5, VAR_9, VAR_4);
  if (VAR_8 < VAR_9 &&
      !FUNC_2(
       FUNC_1(VAR_2, VAR_3), VAR_8, VAR_5))
   return VAR_8;
 } else
  VAR_9 = 0;

 for (VAR_10 = 0, VAR_7 = VAR_9;
      VAR_10 < VAR_6;
      VAR_10 += VAR_0, VAR_7 += VAR_0) {

  if (VAR_7 >= VAR_6)
   VAR_7 = 0;
  while (*((unsigned long *)VAR_5 + VAR_7 / VAR_0)
         != ~0UL) {
   VAR_9 = VAR_7 + VAR_0;
   if (VAR_9 > VAR_6)
    VAR_9 = VAR_6;
   VAR_8 = FUNC_0(VAR_5, VAR_9, VAR_7);
   if ((VAR_8 < VAR_9) &&
       !FUNC_2(
        FUNC_1(VAR_2, VAR_3), VAR_8,
        VAR_5))
    return VAR_8;
  }
 }
 return -VAR_1;
}
