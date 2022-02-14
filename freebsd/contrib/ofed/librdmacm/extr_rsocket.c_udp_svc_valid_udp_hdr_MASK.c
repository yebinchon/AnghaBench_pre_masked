
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sa_family; } ;
union socket_addr {TYPE_1__ sa; } ;
struct ds_udp_header {scalar_t__ tag; int version; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ds_udp_header *VAR_5,
     union socket_addr *VAR_6)
{
 return (VAR_5->tag == FUNC_0(VAR_4)) &&
  ((VAR_5->version == 4 && VAR_6->sa.sa_family == VAR_0 &&
    VAR_5->length == VAR_2) ||
   (VAR_5->version == 6 && VAR_6->sa.sa_family == VAR_1 &&
    VAR_5->length == VAR_3));
}
