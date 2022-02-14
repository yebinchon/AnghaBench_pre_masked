
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring {unsigned int rdesc_count; unsigned int cur; unsigned int dirty; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct xgbe_ring *VAR_0)
{
 return (VAR_0->rdesc_count - (VAR_0->cur - VAR_0->dirty));
}
