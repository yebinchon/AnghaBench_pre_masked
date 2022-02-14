
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aifq_idx; int aac_aifq_lock; int aac_dev; int * aac_aifq; } ;
struct aac_fib_context {int ctx_idx; scalar_t__ ctx_wrap; } ;
struct aac_fib {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *,void*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct aac_softc *VAR_3, struct aac_fib_context *VAR_4, caddr_t VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_2(VAR_3, VAR_2, "");

 FUNC_3(&VAR_3->aac_aifq_lock);
 VAR_6 = VAR_4->ctx_idx;
 if (VAR_6 == VAR_3->aifq_idx && !VAR_4->ctx_wrap) {

  FUNC_4(&VAR_3->aac_aifq_lock);
  return (VAR_1);
 }
 VAR_7 =
  FUNC_0(&VAR_3->aac_aifq[VAR_6], (void *)VAR_5, sizeof(struct aac_fib));
 if (VAR_7)
  FUNC_1(VAR_3->aac_dev,
      "aac_return_aif: copyout returned %d\n", VAR_7);
 else {
  VAR_4->ctx_wrap = 0;
  VAR_4->ctx_idx = (VAR_6 + 1) % VAR_0;
 }
 FUNC_4(&VAR_3->aac_aifq_lock);
 return(VAR_7);
}
