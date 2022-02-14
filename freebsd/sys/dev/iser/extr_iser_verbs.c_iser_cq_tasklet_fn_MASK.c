
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_comp {struct ib_wc* wcs; struct ib_cq* cq; } ;
struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (struct ib_wc*) ;
 int VAR_0 ;
 int FUNC_1 (struct ib_cq*,int ,struct ib_wc* const) ;
 int FUNC_2 (struct ib_cq*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ib_wc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, int VAR_3)
{
 struct iser_comp *VAR_4 = (struct iser_comp *)VAR_2;
 struct ib_cq *VAR_5 = VAR_4->cq;
 struct ib_wc *const VAR_6 = VAR_4->wcs;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;

 while ((VAR_9 = FUNC_1(VAR_5, FUNC_0(VAR_4->wcs), VAR_6)) > 0) {
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   FUNC_3(&VAR_6[VAR_8]);

  VAR_7 += VAR_9;
  if (VAR_7 >= VAR_1)
   break;
 }





 FUNC_2(VAR_5, VAR_0);
}
