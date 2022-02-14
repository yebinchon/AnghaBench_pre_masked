
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_4__ {int tv_usec; int tv_sec; } ;
struct TYPE_5__ {TYPE_1__ timestamp; } ;
typedef TYPE_2__ ldns_pkt ;



void
FUNC_0(ldns_pkt *VAR_0, struct timeval VAR_1)
{
 VAR_0->timestamp.tv_sec = VAR_1.tv_sec;
 VAR_0->timestamp.tv_usec = VAR_1.tv_usec;
}
