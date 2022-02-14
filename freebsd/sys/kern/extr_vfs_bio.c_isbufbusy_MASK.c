
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_flags; } ;


 scalar_t__ FUNC_0 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct buf *VAR_2)
{
 if (((VAR_2->b_flags & VAR_1) == 0 && FUNC_0(VAR_2)) ||
     ((VAR_2->b_flags & (VAR_0 | VAR_1)) == VAR_0))
  return (1);
 return (0);
}
