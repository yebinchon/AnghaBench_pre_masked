
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mtime; scalar_t__ st_atime; } ;
typedef int buf ;


 int FUNC_0 (int ,int,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,char*,unsigned long long,unsigned long long) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(int VAR_2, int VAR_3, const struct stat *VAR_4)
{

 char VAR_5[(20 + 7 + 2) * 2 + 2];

 (void)FUNC_3(VAR_5, sizeof(VAR_5), "T%llu 0 %llu 0\n",
     (unsigned long long) (VAR_4->st_mtime < 0 ? 0 : VAR_4->st_mtime),
     (unsigned long long) (VAR_4->st_atime < 0 ? 0 : VAR_4->st_atime));
 if (VAR_3) {
  FUNC_1(VAR_0, "File mtime %lld atime %lld\n",
      (long long)VAR_4->st_mtime, (long long)VAR_4->st_atime);
  FUNC_1(VAR_0, "Sending file timestamps: %s", VAR_5);
 }
 (void) FUNC_0(VAR_1, VAR_2, VAR_5, FUNC_4(VAR_5));
 return (FUNC_2());
}
