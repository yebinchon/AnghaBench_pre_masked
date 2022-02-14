
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ifreq {scalar_t__ ifr_name; } ;
struct TYPE_4__ {scalar_t__ device; scalar_t__ rfmon; } ;
struct TYPE_5__ {TYPE_1__ opt; int errbuf; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,char*,...) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_6 (scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_7(pcap_t *VAR_11, int VAR_12)
{






 if (VAR_12 == VAR_2) {
  FUNC_2(VAR_11->errbuf, VAR_3,
      VAR_10, "BIOCSETIF failed");
  return (VAR_6);
 } else if (VAR_10 == VAR_1) {







  return (VAR_5);
 } else {




  FUNC_2(VAR_11->errbuf, VAR_3,
      VAR_10, "BIOCSETIF: %s", VAR_11->opt.device);
  return (VAR_4);
 }
}
