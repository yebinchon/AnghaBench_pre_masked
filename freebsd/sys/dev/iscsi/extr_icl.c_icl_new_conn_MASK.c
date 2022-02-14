
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtx {int dummy; } ;
struct icl_module {struct icl_conn* (* im_new_conn ) (char const*,struct mtx*) ;} ;
struct icl_conn {int dummy; } ;
struct TYPE_2__ {int sc_lock; } ;


 struct icl_module* FUNC_0 (char const*,int,int) ;
 TYPE_1__* VAR_0 ;
 struct icl_conn* FUNC_1 (char const*,struct mtx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct icl_conn *
FUNC_4(const char *VAR_1, bool VAR_2, const char *VAR_3, struct mtx *VAR_4)
{
 struct icl_module *VAR_5;
 struct icl_conn *VAR_6;

 FUNC_2(&VAR_0->sc_lock);
 VAR_5 = FUNC_0(VAR_1, VAR_2, 0);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(&VAR_0->sc_lock);
  return (((void*)0));
 }

 VAR_6 = VAR_5->im_new_conn(VAR_3, VAR_4);
 FUNC_3(&VAR_0->sc_lock);

 return (VAR_6);
}
