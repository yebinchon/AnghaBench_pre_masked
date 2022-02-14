
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sf_buf {scalar_t__ ref_count; int * m; } ;


 int FUNC_0 (struct sf_buf*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,struct sf_buf*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct sf_buf*) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct sf_buf *VAR_7)
{

 if (VAR_0)
  return;

 FUNC_2(&VAR_6);
 VAR_7->ref_count--;
 if (VAR_7->ref_count == 0) {
  FUNC_1(&VAR_5, VAR_7, VAR_1);
  VAR_3--;
  if (FUNC_4(VAR_7)) {
   VAR_7->m = ((void*)0);
   FUNC_0(VAR_7, VAR_2);
  }
  if (VAR_4 > 0)
   FUNC_5(&VAR_5);
 }
 FUNC_3(&VAR_6);
}
