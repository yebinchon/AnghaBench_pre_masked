
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef void* u_char ;
struct TYPE_6__ {int l_ui; } ;
typedef TYPE_1__ l_fp ;
struct TYPE_7__ {char const* dir; char const* fname; scalar_t__ type; scalar_t__ flag; int * fp; } ;
typedef TYPE_2__ FILEGEN ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*,char const*) ;

void
FUNC_8(
 FILEGEN * VAR_2,
 const char * VAR_3,
 const char * VAR_4,
 u_int VAR_5,
 u_int VAR_6
 )
{
 int VAR_7;
 l_fp VAR_8;





 if (FUNC_6(VAR_3, VAR_2->dir) == 0 && FUNC_6(VAR_4, VAR_2->fname) == 0
     && VAR_5 == VAR_2->type && VAR_6 == VAR_2->flag)
  return;




 if (!FUNC_7(VAR_3, VAR_4))
  return;

 if (((void*)0) != VAR_2->fp) {
  FUNC_2(VAR_2->fp);
  VAR_2->fp = ((void*)0);
  VAR_7 = VAR_1;
 } else {
  VAR_7 = VAR_0;
 }

 FUNC_0(3, ("configuring filegen:\n"
      "\tdir:\t%s -> %s\n"
      "\tfname:\t%s -> %s\n"
      "\ttype:\t%d -> %d\n"
      "\tflag: %x -> %x\n",
      VAR_2->dir, VAR_3,
      VAR_2->fname, VAR_4,
      VAR_2->type, VAR_5,
      VAR_2->flag, VAR_6));

 if (FUNC_6(VAR_2->dir, VAR_3) != 0) {
  FUNC_4(VAR_2->dir);
  VAR_2->dir = FUNC_1(VAR_3);
 }

 if (FUNC_6(VAR_2->fname, VAR_4) != 0) {
  FUNC_4(VAR_2->fname);
  VAR_2->fname = FUNC_1(VAR_4);
 }
 VAR_2->type = (u_char)VAR_5;
 VAR_2->flag = (u_char)VAR_6;







 if (VAR_7) {
  FUNC_5(&VAR_8);
  FUNC_3(VAR_2, VAR_8.l_ui);
 }
}
