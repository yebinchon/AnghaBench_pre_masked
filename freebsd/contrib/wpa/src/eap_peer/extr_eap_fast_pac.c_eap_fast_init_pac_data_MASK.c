
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_config_blob {int len; scalar_t__ data; } ;
struct eap_sm {int dummy; } ;
struct eap_fast_read_ctx {int buf_len; char* pos; char* end; int * buf; int * f; } ;


 int VAR_0 ;
 struct wpa_config_blob* FUNC_0 (struct eap_sm*,char const*) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (struct eap_fast_read_ctx*,int ,int) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_7(struct eap_sm *VAR_1, const char *VAR_2,
      struct eap_fast_read_ctx *VAR_3)
{
 FUNC_4(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->buf_len = 2048;
 VAR_3->buf = FUNC_3(VAR_3->buf_len);
 if (VAR_3->buf == ((void*)0))
  return -1;

 if (FUNC_5(VAR_2, "blob://", 7) == 0) {
  const struct wpa_config_blob *VAR_4;
  VAR_4 = FUNC_0(VAR_1, VAR_2 + 7);
  if (VAR_4 == ((void*)0)) {
   FUNC_6(VAR_0, "EAP-FAST: No PAC blob '%s' - "
       "assume no PAC entries have been "
       "provisioned", VAR_2 + 7);
   FUNC_2(VAR_3->buf);
   return -1;
  }
  VAR_3->pos = (char *) VAR_4->data;
  VAR_3->end = (char *) VAR_4->data + VAR_4->len;
 } else {
  VAR_3->f = FUNC_1(VAR_2, "rb");
  if (VAR_3->f == ((void*)0)) {
   FUNC_6(VAR_0, "EAP-FAST: No PAC file '%s' - "
       "assume no PAC entries have been "
       "provisioned", VAR_2);
   FUNC_2(VAR_3->buf);
   return -1;
  }
 }

 return 0;
}
