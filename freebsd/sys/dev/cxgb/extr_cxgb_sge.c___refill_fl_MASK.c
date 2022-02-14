
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {scalar_t__ credits; scalar_t__ size; } ;
typedef int adapter_t ;


 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (int *,struct sge_fl*,int ) ;

__attribute__((used)) static __inline void
FUNC_2(adapter_t *VAR_0, struct sge_fl *VAR_1)
{
 FUNC_1(VAR_0, VAR_1, FUNC_0(16U, VAR_1->size - VAR_1->credits));
}
