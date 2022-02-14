
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snprintf_state {scalar_t__ s; scalar_t__ theend; } ;



__attribute__((used)) static int
FUNC_0 (struct snprintf_state *VAR_0, size_t VAR_1)
{
    return VAR_0->s + VAR_1 > VAR_0->theend;
}
