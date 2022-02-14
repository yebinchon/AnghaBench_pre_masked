
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {int s; } ;
struct TYPE_9__ {unsigned char platform_id; unsigned char media_type; int boot_load_seg; unsigned char system_type; int boot_load_size; TYPE_3__* boot; TYPE_5__ id; } ;
struct iso9660 {TYPE_4__ el_torito; } ;
struct archive_write {struct iso9660* format_data; } ;
struct TYPE_8__ {TYPE_2__* file; } ;
struct TYPE_6__ {int location; } ;
struct TYPE_7__ {TYPE_1__ content; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ) ;
 int FUNC_5 (char*,int ,int) ;
 unsigned char* FUNC_6 (struct archive_write*) ;
 int FUNC_7 (struct archive_write*,int) ;

__attribute__((used)) static int
FUNC_8(struct archive_write *VAR_2)
{
 struct iso9660 *VAR_3 = VAR_2->format_data;
 unsigned char *VAR_4;
 unsigned char *VAR_5;
 uint16_t VAR_6, *VAR_7;

 VAR_4 = FUNC_6(VAR_2);
 FUNC_2(VAR_4, 0, VAR_1);
 VAR_5 = VAR_4;




 VAR_5[0] = 1;

 VAR_5[1] = VAR_3->el_torito.platform_id;

 VAR_5[2] = VAR_5[3] = 0;

 if (FUNC_1(&(VAR_3->el_torito.id)) > 0)
  FUNC_5((char *)VAR_5+4, VAR_3->el_torito.id.s, 23);
 VAR_5[27] = 0;

 VAR_5[28] = VAR_5[29] = 0;

 VAR_5[30] = 0x55;
 VAR_5[31] = 0xAA;

 VAR_6 = 0;
 VAR_7 = (uint16_t *)VAR_4;
 while (VAR_7 < (uint16_t *)&VAR_4[32])
  VAR_6 += FUNC_0(VAR_7++);
 FUNC_3(&VAR_4[28], (~VAR_6) + 1);




 VAR_5 = &VAR_4[32];

 VAR_5[0] = 0x88;

 VAR_5[1] = VAR_3->el_torito.media_type;

 if (VAR_3->el_torito.media_type == VAR_0)
  FUNC_3(&VAR_5[2], VAR_3->el_torito.boot_load_seg);
 else
  FUNC_3(&VAR_5[2], 0);

 VAR_5[4] = VAR_3->el_torito.system_type;

 VAR_5[5] = 0;

 if (VAR_3->el_torito.media_type == VAR_0)
  FUNC_3(&VAR_5[6], VAR_3->el_torito.boot_load_size);
 else
  FUNC_3(&VAR_5[6], 1);

 FUNC_4(&VAR_5[8],
     VAR_3->el_torito.boot->file->content.location);

 FUNC_2(&VAR_5[12], 0, 20);

 return (FUNC_7(VAR_2, VAR_1));
}
