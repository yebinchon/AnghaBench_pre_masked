
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int flags; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct archive *VAR_2, void *VAR_3, struct archive_entry *VAR_4)
{
 struct bsdtar *VAR_5 = (struct bsdtar *)VAR_3;
 if ((VAR_5->flags & VAR_0) &&
     !FUNC_3("add '%s'", FUNC_0(VAR_4)))
  return (0);


 if (((VAR_5->flags & VAR_1) == 0) &&
     FUNC_1(VAR_2))
  FUNC_2(VAR_2);

 return (1);
}
