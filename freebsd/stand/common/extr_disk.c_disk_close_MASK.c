
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_disk {int table; } ;
struct TYPE_2__ {scalar_t__ d_opendata; } ;
struct disk_devdesc {TYPE_1__ dd; } ;


 int FUNC_0 (char*,int ,struct open_disk*) ;
 int FUNC_1 (struct disk_devdesc*) ;
 int FUNC_2 (struct open_disk*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct disk_devdesc *VAR_0)
{
 struct open_disk *VAR_1;

 VAR_1 = (struct open_disk *)VAR_0->dd.d_opendata;
 FUNC_0("%s closed => %p", FUNC_1(VAR_0), VAR_1);
 FUNC_3(VAR_1->table);
 FUNC_2(VAR_1);
 return (0);
}
