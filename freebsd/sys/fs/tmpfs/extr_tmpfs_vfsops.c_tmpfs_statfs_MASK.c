
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpfs_mount {scalar_t__ tm_pages_max; size_t tm_nodes_inuse; size_t tm_nodes_max; } ;
struct statfs {scalar_t__ f_blocks; size_t f_bavail; size_t f_bfree; size_t f_files; size_t f_ffree; void* f_bsize; void* f_iosize; } ;
struct mount {int dummy; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tmpfs_mount* FUNC_0 (struct mount*) ;
 scalar_t__ FUNC_1 () ;
 size_t FUNC_2 (struct tmpfs_mount*) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_2, struct statfs *VAR_3)
{
 struct tmpfs_mount *VAR_4;
 size_t VAR_5;

 VAR_4 = FUNC_0(VAR_2);

 VAR_3->f_iosize = VAR_0;
 VAR_3->f_bsize = VAR_0;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_4->tm_pages_max != VAR_1)
   VAR_3->f_blocks = VAR_4->tm_pages_max;
 else
   VAR_3->f_blocks = VAR_5 + FUNC_1();
 if (VAR_3->f_blocks <= VAR_5)
  VAR_3->f_bavail = 0;
 else
  VAR_3->f_bavail = VAR_3->f_blocks - VAR_5;
 VAR_3->f_bfree = VAR_3->f_bavail;
 VAR_5 = VAR_4->tm_nodes_inuse;
 VAR_3->f_files = VAR_4->tm_nodes_max;
 if (VAR_3->f_files <= VAR_5)
  VAR_3->f_ffree = 0;
 else
  VAR_3->f_ffree = VAR_3->f_files - VAR_5;


 return 0;
}
