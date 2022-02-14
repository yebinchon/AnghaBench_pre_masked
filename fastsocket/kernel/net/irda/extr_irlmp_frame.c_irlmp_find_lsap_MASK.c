
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lsap_cb {scalar_t__ slsap_sel; scalar_t__ dlsap_sel; } ;
struct TYPE_6__ {scalar_t__ slsap_sel; scalar_t__ dlsap_sel; struct lsap_cb* lsap; scalar_t__ valid; } ;
struct lap_cb {TYPE_1__ cache; } ;
struct TYPE_7__ {int hb_spinlock; } ;
typedef TYPE_2__ hashbin_t ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct lap_cb*,struct lsap_cb*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static struct lsap_cb *FUNC_5(struct lap_cb *VAR_2, __u8 VAR_3,
           __u8 VAR_4, int VAR_5,
           hashbin_t *VAR_6)
{
 struct lsap_cb *VAR_7;
 unsigned long VAR_8;
 FUNC_3(&VAR_6->hb_spinlock, VAR_8);

 VAR_7 = (struct lsap_cb *) FUNC_0(VAR_6);
 while (VAR_7 != ((void*)0)) {






  if ((VAR_5 == VAR_0) &&
      (VAR_7->slsap_sel == VAR_4) &&
      (VAR_7->dlsap_sel == VAR_1)) {


   VAR_7->dlsap_sel = VAR_3;
   break;
  }



  if ((VAR_7->slsap_sel == VAR_4) &&
      (VAR_7->dlsap_sel == VAR_3))
   break;

  VAR_7 = (struct lsap_cb *) FUNC_1(VAR_6);
 }




 FUNC_4(&VAR_6->hb_spinlock, VAR_8);


 return VAR_7;
}
