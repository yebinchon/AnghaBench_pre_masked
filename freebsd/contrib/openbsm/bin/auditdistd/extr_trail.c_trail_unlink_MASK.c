
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trail {scalar_t__ tr_magic; int tr_dirname; int tr_dirfp; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int ,char const*) ;
 int FUNC_3 (int ,char*,int ,char const*) ;
 int FUNC_4 (int,char const*,int ) ;

void
FUNC_5(struct trail *VAR_2, const char *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2->tr_magic == VAR_1);
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_3[0] != '\0');

 VAR_4 = FUNC_1(VAR_2->tr_dirfp);
 FUNC_0(VAR_4 >= 0);

 if (FUNC_4(VAR_4, VAR_3, 0) == -1) {
  FUNC_3(VAR_0, "Unable to remove \"%s/%s\"",
      VAR_2->tr_dirname, VAR_3);
 } else {
  FUNC_2(1, "Trail file \"%s/%s\" removed.",
      VAR_2->tr_dirname, VAR_3);
 }
}
