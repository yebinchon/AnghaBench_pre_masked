
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int mtime; } ;
struct TYPE_4__ {TYPE_1__ a; int filename; } ;
typedef TYPE_2__ SFTP_DIRENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_5, const void *VAR_6)
{
 SFTP_DIRENT *VAR_7 = *(SFTP_DIRENT **)VAR_5;
 SFTP_DIRENT *VAR_8 = *(SFTP_DIRENT **)VAR_6;
 int VAR_9 = VAR_4 & VAR_1 ? -1 : 1;


 if (VAR_4 & VAR_0)
  return (VAR_9 * FUNC_2(VAR_7->filename, VAR_8->filename));
 else if (VAR_4 & VAR_3)
  return (VAR_9 * (VAR_7->a.mtime == VAR_8->a.mtime ? 0 : (VAR_7->a.mtime < VAR_8->a.mtime ? 1 : -1)));
 else if (VAR_4 & VAR_2)
  return (VAR_9 * (VAR_7->a.size == VAR_8->a.size ? 0 : (VAR_7->a.size < VAR_8->a.size ? 1 : -1)));

 FUNC_1("Unknown ls sort type");
}
