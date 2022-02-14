
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_nsec; } ;
struct TYPE_3__ {int tv_nsec; } ;
struct stat {int st_mtime_n; int st_umtime; int st_mtime_usec; TYPE_2__ st_mtim; TYPE_1__ st_mtimespec; int st_mtime; } ;
struct archive_entry {int dummy; } ;


 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct stat *VAR_0, struct archive_entry *VAR_1)
{


 if (FUNC_2(VAR_0->st_mtime) < FUNC_2(FUNC_0(VAR_1)))
  return (1);

 if (FUNC_2(VAR_0->st_mtime) > FUNC_2(FUNC_0(VAR_1)))
  return (0);
 return (0);
}
