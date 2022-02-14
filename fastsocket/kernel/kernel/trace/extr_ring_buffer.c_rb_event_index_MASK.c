
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline unsigned
FUNC_0(struct ring_buffer_event *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2;

 return (VAR_3 & ~VAR_1) - VAR_0;
}
