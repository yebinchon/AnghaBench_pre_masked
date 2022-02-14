
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flash_sec_info {TYPE_1__* fsec_entry; } ;
struct flash_img_attri {int img_offset; int img_size; int img_type; int optype; void* skip_image; } ;
struct firmware {int data; } ;
struct TYPE_2__ {int type; int pad_size; int offset; } ;
typedef int POCE_SOFTC ;


 void* VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* VAR_1 ;
 int FUNC_3 (int ,int ,int,int,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(POCE_SOFTC VAR_2, const struct flash_sec_info * VAR_3,
    struct flash_img_attri *VAR_4, int VAR_5,
    const struct firmware *VAR_6, int VAR_7)
{
 if (FUNC_2(VAR_2)) {
  VAR_4->img_offset = FUNC_0(VAR_3->fsec_entry[VAR_5].offset);
  VAR_4->img_size = FUNC_0(VAR_3->fsec_entry[VAR_5].pad_size);
 }

 VAR_4->img_type = FUNC_0(VAR_3->fsec_entry[VAR_5].type);
 VAR_4->skip_image = VAR_0;
 switch (VAR_4->img_type) {
  case 133:
   VAR_4->optype = 0;
   if (FUNC_1(VAR_2)) {
    VAR_4->img_offset = 2097152;
    VAR_4->img_size = 2097152;
   }
   break;
  case 128:
   VAR_4->optype = 1;
   if (FUNC_1(VAR_2)) {
    VAR_4->img_offset = 262144;
    VAR_4->img_size = 1048576;
   }
   if (!FUNC_3(VAR_2, VAR_6->data,
      VAR_4->optype,
      VAR_4->img_offset,
      VAR_4->img_size,
      VAR_7))
    VAR_4->skip_image = VAR_1;
   break;
  case 137:
   VAR_4->optype = 2;
   if (FUNC_1(VAR_2)) {
    VAR_4->img_offset = 12582912;
    VAR_4->img_size = 524288;
   }
   break;
  case 129:
   VAR_4->optype = 3;
   if (FUNC_1(VAR_2)) {
    VAR_4->img_offset = 13107200;
    VAR_4->img_size = 524288;
   }
   break;
  case 135:
   VAR_4->optype = 8;
   if (FUNC_1(VAR_2)) {
    VAR_4->img_offset = 13631488;
    VAR_4->img_size = 524288;
   }
   break;
  case 132:
   VAR_4->optype = 9;
   if (FUNC_1(VAR_2)) {
    VAR_4->img_offset = 4194304;
    VAR_4->img_size = 2097152;
   }
   break;
  case 136:
   VAR_4->optype = 10;
   if (FUNC_1(VAR_2)) {
    VAR_4->img_offset = 6291456;
    VAR_4->img_size = 2097152;
   }
   break;
  case 134:
   VAR_4->optype = 11;
   if (FUNC_1(VAR_2)) {
    VAR_4->img_offset = 8388608;
    VAR_4->img_size = 2097152;
   }
   break;
  case 131:
   VAR_4->optype = 13;
   if (FUNC_1(VAR_2)) {
    VAR_4->img_offset = 15990784;
    VAR_4->img_size = 262144;
   }
   break;
  case 130:
   VAR_4->optype = 99;
   if (FUNC_1(VAR_2)) {
    VAR_4->img_offset = 1310720;
    VAR_4->img_size = 262144;
   }
   if (!FUNC_4(VAR_2))
    VAR_4->skip_image = VAR_1;
   break;
  default:
   VAR_4->skip_image = VAR_1;
   break;
 }

}
