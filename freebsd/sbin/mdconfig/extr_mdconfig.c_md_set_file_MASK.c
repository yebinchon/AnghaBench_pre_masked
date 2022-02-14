
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {scalar_t__ st_size; int st_mode; } ;
struct TYPE_2__ {scalar_t__ md_mediasize; int md_file; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (int,struct stat*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (char const*,int ) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2)
{
 struct stat VAR_3;
 int VAR_4;

 if (FUNC_6(VAR_2, VAR_1.md_file) == ((void*)0))
  FUNC_2(1, "could not find full path for %s", VAR_2);
 VAR_4 = FUNC_5(VAR_1.md_file, VAR_0);
 if (VAR_4 < 0)
  FUNC_2(1, "could not open %s", VAR_2);
 if (FUNC_4(VAR_4, &VAR_3) == -1)
  FUNC_2(1, "could not stat %s", VAR_2);
 if (!FUNC_0(VAR_3.st_mode))
  FUNC_3(1, "%s is not a regular file", VAR_2);
 if (VAR_1.md_mediasize == 0)
  VAR_1.md_mediasize = VAR_3.st_size;
 FUNC_1(VAR_4);
}
