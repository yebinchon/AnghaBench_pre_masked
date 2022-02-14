
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* boot; } ;
struct iso9660 {TYPE_4__ el_torito; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
struct TYPE_7__ {TYPE_2__* file; } ;
struct TYPE_5__ {scalar_t__ header_size; } ;
struct TYPE_6__ {TYPE_1__ zisofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_3)
{
 struct iso9660 *VAR_4 = VAR_3->format_data;

 if (VAR_4->el_torito.boot->file->zisofs.header_size != 0) {
  FUNC_0(&VAR_3->archive, VAR_0,
      "We cannot extract the zisofs imaged boot file;"
      " this may not boot in being zisofs imaged");
  return (VAR_1);
 }
 return (VAR_2);
}
