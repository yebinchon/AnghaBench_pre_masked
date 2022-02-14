
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int features; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct clock_event_device *VAR_1)
{
 return !(VAR_1->features & VAR_0);
}
