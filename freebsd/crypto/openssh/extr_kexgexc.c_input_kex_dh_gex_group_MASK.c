
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_int ;
struct ssh {struct kex* kex; } ;
struct kex {scalar_t__ min; scalar_t__ max; int we_need; int * dh; } ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (int *,int const**,int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,char*) ;
 int VAR_5 ;
 int FUNC_10 (struct ssh*,int ,int *) ;
 int FUNC_11 (struct ssh*,int *) ;
 int FUNC_12 (struct ssh*) ;
 int FUNC_13 (struct ssh*,int const*) ;
 int FUNC_14 (struct ssh*) ;
 int FUNC_15 (struct ssh*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_16(int VAR_7, u_int32_t VAR_8, struct ssh *VAR_9)
{
 struct kex *VAR_10 = VAR_9->kex;
 BIGNUM *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 const BIGNUM *VAR_13;
 int VAR_14, VAR_15;

 FUNC_6("got SSH2_MSG_KEX_DH_GEX_GROUP");

 if ((VAR_11 = FUNC_1()) == ((void*)0) ||
     (VAR_12 = FUNC_1()) == ((void*)0)) {
  VAR_14 = VAR_3;
  goto out;
 }
 if ((VAR_14 = FUNC_11(VAR_9, VAR_11)) != 0 ||
     (VAR_14 = FUNC_11(VAR_9, VAR_12)) != 0 ||
     (VAR_14 = FUNC_12(VAR_9)) != 0)
  goto out;
 if ((VAR_15 = FUNC_2(VAR_11)) < 0 ||
     (u_int)VAR_15 < VAR_10->min || (u_int)VAR_15 > VAR_10->max) {
  VAR_14 = VAR_4;
  goto out;
 }
 if ((VAR_10->dh = FUNC_8(VAR_12, VAR_11)) == ((void*)0)) {
  VAR_14 = VAR_3;
  goto out;
 }
 VAR_11 = VAR_12 = ((void*)0);


 if ((VAR_14 = FUNC_7(VAR_10->dh, VAR_10->we_need * 8)) != 0)
  goto out;
 FUNC_4(VAR_10->dh, &VAR_13, ((void*)0));
 if ((VAR_14 = FUNC_15(VAR_9, VAR_1)) != 0 ||
     (VAR_14 = FUNC_13(VAR_9, VAR_13)) != 0 ||
     (VAR_14 = FUNC_14(VAR_9)) != 0)
  goto out;
 FUNC_6("SSH2_MSG_KEX_DH_GEX_INIT sent");






 FUNC_10(VAR_9, VAR_0, ((void*)0));
 FUNC_10(VAR_9, VAR_2, &VAR_5);
 VAR_14 = 0;
out:
 FUNC_0(VAR_11);
 FUNC_0(VAR_12);
 return VAR_14;
}
