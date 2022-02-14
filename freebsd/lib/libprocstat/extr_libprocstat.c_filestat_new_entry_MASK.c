
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filestat {int fs_fflags; int fs_uflags; int fs_fd; int fs_type; int fs_ref_count; char* fs_path; int fs_cap_rights; int fs_offset; void* fs_typedep; } ;
typedef int off_t ;
typedef int cap_rights_t ;


 struct filestat* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct filestat *
FUNC_3(void *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
    int VAR_5, off_t VAR_6, char *VAR_7, cap_rights_t *VAR_8)
{
 struct filestat *VAR_9;

 VAR_9 = FUNC_0(1, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_2("malloc()");
  return (((void*)0));
 }
 VAR_9->fs_typedep = VAR_0;
 VAR_9->fs_fflags = VAR_3;
 VAR_9->fs_uflags = VAR_4;
 VAR_9->fs_fd = VAR_2;
 VAR_9->fs_type = VAR_1;
 VAR_9->fs_ref_count = VAR_5;
 VAR_9->fs_offset = VAR_6;
 VAR_9->fs_path = VAR_7;
 if (VAR_8 != ((void*)0))
  VAR_9->fs_cap_rights = *VAR_8;
 else
  FUNC_1(&VAR_9->fs_cap_rights);
 return (VAR_9);
}
