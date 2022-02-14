
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int dummy; } ;
struct lio_tq {int work; int tq; scalar_t__ ctxptr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*,int ) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, int VAR_1)
{
 struct lio_tq *VAR_2 = (struct lio_tq *)VAR_0;
 struct octeon_device *VAR_3 = (struct octeon_device *)VAR_2->ctxptr;

 FUNC_1(VAR_3, 0);
 FUNC_2(VAR_2->tq, &VAR_2->work, FUNC_0(50));
}
