
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_tq {int work; int tq; int ctxul; struct octeon_device* ctxptr; } ;


 int FUNC_0 (struct octeon_device*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, int VAR_1)
{
 struct lio_tq *VAR_2 = (struct lio_tq *)VAR_0;
 struct octeon_device *VAR_3 = VAR_2->ctxptr;
 uint64_t VAR_4 = VAR_2->ctxul;
 uint32_t VAR_5 = 10;

 FUNC_0(VAR_3, VAR_4);
 FUNC_2(VAR_2->tq, &VAR_2->work,
      FUNC_1(VAR_5));
}
