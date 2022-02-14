
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff {int * eqn; int eqn_inline; TYPE_1__* last_eqn; } ;
struct buf {char* buf; scalar_t__ sz; } ;
struct TYPE_2__ {int cdelim; int odelim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char**,char*,char*,char const*,char const*,char const*,char const*,char const*,char*) ;
 char* FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct roff *VAR_2, struct buf *VAR_3, int VAR_4)
{
 char *VAR_5, *VAR_6;
 const char *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 VAR_5 = VAR_3->buf + VAR_4;
 VAR_6 = FUNC_2(VAR_5, VAR_2->eqn == ((void*)0) ?
     VAR_2->last_eqn->odelim : VAR_2->last_eqn->cdelim);
 if (VAR_6 == ((void*)0))
  return VAR_0;

 *VAR_6++ = '\0';
 VAR_7 = VAR_8 = VAR_10 = VAR_11 = "";



 if (*VAR_3->buf != '\0') {
  if (VAR_2->eqn == ((void*)0))
   VAR_7 = "\\&";
  VAR_8 = "\n";
 }






 if (VAR_2->eqn == ((void*)0)) {
  while (*VAR_6 == ' ')
   VAR_6++;
  VAR_9 = ".EQ";
 } else
  VAR_9 = ".EN";



 if (*VAR_6 != '\0') {
  VAR_10 = "\n";
  if (VAR_2->eqn != ((void*)0))
   VAR_11 = "\\&";
 }



 VAR_3->sz = FUNC_1(&VAR_5, "%s%s%s%s%s%s%s", VAR_3->buf,
     VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_6) + 1;
 FUNC_0(VAR_3->buf);
 VAR_3->buf = VAR_5;



 VAR_2->eqn_inline = VAR_2->eqn == ((void*)0);
 return VAR_1;
}
