
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scard_data {scalar_t__ protocol; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 long VAR_5 ;
 long FUNC_0 (int ,int ,unsigned char*,unsigned long,int *,unsigned char*,unsigned long*) ;
 int FUNC_1 (int ,char*,unsigned char*,unsigned long) ;
 int FUNC_2 (int ,char*,unsigned char*,size_t) ;
 int FUNC_3 (int ,char*,long) ;

__attribute__((used)) static long FUNC_4(struct scard_data *VAR_6,
      unsigned char *VAR_7, size_t VAR_8,
      unsigned char *VAR_9, size_t *VAR_10)
{
 long VAR_11;



 unsigned long VAR_12;


 FUNC_2(VAR_0, "SCARD: scard_transmit: send",
   VAR_7, VAR_8);
 VAR_12 = *VAR_10;
 VAR_11 = FUNC_0(VAR_6->card,
       VAR_6->protocol == VAR_4 ?
       VAR_3 : VAR_2,
       VAR_7, (unsigned long) VAR_8,
       ((void*)0), VAR_9, &VAR_12);
 *VAR_10 = VAR_12;
 if (VAR_11 == VAR_5) {
  FUNC_1(VAR_0, "SCARD: scard_transmit: recv",
       VAR_9, VAR_12);
 } else {
  FUNC_3(VAR_1, "SCARD: SCardTransmit failed "
      "(err=0x%lx)", VAR_11);
 }
 return VAR_11;
}
