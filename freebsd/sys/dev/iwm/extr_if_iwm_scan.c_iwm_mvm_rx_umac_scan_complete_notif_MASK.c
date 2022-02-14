
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_umac_scan_complete {scalar_t__ ebs_status; int status; int uid; } ;
struct iwm_softc {int last_ebs_successful; } ;
struct iwm_rx_packet {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct iwm_softc *VAR_4,
    struct iwm_rx_packet *VAR_5)
{
 struct iwm_umac_scan_complete *VAR_6 = (void *)VAR_5->data;

 FUNC_0(VAR_4, VAR_1,
     "Scan completed, uid %u, status %s, EBS status %s\n",
     FUNC_3(VAR_6->uid),
     FUNC_2(VAR_6->status),
     FUNC_1(VAR_6->ebs_status));

 if (VAR_6->ebs_status != VAR_3 &&
     VAR_6->ebs_status != VAR_2)
  VAR_4->last_ebs_successful = VAR_0;
}
