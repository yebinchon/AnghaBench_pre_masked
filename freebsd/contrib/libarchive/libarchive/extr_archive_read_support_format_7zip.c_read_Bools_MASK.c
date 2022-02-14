
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int dummy; } ;


 unsigned char* FUNC_0 (struct archive_read*,int) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3;
 unsigned VAR_4, VAR_5 = 0, VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_5 == 0) {
   if ((VAR_3 = FUNC_0(VAR_0, 1)) == ((void*)0))
    return (-1);
   VAR_6 = *VAR_3;
   VAR_5 = 0x80;
  }
  VAR_1[VAR_4] = (VAR_6 & VAR_5)?1:0;
  VAR_5 >>= 1;
 }
 return (0);
}
