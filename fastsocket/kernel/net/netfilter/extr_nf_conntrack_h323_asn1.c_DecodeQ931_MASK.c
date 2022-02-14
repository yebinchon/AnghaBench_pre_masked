
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int UUIE; int MessageType; } ;
typedef TYPE_1__ Q931 ;


 int FUNC_0 (unsigned char*,unsigned char*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;

int FUNC_2(unsigned char *VAR_2, size_t VAR_3, Q931 *VAR_4)
{
 unsigned char *VAR_5 = VAR_2;
 int VAR_6;

 if (!VAR_5 || VAR_3 < 1)
  return VAR_0;


 if (*VAR_5 != 0x08) {
  FUNC_1("Unknown Protocol Discriminator\n");
  return VAR_1;
 }
 VAR_5++;
 VAR_3--;


 if (VAR_3 < 1)
  return VAR_0;
 VAR_6 = *VAR_5++;
 VAR_3--;
 if (VAR_3 < VAR_6)
  return VAR_0;
 VAR_5 += VAR_6;
 VAR_3 -= VAR_6;


 if (VAR_3 < 1)
  return VAR_0;
 VAR_4->MessageType = *VAR_5++;
 FUNC_1("MessageType = %02X\n", VAR_4->MessageType);
 if (*VAR_5 & 0x80) {
  VAR_5++;
  VAR_3--;
 }


 while (VAR_3 > 0) {
  if (*VAR_5 == 0x7e) {
   if (VAR_3 < 3)
    break;
   VAR_5++;
   VAR_6 = *VAR_5++ << 8;
   VAR_6 |= *VAR_5++;
   VAR_3 -= 3;
   if (VAR_3 < VAR_6)
    break;
   VAR_5++;
   VAR_6--;
   return FUNC_0(VAR_2, VAR_5, VAR_6,
         &VAR_4->UUIE);
  }
  VAR_5++;
  VAR_3--;
  if (VAR_3 < 1)
   break;
  VAR_6 = *VAR_5++;
  if (VAR_3 < VAR_6)
   break;
  VAR_5 += VAR_6;
  VAR_3 -= VAR_6;
 }

 FUNC_1("Q.931 UUIE not found\n");

 return VAR_0;
}
