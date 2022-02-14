
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct print_args {char* prefix; int verbose; struct disk_devdesc* dev; } ;
struct open_disk {int table; } ;
struct TYPE_2__ {scalar_t__ d_opendata; } ;
struct disk_devdesc {TYPE_1__ dd; } ;


 int FUNC_0 (int ,struct print_args*,int ) ;
 int VAR_0 ;

int
FUNC_1(struct disk_devdesc *VAR_1, char *VAR_2, int VAR_3)
{
 struct open_disk *VAR_4;
 struct print_args VAR_5;


 VAR_4 = (struct open_disk *)VAR_1->dd.d_opendata;
 VAR_5.dev = VAR_1;
 VAR_5.prefix = VAR_2;
 VAR_5.verbose = VAR_3;
 return (FUNC_0(VAR_4->table, &VAR_5, VAR_0));
}
