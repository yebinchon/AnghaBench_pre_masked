
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* levels; } ;
typedef TYPE_1__ sb_devc ;


 int FUNC_0 (int*) ;
 int VAR_0 ;



 int FUNC_1 (TYPE_1__*,int,int) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_2(sb_devc * VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 switch (VAR_3)
 {
  case 128:
   FUNC_1(VAR_2, 0x0b, 96 - (96 * VAR_4 / 100));
   FUNC_1(VAR_2, 0x0c, 96 - (96 * VAR_5 / 100));
   break;

  case 130:
  case 129:
   VAR_2->levels[VAR_3] = VAR_4 | (VAR_5 << 8);

   VAR_7 = ((VAR_2->levels[129] & 0xff) * 16 / (unsigned) 100) << 4;
   VAR_7 |= ((VAR_2->levels[130] & 0xff) * 16 / (unsigned) 100) & 0x0f;
   FUNC_1(VAR_2, 0x0d, VAR_7);


   VAR_7 = (((VAR_2->levels[129] >> 8) & 0xff) * 16 / (unsigned) 100) << 4;
   VAR_7 |= (((VAR_2->levels[130] >> 8) & 0xff) * 16 / (unsigned) 100) & 0x0f;
   FUNC_1(VAR_2, 0x0e, VAR_7);

   break;

  default:

   if (VAR_3 < 0 || VAR_3 >= FUNC_0(VAR_1))
    return -VAR_0;
   VAR_6 = VAR_1[VAR_3];
   if (VAR_6 == 0)
    return -VAR_0;
   FUNC_1(VAR_2, VAR_6, (24 - (24 * VAR_4 / 100)) | 0x20);
   FUNC_1(VAR_2, VAR_6 + 1, (24 - (24 * VAR_5 / 100)) | 0x40);
 }

 VAR_2->levels[VAR_3] = VAR_4 | (VAR_5 << 8);
 return VAR_4 | (VAR_5 << 8);
}
