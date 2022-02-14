
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usX2Y_AsyncSeq {int buffer; int ** urb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct snd_usX2Y_AsyncSeq *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (VAR_1[VAR_2].urb) {
   FUNC_2(VAR_1->urb[VAR_2]);
   FUNC_1(VAR_1->urb[VAR_2]);
   VAR_1->urb[VAR_2] = ((void*)0);
  }
 }
 FUNC_0(VAR_1->buffer);
}
