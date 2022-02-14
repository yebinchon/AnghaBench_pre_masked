
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_ring {int flags; int ts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_1(struct netmap_ring *VAR_2)
{
 if (VAR_1 == 0 || VAR_2->flags & VAR_0) {
  FUNC_0(&VAR_2->ts);
 }
}
