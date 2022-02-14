
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rose_facilities_struct {unsigned char rand; int source_ndigis; int dest_ndigis; int * source_digis; int * dest_digis; int fail_addr; int fail_call; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (int *,unsigned char*,unsigned char) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_9, struct rose_facilities_struct *VAR_10, int VAR_11)
{
 unsigned char *VAR_12;
 unsigned char VAR_13, VAR_14, VAR_15 = 0;
 int VAR_16 = 0;

 do {
  switch (*VAR_9 & 0xC0) {
  case 0x00:
   VAR_9 += 2;
   VAR_15 += 2;
   VAR_11 -= 2;
   break;

  case 0x40:
   if (*VAR_9 == VAR_6)
    VAR_10->rand = ((VAR_9[1] << 8) & 0xFF00) + ((VAR_9[2] << 0) & 0x00FF);
   VAR_9 += 3;
   VAR_15 += 3;
   VAR_11 -= 3;
   break;

  case 0x80:
   VAR_9 += 4;
   VAR_15 += 4;
   VAR_11 -= 4;
   break;

  case 0xC0:
   VAR_13 = VAR_9[1];
   if (*VAR_9 == VAR_2) {
    if (!VAR_16) {
     FUNC_0(&VAR_10->source_digis[0], VAR_9 + 2, VAR_0);
     VAR_10->source_ndigis = 1;
    }
   }
   else if (*VAR_9 == VAR_7) {
    if (!VAR_16) {
     FUNC_0(&VAR_10->dest_digis[0], VAR_9 + 2, VAR_0);
     VAR_10->dest_ndigis = 1;
    }
   }
   else if (*VAR_9 == VAR_5) {
    FUNC_0(&VAR_10->fail_call, VAR_9 + 2, VAR_0);
   }
   else if (*VAR_9 == VAR_4) {
    FUNC_0(&VAR_10->fail_addr, VAR_9 + 3, VAR_8);
   }
   else if (*VAR_9 == VAR_3) {
    VAR_16 = 1;
    VAR_10->source_ndigis = 0;
    VAR_10->dest_ndigis = 0;
    for (VAR_12 = VAR_9 + 2, VAR_14 = 0 ; VAR_14 < VAR_13 ; VAR_12 += VAR_0, VAR_14 += VAR_0) {
     if (VAR_12[6] & VAR_1)
      FUNC_0(&VAR_10->dest_digis[VAR_10->dest_ndigis++], VAR_12, VAR_0);
     else
      FUNC_0(&VAR_10->source_digis[VAR_10->source_ndigis++], VAR_12, VAR_0);
    }
   }
   VAR_9 += VAR_13 + 2;
   VAR_15 += VAR_13 + 2;
   VAR_11 -= VAR_13 + 2;
   break;
  }
 } while (*VAR_9 != 0x00 && VAR_11 > 0);

 return VAR_15;
}
