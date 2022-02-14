
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef void* u_int ;
struct ssh {struct kex* kex; } ;
struct kex {scalar_t__ nbits; scalar_t__ min; scalar_t__ max; int we_need; int * dh; } ;
typedef int BIGNUM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int const**,int *,int const**) ;
 void* FUNC_1 (scalar_t__,void*) ;
 void* FUNC_2 (int ,void*) ;
 int * FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (void*,void*,void*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int) ;
 int VAR_6 ;
 int FUNC_7 (struct ssh*,int ,int *) ;
 int FUNC_8 (struct ssh*,char*) ;
 int FUNC_9 (struct ssh*) ;
 int FUNC_10 (struct ssh*,void**) ;
 int FUNC_11 (struct ssh*,int const*) ;
 int FUNC_12 (struct ssh*) ;
 int FUNC_13 (struct ssh*,int ) ;

__attribute__((used)) static int
FUNC_14(int VAR_7, u_int32_t VAR_8, struct ssh *VAR_9)
{
 struct kex *VAR_10 = VAR_9->kex;
 int VAR_11;
 u_int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 const BIGNUM *VAR_15, *VAR_16;

 FUNC_5("SSH2_MSG_KEX_DH_GEX_REQUEST received");
 if ((VAR_11 = FUNC_10(VAR_9, &VAR_12)) != 0 ||
     (VAR_11 = FUNC_10(VAR_9, &VAR_14)) != 0 ||
     (VAR_11 = FUNC_10(VAR_9, &VAR_13)) != 0 ||
     (VAR_11 = FUNC_9(VAR_9)) != 0)
  goto out;
 VAR_10->nbits = VAR_14;
 VAR_10->min = VAR_12;
 VAR_10->max = VAR_13;
 VAR_12 = FUNC_1(VAR_1, VAR_12);
 VAR_13 = FUNC_2(VAR_0, VAR_13);
 VAR_14 = FUNC_1(VAR_1, VAR_14);
 VAR_14 = FUNC_2(VAR_0, VAR_14);

 if (VAR_10->max < VAR_10->min || VAR_10->nbits < VAR_10->min ||
     VAR_10->max < VAR_10->nbits || VAR_10->max < VAR_1) {
  VAR_11 = VAR_5;
  goto out;
 }


 VAR_10->dh = FUNC_3(FUNC_4(VAR_12, VAR_14, VAR_13));
 if (VAR_10->dh == ((void*)0)) {
  FUNC_8(VAR_9, "no matching DH grp found");
  VAR_11 = VAR_4;
  goto out;
 }
 FUNC_5("SSH2_MSG_KEX_DH_GEX_GROUP sent");
 FUNC_0(VAR_10->dh, &VAR_15, ((void*)0), &VAR_16);
 if ((VAR_11 = FUNC_13(VAR_9, VAR_2)) != 0 ||
     (VAR_11 = FUNC_11(VAR_9, VAR_15)) != 0 ||
     (VAR_11 = FUNC_11(VAR_9, VAR_16)) != 0 ||
     (VAR_11 = FUNC_12(VAR_9)) != 0)
  goto out;


 if ((VAR_11 = FUNC_6(VAR_10->dh, VAR_10->we_need * 8)) != 0)
  goto out;

 FUNC_5("expecting SSH2_MSG_KEX_DH_GEX_INIT");
 FUNC_7(VAR_9, VAR_3, &VAR_6);
 VAR_11 = 0;
 out:
 return VAR_11;
}
