
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct archive_read_disk {int tree; TYPE_1__ archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive*,int ,int,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_5)
{
 struct archive_read_disk *VAR_6 = (struct archive_read_disk *)VAR_5;

 FUNC_0(VAR_5, VAR_1,
     VAR_2 | VAR_4, "archive_read_close");

 if (VAR_6->archive.state != VAR_4)
  VAR_6->archive.state = VAR_3;

 FUNC_1(VAR_6->tree);

 return (VAR_0);
}
