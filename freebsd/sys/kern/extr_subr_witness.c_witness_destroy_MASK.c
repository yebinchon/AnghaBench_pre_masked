
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct witness {scalar_t__ w_refcount; } ;
struct lock_object {int lo_flags; struct witness* lo_witness; int lo_name; } ;
struct lock_class {int lc_name; } ;


 struct lock_class* FUNC_0 (struct lock_object*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct witness*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_6(struct lock_object *VAR_3)
{
 struct lock_class *VAR_4;
 struct witness *VAR_5;

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_2)
  FUNC_5("lock (%s) %s destroyed while witness_cold",
      VAR_4->lc_name, VAR_3->lo_name);


 if ((VAR_3->lo_flags & VAR_0) == 0 || VAR_3->lo_witness == ((void*)0))
  return;
 VAR_5 = VAR_3->lo_witness;

 FUNC_3(&VAR_1);
 FUNC_1(VAR_5->w_refcount > 0);
 VAR_5->w_refcount--;

 if (VAR_5->w_refcount == 0)
  FUNC_2(VAR_5);
 FUNC_4(&VAR_1);
}
