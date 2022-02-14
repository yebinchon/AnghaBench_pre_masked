
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int (* gen_syndrome ) (int,size_t,void**) ;} ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 size_t* VAR_4 ;
 size_t** VAR_5 ;
 int FUNC_0 (int,size_t,void**) ;

void FUNC_1(int VAR_6, size_t VAR_7, int VAR_8, int VAR_9,
         void **VAR_10)
{
 u8 *VAR_11, *VAR_12, *VAR_13, *VAR_14;
 u8 VAR_15, VAR_16, VAR_17;
 const u8 *VAR_18;
 const u8 *VAR_19;

 VAR_11 = (u8 *)VAR_10[VAR_6-2];
 VAR_12 = (u8 *)VAR_10[VAR_6-1];




 VAR_13 = (u8 *)VAR_10[VAR_8];
 VAR_10[VAR_8] = (void *)VAR_1;
 VAR_10[VAR_6-2] = VAR_13;
 VAR_14 = (u8 *)VAR_10[VAR_9];
 VAR_10[VAR_9] = (void *)VAR_1;
 VAR_10[VAR_6-1] = VAR_14;

 VAR_0.gen_syndrome(VAR_6, VAR_7, VAR_10);


 VAR_10[VAR_8] = VAR_13;
 VAR_10[VAR_9] = VAR_14;
 VAR_10[VAR_6-2] = VAR_11;
 VAR_10[VAR_6-1] = VAR_12;


 VAR_18 = VAR_5[VAR_2[VAR_9-VAR_8]];
 VAR_19 = VAR_5[VAR_4[VAR_3[VAR_8]^VAR_3[VAR_9]]];


 while ( VAR_7-- ) {
  VAR_15 = *VAR_11 ^ *VAR_13;
  VAR_16 = VAR_19[*VAR_12 ^ *VAR_14];
  *VAR_14++ = VAR_17 = VAR_18[VAR_15] ^ VAR_16;
  *VAR_13++ = VAR_17 ^ VAR_15;
  VAR_11++; VAR_12++;
 }
}
