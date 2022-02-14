
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nline; } ;
struct FILE_INFO {int * fpi; int fname; int backch; TYPE_1__ curpos; } ;


 int VAR_0 ;
 struct FILE_INFO* FUNC_0 (int) ;
 int * FUNC_1 (char const*,char const*) ;
 int FUNC_2 (struct FILE_INFO*) ;
 int FUNC_3 (int ,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static struct FILE_INFO *
FUNC_5(
 const char *VAR_1,
 const char *VAR_2
 )
{
 struct FILE_INFO *VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_4(VAR_1);
 VAR_3 = FUNC_0(sizeof(*VAR_3) + VAR_4);
 VAR_3->curpos.nline = 1;
 VAR_3->backch = VAR_0;

 FUNC_3(VAR_3->fname, VAR_1, VAR_4);

 if (((void*)0) != VAR_2) {
  VAR_3->fpi = FUNC_1(VAR_1, VAR_2);
  if (((void*)0) == VAR_3->fpi) {
   FUNC_2(VAR_3);
   VAR_3 = ((void*)0);
  }
 }
 return VAR_3;
}
