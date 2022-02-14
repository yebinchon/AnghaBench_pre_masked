
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read_disk {int flags; TYPE_1__* tree; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (struct archive*) ;
 int VAR_4 ;

int
FUNC_2(struct archive *VAR_5, int VAR_6)
{
 struct archive_read_disk *VAR_7 = (struct archive_read_disk *)VAR_5;
 int VAR_8 = VAR_0;

 FUNC_0(VAR_5, VAR_2,
     VAR_3, "archive_read_disk_honor_nodump");

 VAR_7->flags = VAR_6;

 if (VAR_6 & VAR_1)
  VAR_8 = FUNC_1(VAR_5);
 else {
  if (VAR_7->tree != ((void*)0))
   VAR_7->tree->flags &= ~VAR_4;
 }
 return (VAR_8);
}
