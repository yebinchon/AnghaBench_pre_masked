
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_disk {int archive; int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct archive_write_disk *VAR_3)
{
 static int VAR_4 = 0;



 if (FUNC_0(VAR_3->entry) != 0 && !VAR_4) {
  VAR_4 = 1;
  FUNC_1(&VAR_3->archive, VAR_0,
      "Cannot restore extended attributes on this system");
  return (VAR_2);
 }

 return (VAR_1);
}
