
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8_t ;
typedef int uint64_t ;
struct pt_packet_cyc {int value; } ;
struct pt_config {int* end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_0(struct pt_packet_cyc *VAR_7, const uint8_t *VAR_8,
      const struct pt_config *VAR_9)
{
 const uint8_t *VAR_10, *VAR_11;
 uint64_t VAR_12;
 uint8_t VAR_13, VAR_14, VAR_15;

 if (!VAR_7 || !VAR_8 || !VAR_9)
  return -VAR_6;

 VAR_10 = VAR_8;
 VAR_11 = VAR_9->end;




 VAR_13 = *VAR_8++;

 VAR_14 = VAR_13 & VAR_0;
 VAR_13 >>= VAR_1;

 VAR_12 = VAR_13;
 VAR_15 = (8 - VAR_1);

 while (VAR_14) {
  uint64_t VAR_16;

  if (VAR_11 <= VAR_8)
   return -VAR_5;

  VAR_16 = *VAR_8++;
  VAR_14 = VAR_16 & VAR_2;

  VAR_16 >>= VAR_3;
  VAR_16 <<= VAR_15;

  VAR_15 += (8 - VAR_3);
  if (sizeof(VAR_12) * 8 < VAR_15)
   return -VAR_4;

  VAR_12 |= VAR_16;
 }

 VAR_7->value = VAR_12;

 return (int) (VAR_8 - VAR_10);
}
