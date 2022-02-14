
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,char*,int *) ;
 int VAR_4 ;
 int FUNC_2 (struct nameidata*) ;

int
FUNC_3(struct nameidata *VAR_5, char *VAR_6, NFSPROC_T *VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_5, VAR_2, VAR_0 | VAR_1, VAR_4, VAR_6,
     VAR_7);
 VAR_8 = FUNC_2(VAR_5);
 if (!VAR_8) {
  FUNC_0(VAR_5, VAR_3);
 }
 return (VAR_8);
}
