
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {scalar_t__ f_namemax; int f_mntonname; int f_fstypename; } ;
typedef int atf_tc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int const*,char*) ;
 int FUNC_6 (char const*,struct statvfs*,int ) ;

__attribute__((used)) static void
FUNC_7(const atf_tc_t *VAR_2, const char *VAR_3)
{
 const char *VAR_4 = FUNC_5(VAR_2, "X-fs.mntname");
 struct statvfs VAR_5;

 if (FUNC_6(VAR_3, &VAR_5, VAR_1) == -1)
  FUNC_4("statvfs");

 FUNC_0(VAR_5.f_namemax > 0 && VAR_5.f_namemax <= VAR_0);
 if (!(FUNC_3(VAR_2) || FUNC_2(VAR_2)))
  FUNC_1(VAR_5.f_fstypename, VAR_4);
 FUNC_1(VAR_5.f_mntonname, VAR_3);
}
