
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int port_t ;
struct TYPE_6__ {int sccrx_empty; int scctx_empty; int e1_first_int; scalar_t__ scctx_e; scalar_t__ scctx_b; scalar_t__ sccrx_e; scalar_t__ sccrx_b; scalar_t__ call_on_err; scalar_t__ call_on_scc; scalar_t__ call_on_msig; scalar_t__ call_on_rx; scalar_t__ call_on_tx; } ;
typedef TYPE_1__ ct_chan_t ;
struct TYPE_7__ {int type; TYPE_1__* chan; } ;
typedef TYPE_2__ ct_board_t ;
typedef int cr_dat_tst_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,int ,int,int,unsigned char*,long,int *,unsigned char*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_2__*,unsigned char const*,long,int const*) ;
 unsigned char* VAR_2 ;
 unsigned char* VAR_3 ;
 long VAR_4 ;
 int * VAR_5 ;
 unsigned char* VAR_6 ;
 long VAR_7 ;
 int * VAR_8 ;
 unsigned char* VAR_9 ;
 long VAR_10 ;
 int * VAR_11 ;

int FUNC_3 (ct_board_t *VAR_12, int VAR_13, port_t VAR_14, int VAR_15, int VAR_16)
{
 ct_chan_t *VAR_17;
 const unsigned char *VAR_18;
 const cr_dat_tst_t *VAR_19;
 long VAR_20;

 if (VAR_13 >= VAR_0 || ! FUNC_1 (VAR_14, VAR_15, VAR_16))
  return 0;


 for (VAR_17=VAR_12->chan; VAR_17<VAR_12->chan+VAR_1; ++VAR_17) {
  VAR_17->call_on_tx = 0;
  VAR_17->call_on_rx = 0;
  VAR_17->call_on_msig = 0;
  VAR_17->call_on_scc = 0;
  VAR_17->call_on_err = 0;
 }


 for (VAR_17=VAR_12->chan; VAR_17<VAR_12->chan+VAR_1; ++VAR_17) {
  VAR_17->sccrx_empty = VAR_17->scctx_empty = 1;
  VAR_17->sccrx_b = VAR_17->sccrx_e = 0;
  VAR_17->scctx_b = VAR_17->scctx_e = 0;
  VAR_17->e1_first_int = 1;
 }


 FUNC_0 (VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_3,
  VAR_4, VAR_5, VAR_2);


 VAR_18 = VAR_3;
 VAR_20 = VAR_4;
 VAR_19 = VAR_5;
 switch (VAR_12->type) {
 case 133:
 case 130:
 case 132:
 case 131:
  VAR_18 = VAR_2;
  VAR_20 = 0;
  VAR_19 = ((void*)0);
  break;

 case 128:
  VAR_18 = VAR_9;
  VAR_20 = VAR_10;
  VAR_19 = VAR_11;
  break;


 case 129:
  VAR_18 = VAR_6;
  VAR_20 = VAR_7;
  VAR_19 = VAR_8;
  break;

 }

 return FUNC_2 (VAR_12, VAR_18, VAR_20, VAR_19);
}
