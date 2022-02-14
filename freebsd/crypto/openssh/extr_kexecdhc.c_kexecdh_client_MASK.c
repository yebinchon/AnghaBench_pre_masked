
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {struct kex* kex; } ;
struct kex {int const* ec_group; int * ec_client_key; int ec_nid; } ;
typedef int EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int VAR_4 ;
 int FUNC_7 (struct ssh*,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ssh*,int const*,int const*) ;
 int FUNC_10 (struct ssh*) ;
 int FUNC_11 (struct ssh*,int ) ;
 int VAR_5 ;

int
FUNC_12(struct ssh *VAR_6)
{
 struct kex *VAR_7 = VAR_6->kex;
 EC_KEY *VAR_8 = ((void*)0);
 const EC_GROUP *VAR_9;
 const EC_POINT *VAR_10;
 int VAR_11;

 if ((VAR_8 = FUNC_4(VAR_7->ec_nid)) == ((void*)0)) {
  VAR_11 = VAR_2;
  goto out;
 }
 if (FUNC_1(VAR_8) != 1) {
  VAR_11 = VAR_3;
  goto out;
 }
 VAR_9 = FUNC_2(VAR_8);
 VAR_10 = FUNC_3(VAR_8);

 if ((VAR_11 = FUNC_11(VAR_6, VAR_0)) != 0 ||
     (VAR_11 = FUNC_9(VAR_6, VAR_10, VAR_9)) != 0 ||
     (VAR_11 = FUNC_10(VAR_6)) != 0)
  goto out;
 FUNC_5("sending SSH2_MSG_KEX_ECDH_INIT");





 VAR_7->ec_client_key = VAR_8;
 VAR_7->ec_group = VAR_9;
 VAR_8 = ((void*)0);

 FUNC_5("expecting SSH2_MSG_KEX_ECDH_REPLY");
 FUNC_7(VAR_6, VAR_1, &VAR_4);
 VAR_11 = 0;
 out:
 FUNC_0(VAR_8);
 return VAR_11;
}
