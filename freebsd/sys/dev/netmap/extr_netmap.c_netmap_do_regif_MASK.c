
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct netmap_priv_d {struct netmap_adapter* np_na; struct netmap_if* np_nifp; } ;
struct netmap_if {int dummy; } ;
struct TYPE_3__ {int objsize; int objtotal; int lut; } ;
struct netmap_adapter {scalar_t__ active_fds; int (* nm_krings_create ) (struct netmap_adapter*) ;int (* nm_register ) (struct netmap_adapter*,int) ;TYPE_1__ na_lut; int (* nm_krings_delete ) (struct netmap_adapter*) ;int name; int rx_buf_maxsize; scalar_t__ ifp; int nm_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netmap_adapter*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (struct netmap_adapter*,unsigned int) ;
 int FUNC_5 (struct netmap_priv_d*) ;
 int FUNC_6 (struct netmap_priv_d*) ;
 int FUNC_7 (struct netmap_adapter*) ;
 int FUNC_8 (int ,struct netmap_adapter*) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (struct netmap_adapter*,struct netmap_if*) ;
 struct netmap_if* FUNC_11 (struct netmap_adapter*,struct netmap_priv_d*) ;
 int FUNC_12 (struct netmap_adapter*) ;
 int FUNC_13 (struct netmap_adapter*) ;
 int FUNC_14 (struct netmap_priv_d*,int ,int ,int ) ;
 int FUNC_15 (struct netmap_adapter*) ;
 scalar_t__ FUNC_16 (struct netmap_priv_d*) ;
 unsigned int FUNC_17 (scalar_t__) ;
 int FUNC_18 (char*,int ,unsigned int,int ,...) ;
 int FUNC_19 (char*,int ) ;
 scalar_t__ FUNC_20 (struct netmap_priv_d*) ;
 int FUNC_21 (struct netmap_adapter*) ;
 int FUNC_22 (struct netmap_adapter*,int) ;
 int FUNC_23 (struct netmap_adapter*) ;

int
FUNC_24(struct netmap_priv_d *VAR_2, struct netmap_adapter *VAR_3,
 uint32_t VAR_4, uint16_t VAR_5, uint64_t VAR_6)
{
 struct netmap_if *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_1();
 VAR_2->np_na = VAR_3;
 VAR_8 = FUNC_8(VAR_3->nm_mem, VAR_3);
 if (VAR_8)
  goto err;

 if (VAR_3->active_fds == 0) {


  VAR_8 = FUNC_9(VAR_3->nm_mem, &VAR_3->na_lut);
  if (VAR_8)
   goto err_drop_mem;
  FUNC_18("lut %p bufs %u size %u", VAR_3->na_lut.lut, VAR_3->na_lut.objtotal,
         VAR_3->na_lut.objsize);


  FUNC_15(VAR_3);
 }


 VAR_8 = FUNC_14(VAR_2, VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  goto err_put_lut;

 if (VAR_3->active_fds == 0) {





  if (VAR_3->ifp && FUNC_20(VAR_2)) {

   unsigned VAR_9 = FUNC_17(VAR_3->ifp);

   FUNC_18("%s: mtu %d rx_buf_maxsize %d netmap_buf_size %d",
    VAR_3->name, VAR_9, VAR_3->rx_buf_maxsize, FUNC_0(VAR_3));

   if (VAR_3->rx_buf_maxsize == 0) {
    FUNC_19("%s: error: rx_buf_maxsize == 0", VAR_3->name);
    VAR_8 = VAR_0;
    goto err_drop_mem;
   }

   VAR_8 = FUNC_4(VAR_3, VAR_9);
   if (VAR_8)
    goto err_drop_mem;
  }





  VAR_8 = VAR_3->nm_krings_create(VAR_3);
  if (VAR_8)
   goto err_put_lut;

 }





 VAR_8 = FUNC_5(VAR_2);
 if (VAR_8)
  goto err_del_krings;


 VAR_8 = FUNC_12(VAR_3);
 if (VAR_8)
  goto err_rel_excl;


 VAR_7 = FUNC_11(VAR_3, VAR_2);
 if (VAR_7 == ((void*)0)) {
  VAR_8 = VAR_1;
  goto err_rel_excl;
 }

 if (FUNC_16(VAR_2)) {


  VAR_8 = VAR_3->nm_register(VAR_3, 1);
  if (VAR_8)
   goto err_del_if;
 }


 VAR_3->active_fds++;






 FUNC_2();
 VAR_2->np_nifp = VAR_7;

 return 0;

err_del_if:
 FUNC_10(VAR_3, VAR_7);
err_rel_excl:
 FUNC_6(VAR_2);
 FUNC_13(VAR_3);
err_del_krings:
 if (VAR_3->active_fds == 0)
  VAR_3->nm_krings_delete(VAR_3);
err_put_lut:
 if (VAR_3->active_fds == 0)
  FUNC_3(&VAR_3->na_lut, 0, sizeof(VAR_3->na_lut));
err_drop_mem:
 FUNC_7(VAR_3);
err:
 VAR_2->np_na = ((void*)0);
 return VAR_8;
}
