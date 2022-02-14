
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct archive_read_disk {int flags; TYPE_1__ archive; int * tree; int symlink_mode; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int * FUNC_1 (char const*,int ,int) ;
 int * FUNC_2 (int *,char const*,int) ;

__attribute__((used)) static int
FUNC_3(struct archive *VAR_6, const char *VAR_7)
{
 struct archive_read_disk *VAR_8 = (struct archive_read_disk *)VAR_6;

 if (VAR_8->tree != ((void*)0))
  VAR_8->tree = FUNC_2(VAR_8->tree, VAR_7,
      VAR_8->flags & VAR_2);
 else
  VAR_8->tree = FUNC_1(VAR_7, VAR_8->symlink_mode,
      VAR_8->flags & VAR_2);
 if (VAR_8->tree == ((void*)0)) {
  FUNC_0(&VAR_8->archive, VAR_5,
      "Can't allocate tar data");
  VAR_8->archive.state = VAR_3;
  return (VAR_0);
 }
 VAR_8->archive.state = VAR_4;

 return (VAR_1);
}
