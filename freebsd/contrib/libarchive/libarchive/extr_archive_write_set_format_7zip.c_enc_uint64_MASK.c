
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef unsigned int uint64_t ;
struct archive_write {int dummy; } ;
typedef int numdata ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_write*,unsigned int*,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_1, uint64_t VAR_2)
{
 unsigned VAR_3 = 0x80;
 uint8_t VAR_4[9];
 int VAR_5;

 VAR_4[0] = 0;
 for (VAR_5 = 1; VAR_5 < (int)sizeof(VAR_4); VAR_5++) {
  if (VAR_2 < VAR_3) {
   VAR_4[0] |= (uint8_t)VAR_2;
   break;
  }
  VAR_4[VAR_5] = (uint8_t)VAR_2;
  VAR_2 >>= 8;
  VAR_4[0] |= VAR_3;
  VAR_3 >>= 1;
 }
 return ((int)FUNC_0(VAR_1, VAR_4, VAR_5, VAR_0));
}
