
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct parse {int dummy; } ;
struct TYPE_3__ {size_t smultis; int * multis; } ;
typedef TYPE_1__ cset ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,size_t) ;
 void* FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5( struct parse *VAR_1, cset *VAR_2, const char *VAR_3)
{
 size_t VAR_4 = VAR_2->smultis;
 void *VAR_5;

 VAR_2->smultis += FUNC_4(VAR_3) + 1;
 VAR_5 = FUNC_3(VAR_2->multis, VAR_2->smultis);
 if (VAR_5 == ((void*)0)) {
  if (VAR_2->multis)
   FUNC_1(VAR_2->multis);
  VAR_2->multis = ((void*)0);
  FUNC_0(VAR_0);
  return;
 }
 VAR_2->multis = VAR_5;

 FUNC_2(VAR_2->multis + VAR_4 - 1, VAR_3, VAR_2->smultis - VAR_4 + 1);
}
