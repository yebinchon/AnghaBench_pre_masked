
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trail {scalar_t__ tr_magic; int tr_filefd; char* tr_filename; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(struct trail *VAR_1)
{

 FUNC_0(VAR_1->tr_magic == VAR_0);
 FUNC_0(VAR_1->tr_filefd == -1);

 VAR_1->tr_filename[0] = '\0';
}
