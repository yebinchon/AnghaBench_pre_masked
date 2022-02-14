
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct isoent {int dummy; } ;
struct TYPE_6__ {int s; } ;
struct TYPE_7__ {TYPE_4__* boot; TYPE_2__ boot_filename; } ;
struct iso9660 {TYPE_3__ el_torito; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
struct TYPE_8__ {TYPE_1__* file; } ;
struct TYPE_5__ {int boot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 TYPE_4__* FUNC_1 (struct isoent*,int ) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_4, struct isoent *VAR_5)
{
 struct iso9660 *VAR_6 = VAR_4->format_data;


 VAR_6->el_torito.boot = FUNC_1(VAR_5,
     VAR_6->el_torito.boot_filename.s);
 if (VAR_6->el_torito.boot == ((void*)0)) {
  FUNC_0(&VAR_4->archive, VAR_0,
      "Can't find the boot image file ``%s''",
      VAR_6->el_torito.boot_filename.s);
  return (VAR_1);
 }
 VAR_6->el_torito.boot->file->boot = VAR_3;
 return (VAR_2);
}
