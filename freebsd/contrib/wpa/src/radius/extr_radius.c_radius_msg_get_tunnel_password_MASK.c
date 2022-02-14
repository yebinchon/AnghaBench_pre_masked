
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct radius_msg {size_t attr_used; TYPE_1__* hdr; } ;
struct radius_attr_hdr {scalar_t__ type; int length; } ;
struct TYPE_2__ {scalar_t__* authenticator; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__ const**,size_t*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,scalar_t__*,int) ;
 scalar_t__* FUNC_4 (scalar_t__ const*,size_t) ;
 struct radius_attr_hdr* FUNC_5 (struct radius_msg*,size_t) ;

char * FUNC_6(struct radius_msg *VAR_1, int *VAR_2,
          const u8 *VAR_3, size_t VAR_4,
          struct radius_msg *VAR_5, size_t VAR_6)
{
 u8 *VAR_7 = ((void*)0);
 size_t VAR_8;
 const u8 *VAR_9;
 u8 *VAR_10;
 const u8 *VAR_11[3];
 size_t VAR_12[3];
 u8 VAR_13[16];
 u8 *VAR_14;
 size_t VAR_15, VAR_16 = 0;
 struct radius_attr_hdr *VAR_17;
 const u8 *VAR_18;
 size_t VAR_19;
 const u8 *VAR_20 = ((void*)0);
 size_t VAR_21 = -1;
 char *VAR_22 = ((void*)0);


 for (VAR_15 = 0; VAR_15 < VAR_1->attr_used; VAR_15++) {
  VAR_17 = FUNC_5(VAR_1, VAR_15);
  if (VAR_17 == ((void*)0) ||
      VAR_17->type != VAR_0) {
   continue;
  }
  if (VAR_17->length <= 5)
   continue;
  VAR_18 = (const u8 *) (VAR_17 + 1);
  VAR_19 = VAR_17->length - sizeof(*VAR_17);
  if (VAR_19 <= 3 || VAR_19 % 16 != 3)
   continue;
  VAR_16++;
  if (VAR_16 <= VAR_6)
   continue;

  VAR_20 = VAR_18;
  VAR_21 = VAR_19;
  break;
 }
 if (VAR_20 == ((void*)0))
  goto out;


 VAR_7 = FUNC_4(VAR_20, VAR_21);
 if (VAR_7 == ((void*)0))
  goto out;
 VAR_8 = VAR_21;


 VAR_9 = VAR_7 + 1;
 VAR_10 = VAR_7 + 3;


 VAR_14 = VAR_7 + VAR_8 - 16;
 while (VAR_14 >= VAR_10 + 16) {
  VAR_11[0] = VAR_3;
  VAR_12[0] = VAR_4;
  VAR_11[1] = VAR_14 - 16;
  VAR_12[1] = 16;
  FUNC_0(2, VAR_11, VAR_12, VAR_13);

  for (VAR_15 = 0; VAR_15 < 16; VAR_15++)
   VAR_14[VAR_15] ^= VAR_13[VAR_15];

  VAR_14 -= 16;
 }


 if (VAR_10 != VAR_14)
  goto out;
 VAR_11[0] = VAR_3;
 VAR_12[0] = VAR_4;
 VAR_11[1] = VAR_5->hdr->authenticator;
 VAR_12[1] = 16;
 VAR_11[2] = VAR_9;
 VAR_12[2] = 2;
 FUNC_0(3, VAR_11, VAR_12, VAR_13);

 for (VAR_15 = 0; VAR_15 < 16; VAR_15++)
  VAR_14[VAR_15] ^= VAR_13[VAR_15];


 *VAR_2 = (unsigned char) VAR_10[0];
 if ((u8 *) (VAR_10 + *VAR_2) >= (u8 *) (VAR_7 + VAR_8)) {

  goto out;
 }
 if (*VAR_2 == 0) {

  goto out;
 }


 VAR_22 = FUNC_2(*VAR_2);
 if (VAR_22)
  FUNC_3(VAR_22, VAR_10 + 1, *VAR_2);

out:

 FUNC_1(VAR_7);
 return VAR_22;
}
