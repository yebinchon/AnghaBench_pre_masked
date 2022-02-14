
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sge_qset {TYPE_1__* txq; } ;
struct TYPE_2__ {unsigned int processed; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static __inline void
FUNC_4(struct sge_qset *VAR_6, uint32_t VAR_7)
{
 unsigned int VAR_8;





 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8)
  VAR_6->txq[VAR_3].processed += VAR_8;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  VAR_6->txq[VAR_2].processed += VAR_8;





 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  VAR_6->txq[VAR_4].processed += VAR_8;

}
