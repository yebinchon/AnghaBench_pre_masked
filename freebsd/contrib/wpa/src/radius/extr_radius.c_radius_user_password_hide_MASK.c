
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {TYPE_1__* hdr; } ;
struct TYPE_2__ {int * authenticator; } ;


 int FUNC_0 (int,int const**,size_t*,int *) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *,int ,size_t) ;

int FUNC_3(struct radius_msg *VAR_0,
         const u8 *VAR_1, size_t VAR_2,
         const u8 *VAR_3, size_t VAR_4,
         u8 *VAR_5, size_t VAR_6)
{
 size_t VAR_7, VAR_8, VAR_9;
 const u8 *VAR_10[2];
 size_t VAR_11[2];
 u8 VAR_12[16];

 if (VAR_2 + 16 > VAR_6)
  return -1;

 FUNC_1(VAR_5, VAR_1, VAR_2);

 VAR_7 = VAR_2 % 16;
 if (VAR_7 && VAR_2 < VAR_6) {
  VAR_7 = 16 - VAR_7;
  FUNC_2(VAR_5 + VAR_2, 0, VAR_7);
  VAR_6 = VAR_2 + VAR_7;
 } else {
  VAR_6 = VAR_2;
 }

 VAR_10[0] = VAR_3;
 VAR_11[0] = VAR_4;
 VAR_10[1] = VAR_0->hdr->authenticator;
 VAR_11[1] = 16;
 FUNC_0(2, VAR_10, VAR_11, VAR_12);

 for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
  VAR_5[VAR_8] ^= VAR_12[VAR_8];
 VAR_9 = 16;

 while (VAR_9 < VAR_6) {
  VAR_10[0] = VAR_3;
  VAR_11[0] = VAR_4;
  VAR_10[1] = &VAR_5[VAR_9 - 16];
  VAR_11[1] = 16;
  FUNC_0(2, VAR_10, VAR_11, VAR_12);

  for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
   VAR_5[VAR_9 + VAR_8] ^= VAR_12[VAR_8];

  VAR_9 += 16;
 }

 return VAR_6;
}
