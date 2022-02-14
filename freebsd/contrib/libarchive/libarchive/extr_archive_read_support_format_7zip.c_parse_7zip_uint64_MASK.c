
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct archive_read {int dummy; } ;


 unsigned char* FUNC_0 (struct archive_read*,int) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_0, uint64_t *VAR_1)
{
 const unsigned char *VAR_2;
 unsigned char VAR_3, VAR_4;
 int VAR_5;

 if ((VAR_2 = FUNC_0(VAR_0, 1)) == ((void*)0))
  return (-1);
 VAR_3 = *VAR_2;
 VAR_4 = 0x80;
 *VAR_1 = 0;
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  if (VAR_3 & VAR_4) {
   if ((VAR_2 = FUNC_0(VAR_0, 1)) == ((void*)0))
    return (-1);
   *VAR_1 |= ((uint64_t)*VAR_2) << (8 * VAR_5);
   VAR_4 >>= 1;
   continue;
  }
  *VAR_1 += ((uint64_t)(VAR_3 & (VAR_4 -1))) << (8 * VAR_5);
  break;
 }
 return (0);
}
