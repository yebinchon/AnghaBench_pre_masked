
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct r92c_fw_cmd_rsvdpage {int probe_resp; int null_data; scalar_t__ ps_poll; } ;
typedef int rsvd ;


 int VAR_0 ;
 int FUNC_0 (struct rtwn_softc*,int ,struct r92c_fw_cmd_rsvdpage*,int) ;

int
FUNC_1(struct rtwn_softc *VAR_1, int VAR_2, int VAR_3,
    int VAR_4)
{
 struct r92c_fw_cmd_rsvdpage VAR_5;

 VAR_5.probe_resp = VAR_2;
 VAR_5.ps_poll = 0;
 VAR_5.null_data = VAR_3;

 return (FUNC_0(VAR_1, VAR_0, &VAR_5, sizeof(VAR_5)));
}
