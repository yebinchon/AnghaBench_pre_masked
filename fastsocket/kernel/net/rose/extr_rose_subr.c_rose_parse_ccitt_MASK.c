
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rose_facilities_struct {char source_addr; char dest_addr; int dest_call; int source_call; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,unsigned char*,unsigned char) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_3, struct rose_facilities_struct *VAR_4, int VAR_5)
{
 unsigned char VAR_6, VAR_7 = 0;
 char VAR_8[11];

 do {
  switch (*VAR_3 & 0xC0) {
  case 0x00:
   VAR_3 += 2;
   VAR_7 += 2;
   VAR_5 -= 2;
   break;

  case 0x40:
   VAR_3 += 3;
   VAR_7 += 3;
   VAR_5 -= 3;
   break;

  case 0x80:
   VAR_3 += 4;
   VAR_7 += 4;
   VAR_5 -= 4;
   break;

  case 0xC0:
   VAR_6 = VAR_3[1];
   if (*VAR_3 == VAR_0) {
    FUNC_1(&VAR_4->source_addr, VAR_3 + 7, VAR_2);
    FUNC_1(VAR_8, VAR_3 + 12, VAR_6 - 10);
    VAR_8[VAR_6 - 10] = '\0';
    FUNC_0(&VAR_4->source_call, VAR_8);
   }
   if (*VAR_3 == VAR_1) {
    FUNC_1(&VAR_4->dest_addr, VAR_3 + 7, VAR_2);
    FUNC_1(VAR_8, VAR_3 + 12, VAR_6 - 10);
    VAR_8[VAR_6 - 10] = '\0';
    FUNC_0(&VAR_4->dest_call, VAR_8);
   }
   VAR_3 += VAR_6 + 2;
   VAR_7 += VAR_6 + 2;
   VAR_5 -= VAR_6 + 2;
   break;
  }
 } while (*VAR_3 != 0x00 && VAR_5 > 0);

 return VAR_7;
}
