
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read_disk {char symlink_mode; int follow_symlinks; TYPE_1__* tree; } ;
struct TYPE_2__ {char initial_symlink_mode; char symlink_mode; } ;



__attribute__((used)) static void
FUNC_0(struct archive_read_disk *VAR_0, char VAR_1,
    int VAR_2)
{
 VAR_0->symlink_mode = VAR_1;
 VAR_0->follow_symlinks = VAR_2;
 if (VAR_0->tree != ((void*)0)) {
  VAR_0->tree->initial_symlink_mode = VAR_0->symlink_mode;
  VAR_0->tree->symlink_mode = VAR_0->symlink_mode;
 }
}
