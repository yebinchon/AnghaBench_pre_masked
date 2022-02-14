
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {unsigned int capture_frlog; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned int
FUNC_1(struct rme96 *VAR_2)
{
 return (FUNC_0(VAR_2->iobase + VAR_0)
  & VAR_1) >> VAR_2->capture_frlog;
}
