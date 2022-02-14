
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long
FUNC_0(unsigned long VAR_0)
{

    if (VAR_0 <= 4 * 1024)
 return (4 * 1024);
    if (VAR_0 <= 8 * 1024)
 return (8 * 1024);
    if (VAR_0 <= 32 * 1024)
 return (32 * 1024);
    if (VAR_0 <= 64 * 1024)
 return (64 * 1024);
    return (VAR_0);
}
