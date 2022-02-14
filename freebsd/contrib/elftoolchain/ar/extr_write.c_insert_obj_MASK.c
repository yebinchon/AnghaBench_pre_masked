
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdar {int options; int v_obj; } ;
struct ar_obj {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ar_obj*,struct ar_obj*,int ) ;
 int FUNC_1 (struct ar_obj*,struct ar_obj*,int ) ;
 int FUNC_2 (int *,struct ar_obj*,int ) ;
 int FUNC_3 (struct bsdar*,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct bsdar *VAR_3, struct ar_obj *VAR_4, struct ar_obj *VAR_5)
{
 if (VAR_4 == ((void*)0))
  FUNC_3(VAR_3, 0, "try to insert a null obj");

 if (VAR_5 == ((void*)0) || VAR_4 == VAR_5)





  goto tail;

 if (VAR_3->options & VAR_1) {
  FUNC_1(VAR_5, VAR_4, VAR_2);
  return;
 }
 if (VAR_3->options & VAR_0) {
  FUNC_0(&VAR_3->v_obj, VAR_5, VAR_4, VAR_2);
  return;
 }

tail:
 FUNC_2(&VAR_3->v_obj, VAR_4, VAR_2);

}
