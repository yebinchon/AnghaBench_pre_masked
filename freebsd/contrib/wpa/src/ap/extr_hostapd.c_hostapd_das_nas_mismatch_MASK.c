
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radius_das_attrs {scalar_t__ nas_identifier_len; scalar_t__ nas_ipv6_addr; scalar_t__ nas_ip_addr; scalar_t__ nas_identifier; } ;
struct hostapd_data {TYPE_3__* conf; } ;
struct TYPE_4__ {int v6; int v4; } ;
struct TYPE_5__ {scalar_t__ af; TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ own_ip_addr; int * nas_identifier; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct hostapd_data *VAR_3,
        struct radius_das_attrs *VAR_4)
{
 if (VAR_4->nas_identifier &&
     (!VAR_3->conf->nas_identifier ||
      FUNC_1(VAR_3->conf->nas_identifier) !=
      VAR_4->nas_identifier_len ||
      FUNC_0(VAR_3->conf->nas_identifier, VAR_4->nas_identifier,
         VAR_4->nas_identifier_len) != 0)) {
  FUNC_2(VAR_2, "RADIUS DAS: NAS-Identifier mismatch");
  return 1;
 }

 if (VAR_4->nas_ip_addr &&
     (VAR_3->conf->own_ip_addr.af != VAR_0 ||
      FUNC_0(&VAR_3->conf->own_ip_addr.u.v4, VAR_4->nas_ip_addr, 4) !=
      0)) {
  FUNC_2(VAR_2, "RADIUS DAS: NAS-IP-Address mismatch");
  return 1;
 }
 return 0;
}
