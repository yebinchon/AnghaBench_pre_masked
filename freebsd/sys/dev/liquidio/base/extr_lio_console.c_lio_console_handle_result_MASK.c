
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {struct lio_console* console; } ;
struct lio_console {scalar_t__ waiting; } ;



__attribute__((used)) static void
FUNC_0(struct octeon_device *VAR_0, size_t VAR_1)
{
 struct lio_console *VAR_2;

 VAR_2 = &VAR_0->console[VAR_1];

 VAR_2->waiting = 0;
}
