
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {int* charjump; int mlen; scalar_t__* must; } ;
struct parse {scalar_t__ error; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct parse *VAR_3, struct re_guts *VAR_4)
{
 int VAR_5;
 int VAR_6;


 if (VAR_3->error != 0)
  return;

 VAR_4->charjump = (int *)FUNC_0((VAR_2 + 1) * sizeof(int));
 if (VAR_4->charjump == ((void*)0))
  return;

 VAR_4->charjump = &VAR_4->charjump[-(VAR_1)];




 for (VAR_5 = VAR_1; VAR_5 < (VAR_0 + 1); VAR_5++)
  VAR_4->charjump[VAR_5] = VAR_4->mlen;






 for (VAR_6 = 0; VAR_6 < VAR_4->mlen; VAR_6++)
  VAR_4->charjump[(int)VAR_4->must[VAR_6]] = VAR_4->mlen - VAR_6 - 1;
}
