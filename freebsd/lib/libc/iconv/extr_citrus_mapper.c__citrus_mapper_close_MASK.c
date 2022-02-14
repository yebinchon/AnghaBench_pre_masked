
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_mapper {scalar_t__ cm_refcount; int cm_key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct _citrus_mapper*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct _citrus_mapper*) ;

void
FUNC_5(struct _citrus_mapper *VAR_3)
{

 if (VAR_3) {
  FUNC_1(&VAR_2);
  if (VAR_3->cm_refcount == VAR_0)
   goto quit;
  if (VAR_3->cm_refcount > 0) {
   if (--VAR_3->cm_refcount > 0)
    goto quit;
   FUNC_2(VAR_3, VAR_1);
   FUNC_3(VAR_3->cm_key);
  }
  FUNC_0(&VAR_2);
  FUNC_4(VAR_3);
  return;
quit:
  FUNC_0(&VAR_2);
 }
}
