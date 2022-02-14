
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* catalog; } ;
struct iso9660 {TYPE_4__ el_torito; } ;
struct archive_write {struct iso9660* format_data; } ;
struct TYPE_7__ {TYPE_2__* file; } ;
struct TYPE_5__ {int location; } ;
struct TYPE_6__ {TYPE_1__ content; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (unsigned char*,int,int) ;
 unsigned char* FUNC_4 (struct archive_write*) ;
 int FUNC_5 (struct archive_write*,int) ;

__attribute__((used)) static int
FUNC_6(struct archive_write *VAR_2)
{
 struct iso9660 *VAR_3;
 unsigned char *VAR_4;

 VAR_3 = VAR_2->format_data;
 VAR_4 = FUNC_4(VAR_2) -1;

 FUNC_1(VAR_4, VAR_1, 1);

 FUNC_0(VAR_4+8, "EL TORITO SPECIFICATION", 23);
 FUNC_3(VAR_4, 8+23, 39);

 FUNC_3(VAR_4, 40, 71);

 FUNC_2(VAR_4+72,
     VAR_3->el_torito.catalog->file->content.location);

 FUNC_3(VAR_4, 76, VAR_0);

 return (FUNC_5(VAR_2, VAR_0));
}
