
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descr {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(struct descr *VAR_2)
{
    if (VAR_2->type == VAR_0)
 return "udp";
    else if (VAR_2->type == VAR_1)
 return "tcp";
    return "unknown";
}
