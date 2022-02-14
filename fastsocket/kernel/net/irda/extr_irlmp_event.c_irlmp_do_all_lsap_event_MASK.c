
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lsap_cb {int dummy; } ;
typedef int hashbin_t ;
typedef int IRLMP_EVENT ;


 int * FUNC_0 (int *,long,int *,void*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct lsap_cb*,int ,int *) ;

__attribute__((used)) static inline void
FUNC_3(hashbin_t * VAR_0,
   IRLMP_EVENT VAR_1)
{
 struct lsap_cb *VAR_2;
 struct lsap_cb *VAR_3;
 VAR_2 = (struct lsap_cb *) FUNC_1(VAR_0);

 while (((void*)0) != FUNC_0(VAR_0,
      (long) VAR_2,
      ((void*)0),
      (void *) &VAR_3) ) {
  FUNC_2(VAR_2, VAR_1, ((void*)0));
  VAR_2 = VAR_3;
 }
}
