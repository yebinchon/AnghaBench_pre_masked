
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int dh_size; int dh_type; int dh_sigstate; int dh_waitlisthead; } ;
struct TYPE_5__ {TYPE_1__ k_header; } ;
typedef TYPE_2__ nt_kevent ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

void
FUNC_1(nt_kevent *VAR_3, uint32_t VAR_4, uint8_t VAR_5)
{
 FUNC_0((&VAR_3->k_header.dh_waitlisthead));
 VAR_3->k_header.dh_sigstate = VAR_5;
 if (VAR_4 == VAR_2)
  VAR_3->k_header.dh_type = VAR_0;
 else
  VAR_3->k_header.dh_type = VAR_1;
 VAR_3->k_header.dh_size = sizeof(nt_kevent) / sizeof(uint32_t);
}
