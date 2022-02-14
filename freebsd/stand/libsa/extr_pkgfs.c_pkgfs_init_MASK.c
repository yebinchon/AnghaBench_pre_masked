
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct package {struct package* pkg_chain; } ;
struct fs_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 struct fs_ops* VAR_3 ;
 int FUNC_1 (int,struct package**) ;
 int FUNC_2 (char const*,int ) ;
 struct package* VAR_4 ;
 int FUNC_3 () ;
 struct fs_ops VAR_5 ;

int
FUNC_4(const char *VAR_6, struct fs_ops *VAR_7)
{
 struct package *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = ((void*)0);
 if (VAR_7 != &VAR_5)
  FUNC_3();

 VAR_3 = VAR_7;

 VAR_10 = FUNC_2(VAR_6, VAR_1);

 VAR_3 = ((void*)0);

 if (VAR_10 == -1)
  return (VAR_2);

 VAR_9 = FUNC_1(VAR_10, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_10);
  return (VAR_9);
 }

 if (VAR_8 == ((void*)0))
  return (VAR_0);

 VAR_8->pkg_chain = VAR_4;
 VAR_4 = VAR_8;
 VAR_3 = &VAR_5;
 return (0);
}
