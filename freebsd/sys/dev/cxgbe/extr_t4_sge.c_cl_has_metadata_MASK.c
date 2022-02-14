
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {int flags; } ;
struct cluster_layout {scalar_t__ region1; scalar_t__ region3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1(struct sge_fl *VAR_2, struct cluster_layout *VAR_3)
{
 int VAR_4 = VAR_2->flags & VAR_1 || VAR_3->region1 > 0;

 if (VAR_4)
  FUNC_0(VAR_3->region3 >= VAR_0);

 return (VAR_4);
}
