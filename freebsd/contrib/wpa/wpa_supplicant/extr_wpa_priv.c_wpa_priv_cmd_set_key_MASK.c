
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_priv_interface {int * drv_priv; int ifname; TYPE_1__* driver; } ;
struct privsep_cmd_set_key {scalar_t__ key_len; int * key; scalar_t__ seq_len; int * seq; int set_tx; int key_idx; int addr; int alg; } ;
struct TYPE_2__ {int (* set_key ) (int ,int *,int ,int ,int ,int ,int *,scalar_t__,int *,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int ,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct wpa_priv_interface *VAR_1,
     void *VAR_2, size_t VAR_3)
{
 struct privsep_cmd_set_key *VAR_4;
 int VAR_5;

 if (VAR_1->drv_priv == ((void*)0) || VAR_1->driver->set_key == ((void*)0))
  return;

 if (VAR_3 != sizeof(*VAR_4)) {
  FUNC_1(VAR_0, "Invalid set_key request");
  return;
 }

 VAR_4 = VAR_2;

 VAR_5 = VAR_1->driver->set_key(VAR_1->ifname, VAR_1->drv_priv,
         VAR_4->alg,
         VAR_4->addr, VAR_4->key_idx,
         VAR_4->set_tx,
         VAR_4->seq_len ? VAR_4->seq : ((void*)0),
         VAR_4->seq_len,
         VAR_4->key_len ? VAR_4->key : ((void*)0),
         VAR_4->key_len);
 FUNC_1(VAR_0, "drv->set_key: res=%d", VAR_5);
}
