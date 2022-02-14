
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_13__ {scalar_t__ low; scalar_t__ high; } ;
struct TYPE_16__ {TYPE_3__ key; } ;
struct authdes_verf {scalar_t__ adv_winverf; TYPE_6__ adv_xtimestamp; } ;
struct TYPE_12__ {scalar_t__ window; } ;
struct authdes_cred {scalar_t__ adc_namekind; int adc_nickname; TYPE_2__ adc_fullname; } ;
struct TYPE_18__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_11__ {int tv_sec; scalar_t__ tv_usec; } ;
struct ad_private {int ad_fullnamelen; struct authdes_cred ad_cred; struct authdes_verf ad_verf; int ad_nickname; scalar_t__ ad_window; TYPE_8__ ad_timestamp; TYPE_1__ ad_timediff; } ;
typedef int rpc_inline_t ;
typedef TYPE_6__ des_block ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_15__ {int oa_flavor; } ;
struct TYPE_14__ {int oa_flavor; } ;
struct TYPE_17__ {TYPE_5__ ah_verf; TYPE_4__ ah_cred; int ah_key; } ;
typedef TYPE_7__ AUTH ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct ad_private* FUNC_1 (TYPE_7__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (char*,char*,int,int,char*) ;
 int FUNC_6 (char*,char*,int,int) ;
 int FUNC_7 (TYPE_8__*,int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *,struct authdes_cred*) ;
 int FUNC_10 (int *,struct authdes_verf*) ;
 int * FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int*) ;

__attribute__((used)) static bool_t
FUNC_13(AUTH *VAR_9, XDR *VAR_10)
{

 struct ad_private *VAR_11 = FUNC_1(VAR_9);
 struct authdes_cred *VAR_12 = &VAR_11->ad_cred;
 struct authdes_verf *VAR_13 = &VAR_11->ad_verf;
 des_block VAR_14[2];
 des_block VAR_15;
 int VAR_16;
 int VAR_17;
 rpc_inline_t *VAR_18;





 (void)FUNC_7(&VAR_11->ad_timestamp, ((void*)0));
 VAR_11->ad_timestamp.tv_sec += VAR_11->ad_timediff.tv_sec;
 VAR_11->ad_timestamp.tv_usec += VAR_11->ad_timediff.tv_usec;
 while (VAR_11->ad_timestamp.tv_usec >= VAR_8) {
  VAR_11->ad_timestamp.tv_usec -= VAR_8;
  VAR_11->ad_timestamp.tv_sec++;
 }





 VAR_18 = (rpc_inline_t *)VAR_14;
 FUNC_3(VAR_18, VAR_11->ad_timestamp.tv_sec);
 FUNC_3(VAR_18, VAR_11->ad_timestamp.tv_usec);
 if (VAR_11->ad_cred.adc_namekind == VAR_0) {
  FUNC_4(VAR_18, VAR_11->ad_window);
  FUNC_4(VAR_18, VAR_11->ad_window - 1);
  VAR_15.key.high = VAR_15.key.low = 0;
  VAR_16 = FUNC_5((char *)&VAR_9->ah_key, (char *)VAR_14,
   (u_int) 2 * sizeof (des_block),
   VAR_3 | VAR_4, (char *)&VAR_15);
 } else {
  VAR_16 = FUNC_6((char *)&VAR_9->ah_key, (char *)VAR_14,
   (u_int) sizeof (des_block),
   VAR_3 | VAR_4);
 }
 if (FUNC_2(VAR_16)) {
  FUNC_8(VAR_6, "authdes_marshal: DES encryption failure");
  return (VAR_5);
 }
 VAR_11->ad_verf.adv_xtimestamp = VAR_14[0];
 if (VAR_11->ad_cred.adc_namekind == VAR_0) {
  VAR_11->ad_cred.adc_fullname.window = VAR_14[1].key.high;
  VAR_11->ad_verf.adv_winverf = VAR_14[1].key.low;
 } else {
  VAR_11->ad_cred.adc_nickname = VAR_11->ad_nickname;
  VAR_11->ad_verf.adv_winverf = 0;
 }





 if (VAR_11->ad_cred.adc_namekind == VAR_0) {
  VAR_17 = ((1 + 1 + 2 + 1)*VAR_2 + VAR_11->ad_fullnamelen);
 } else {
  VAR_17 = (1 + 1)*VAR_2;
 }

 if ((VAR_18 = FUNC_11(VAR_10, 2*VAR_2))) {
  FUNC_3(VAR_18, VAR_1);
  FUNC_3(VAR_18, VAR_17);
 } else {
  FUNC_0(FUNC_12(VAR_10, (int *)&VAR_9->ah_cred.oa_flavor));
  FUNC_0(FUNC_12(VAR_10, &VAR_17));
 }
 FUNC_0(FUNC_9(VAR_10, VAR_12));

 VAR_17 = (2 + 1)*VAR_2;
 if ((VAR_18 = FUNC_11(VAR_10, 2*VAR_2))) {
  FUNC_3(VAR_18, VAR_1);
  FUNC_3(VAR_18, VAR_17);
 } else {
  FUNC_0(FUNC_12(VAR_10, (int *)&VAR_9->ah_verf.oa_flavor));
  FUNC_0(FUNC_12(VAR_10, &VAR_17));
 }
 FUNC_0(FUNC_10(VAR_10, VAR_13));
 return (VAR_7);
}
