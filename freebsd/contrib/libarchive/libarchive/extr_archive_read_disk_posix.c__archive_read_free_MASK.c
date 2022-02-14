
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; scalar_t__ magic; int error_string; } ;
struct archive_read_disk {TYPE_1__ archive; int entry; int * lookup_uname_data; int (* cleanup_uname ) (int *) ;int * lookup_gname_data; int (* cleanup_gname ) (int *) ;int tree; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct archive*,int ,int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct archive_read_disk*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct archive *VAR_5)
{
 struct archive_read_disk *VAR_6 = (struct archive_read_disk *)VAR_5;
 int VAR_7;

 if (VAR_5 == ((void*)0))
  return (VAR_0);
 FUNC_2(VAR_5, VAR_1,
     VAR_2 | VAR_4, "archive_read_free");

 if (VAR_6->archive.state != VAR_3)
  VAR_7 = FUNC_1(&VAR_6->archive);
 else
  VAR_7 = VAR_0;

 FUNC_8(VAR_6->tree);
 if (VAR_6->cleanup_gname != ((void*)0) && VAR_6->lookup_gname_data != ((void*)0))
  (VAR_6->cleanup_gname)(VAR_6->lookup_gname_data);
 if (VAR_6->cleanup_uname != ((void*)0) && VAR_6->lookup_uname_data != ((void*)0))
  (VAR_6->cleanup_uname)(VAR_6->lookup_uname_data);
 FUNC_4(&VAR_6->archive.error_string);
 FUNC_3(VAR_6->entry);
 VAR_6->archive.magic = 0;
 FUNC_0(&VAR_6->archive);
 FUNC_5(VAR_6);
 return (VAR_7);
}
