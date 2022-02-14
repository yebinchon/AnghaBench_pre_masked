
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sge_fl {scalar_t__ size; scalar_t__ credits; } ;
typedef int adapter_t ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,struct sge_fl*,int ) ;

__attribute__((used)) static __inline void
FUNC_2(adapter_t *VAR_0, struct sge_fl *VAR_1, int VAR_2)
{
 uint32_t VAR_3 = VAR_1->size - VAR_1->credits;

 if (VAR_3 > 0)
  FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_2, VAR_3));
}
