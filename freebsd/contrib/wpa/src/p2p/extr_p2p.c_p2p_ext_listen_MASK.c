
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {unsigned int ext_listen_period; unsigned int ext_listen_interval; unsigned int ext_listen_interval_sec; unsigned int ext_listen_interval_usec; } ;


 int FUNC_0 (int ,struct p2p_data*,int *) ;
 int FUNC_1 (unsigned int,unsigned int,int ,struct p2p_data*,int *) ;
 int FUNC_2 (struct p2p_data*,char*,...) ;
 int VAR_0 ;

int FUNC_3(struct p2p_data *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3)
{
 if (VAR_2 > 65535 || VAR_3 > 65535 || VAR_2 > VAR_3 ||
     (VAR_2 == 0 && VAR_3 > 0) || (VAR_2 > 0 && VAR_3 == 0)) {
  FUNC_2(VAR_1, "Invalid Extended Listen Timing request: period=%u interval=%u",
   VAR_2, VAR_3);
  return -1;
 }

 FUNC_0(VAR_0, VAR_1, ((void*)0));

 if (VAR_3 == 0) {
  FUNC_2(VAR_1, "Disabling Extended Listen Timing");
  VAR_1->ext_listen_period = 0;
  VAR_1->ext_listen_interval = 0;
  return 0;
 }

 FUNC_2(VAR_1, "Enabling Extended Listen Timing: period %u msec, interval %u msec",
  VAR_2, VAR_3);
 VAR_1->ext_listen_period = VAR_2;
 VAR_1->ext_listen_interval = VAR_3;
 VAR_1->ext_listen_interval_sec = VAR_3 / 1000;
 VAR_1->ext_listen_interval_usec = (VAR_3 % 1000) * 1000;

 FUNC_1(VAR_1->ext_listen_interval_sec,
          VAR_1->ext_listen_interval_usec,
          VAR_0, VAR_1, ((void*)0));

 return 0;
}
