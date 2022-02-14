
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_4__ {int tv_usec; int tv_sec; } ;
struct TYPE_5__ {TYPE_1__ _timeout; } ;
typedef TYPE_2__ ldns_resolver ;



void
FUNC_0(ldns_resolver *VAR_0, struct timeval VAR_1)
{
 VAR_0->_timeout.tv_sec = VAR_1.tv_sec;
 VAR_0->_timeout.tv_usec = VAR_1.tv_usec;
}
