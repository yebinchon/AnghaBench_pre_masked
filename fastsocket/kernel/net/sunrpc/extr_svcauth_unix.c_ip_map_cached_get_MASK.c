
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_lock; struct ip_map* xpt_auth_cache; int xpt_flags; } ;
struct ip_map {int h; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static inline struct ip_map *
FUNC_6(struct svc_xprt *VAR_2)
{
 struct ip_map *VAR_3 = ((void*)0);

 if (FUNC_5(VAR_0, &VAR_2->xpt_flags)) {
  FUNC_3(&VAR_2->xpt_lock);
  VAR_3 = VAR_2->xpt_auth_cache;
  if (VAR_3 != ((void*)0)) {
   if (!FUNC_2(&VAR_3->h)) {





    VAR_2->xpt_auth_cache = ((void*)0);
    FUNC_4(&VAR_2->xpt_lock);
    FUNC_1(&VAR_3->h, &VAR_1);
    return ((void*)0);
   }
   FUNC_0(&VAR_3->h);
  }
  FUNC_4(&VAR_2->xpt_lock);
 }
 return VAR_3;
}
