
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req_pkt {int u; int err_nitems; } ;
typedef int sockaddr_u ;
typedef int keyid_t ;
typedef int endpt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,struct req_pkt*,int ) ;

__attribute__((used)) static void
FUNC_5(
 keyid_t *VAR_5,
 const char *VAR_6,
 sockaddr_u *VAR_7,
 endpt *VAR_8,
 struct req_pkt *VAR_9
 )
{
 keyid_t *VAR_10;
 keyid_t VAR_11;


 if (FUNC_0(VAR_9->err_nitems) > 1) {
  FUNC_2(VAR_3, "set_keyid_checked[%s]: err_nitems > 1",
   VAR_6);
  FUNC_4(VAR_7, VAR_8, VAR_9, VAR_0);
  return;
 }


 VAR_10 = (keyid_t *)&VAR_9->u;
 VAR_11 = FUNC_3(*VAR_10);


 if (VAR_11 < 1 || VAR_11 > VAR_4 || !FUNC_1(VAR_11)) {
  FUNC_2(VAR_3, "set_keyid_checked[%s]: invalid key id: %ld",
   VAR_6, (long)VAR_11);
  FUNC_4(VAR_7, VAR_8, VAR_9, VAR_1);
  return;
 }


 *VAR_5 = VAR_11;
 FUNC_4(VAR_7, VAR_8, VAR_9, VAR_2);
}
