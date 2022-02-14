
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int ni_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,char const*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_6)
{
 struct nameidata VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7, VAR_2, VAR_0 | VAR_1, VAR_4, VAR_6, VAR_5);
 VAR_8 = FUNC_2(&VAR_7);
 if (!VAR_8)
  FUNC_3(VAR_7.ni_vp);
 FUNC_0(&VAR_7, VAR_3);
 return (VAR_8 != 0) ? 0 : 1;
}
