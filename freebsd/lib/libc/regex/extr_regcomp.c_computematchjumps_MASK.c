
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {int mlen; int* matchjump; scalar_t__* must; } ;
struct parse {scalar_t__ error; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct parse *VAR_0, struct re_guts *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;
 int* VAR_5;





 if (VAR_0->error != 0)
  return;

 VAR_5 = (int*) FUNC_2(VAR_1->mlen * sizeof(int));
 if (VAR_5 == ((void*)0)) {
  VAR_1->matchjump = ((void*)0);
  return;
 }

 VAR_1->matchjump = (int*) FUNC_2(VAR_1->mlen * sizeof(int));
 if (VAR_1->matchjump == ((void*)0)) {
  FUNC_1(VAR_5);
  return;
 }


 for (VAR_2 = 0; VAR_2 < VAR_1->mlen; VAR_2++)
  VAR_1->matchjump[VAR_2] = 2*VAR_1->mlen - VAR_2 - 1;


 for (VAR_2 = VAR_1->mlen - 1, VAR_3 = VAR_1->mlen; VAR_2 >= 0;
     VAR_2--, VAR_3--) {
  VAR_5[VAR_2] = VAR_3;







  while (VAR_3 < VAR_1->mlen
      && VAR_1->must[VAR_2] != VAR_1->must[VAR_3]) {
   VAR_1->matchjump[VAR_3] = FUNC_0(VAR_1->matchjump[VAR_3],
       VAR_1->mlen - VAR_2 - 1);
   VAR_3 = VAR_5[VAR_3];
  }
 }





 for (VAR_2 = 0; VAR_2 <= VAR_3; VAR_2++)
  VAR_1->matchjump[VAR_2] = FUNC_0(VAR_1->matchjump[VAR_2],
      VAR_1->mlen + VAR_3 - VAR_2);

        VAR_4 = VAR_5[VAR_3];
        while (VAR_3 < VAR_1->mlen) {
                while (VAR_3 <= VAR_4 && VAR_3 < VAR_1->mlen) {
                        VAR_1->matchjump[VAR_3] = FUNC_0(VAR_1->matchjump[VAR_3],
       VAR_1->mlen + VAR_4 - VAR_3);
                        VAR_3++;
                }
  if (VAR_3 < VAR_1->mlen)
                 VAR_4 = VAR_5[VAR_4];
        }

 FUNC_1(VAR_5);
}
