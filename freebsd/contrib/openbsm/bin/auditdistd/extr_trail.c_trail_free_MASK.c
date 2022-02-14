
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trail {scalar_t__ tr_magic; int tr_filefd; int tr_dirfp; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct trail*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct trail*) ;
 int FUNC_4 (struct trail*) ;

void
FUNC_5(struct trail *VAR_1)
{

 FUNC_0(VAR_1->tr_magic == VAR_0);

 if (VAR_1->tr_filefd != -1)
  FUNC_4(VAR_1);
 FUNC_2(VAR_1->tr_dirfp);
 FUNC_1(VAR_1, sizeof(*VAR_1));
 VAR_1->tr_magic = 0;
 VAR_1->tr_filefd = -1;
 FUNC_3(VAR_1);
}
