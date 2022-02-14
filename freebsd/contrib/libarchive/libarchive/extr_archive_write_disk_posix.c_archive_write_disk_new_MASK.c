
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int vtable; int state; int magic; } ;
struct archive_write_disk {int decmpfs_compression_level; struct archive archive; int path_safe; int user_uid; int user_umask; int start_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct archive_write_disk*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

struct archive *
FUNC_7(void)
{
 struct archive_write_disk *VAR_2;

 VAR_2 = (struct archive_write_disk *)FUNC_2(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_2->archive.magic = VAR_1;

 VAR_2->archive.state = VAR_0;
 VAR_2->archive.vtable = FUNC_1();
 VAR_2->start_time = FUNC_5(((void*)0));

 FUNC_6(VAR_2->user_umask = FUNC_6(0));



 if (FUNC_0(&VAR_2->path_safe, 512) == ((void*)0)) {
  FUNC_3(VAR_2);
  return (((void*)0));
 }



 return (&VAR_2->archive);
}
