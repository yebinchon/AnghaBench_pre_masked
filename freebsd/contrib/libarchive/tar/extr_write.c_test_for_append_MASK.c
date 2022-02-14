
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct bsdtar {int * filename; int * names_from_file; int ** argv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,char*,...) ;
 scalar_t__ FUNC_3 (int *,struct stat*) ;

__attribute__((used)) static void
FUNC_4(struct bsdtar *VAR_0)
{
 struct stat VAR_1;

 if (*VAR_0->argv == ((void*)0) && VAR_0->names_from_file == ((void*)0))
  FUNC_2(1, 0, "no files or directories specified");
 if (VAR_0->filename == ((void*)0))
  FUNC_2(1, 0, "Cannot append to stdout.");

 if (FUNC_3(VAR_0->filename, &VAR_1) != 0)
  return;

 if (!FUNC_1(VAR_1.st_mode) && !FUNC_0(VAR_1.st_mode))
  FUNC_2(1, 0,
      "Cannot append to %s: not a regular file.",
      VAR_0->filename);







}
