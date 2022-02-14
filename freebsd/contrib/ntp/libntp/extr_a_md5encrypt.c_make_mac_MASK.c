
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_6__ {size_t len; int buf; } ;
typedef TYPE_1__ rwbuffT ;
struct TYPE_7__ {void* buf; int len; } ;
typedef TYPE_2__ robuffT ;
typedef int EVP_MD_CTX ;
typedef int CMAC_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,size_t*) ;
 int FUNC_3 (int *,void const*,int,int ,int *) ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,void*,int) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_16 (int) ;
 size_t FUNC_17 (int *) ;
 int FUNC_18 (int *,void const*,int) ;
 int FUNC_19 (int *,int ,int) ;
 int FUNC_20 (int ,char*,...) ;

__attribute__((used)) static size_t
FUNC_21(
 const rwbuffT * VAR_6,
 int VAR_7,
 const robuffT * VAR_8,
 const robuffT * VAR_9)
{





 size_t VAR_10 = 0;
 if (VAR_7 == VAR_5)
 {
  EVP_MD_CTX * VAR_11 = FUNC_10();
  u_int VAR_12 = 0;

  if (VAR_6->len < 16) {
   FUNC_20(VAR_3, "%s", "MAC encrypt: MAC md5 buf too small.");
  }
  else if ( ! VAR_11) {
   FUNC_20(VAR_3, "%s", "MAC encrypt: MAC md5 Digest CTX new failed.");
  }
  else {
   FUNC_6(VAR_11, FUNC_14(VAR_7));
   FUNC_8(VAR_11, VAR_8->buf, VAR_8->len);
   FUNC_8(VAR_11, VAR_9->buf, VAR_9->len);
   FUNC_5(VAR_11, VAR_6->buf, &VAR_12);
  }
  if (VAR_11)
   FUNC_9(VAR_11);
  VAR_10 = (size_t)VAR_12;
 }
 else
 {
  FUNC_20(VAR_3, "MAC encrypt: invalid key type %d" , VAR_7);
 }



 return VAR_10;
}
