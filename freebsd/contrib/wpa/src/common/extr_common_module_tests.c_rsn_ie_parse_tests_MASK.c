
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ie_data {int dummy; } ;
struct rsn_ie_parse_test_data {scalar_t__ result; int len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rsn_ie_parse_test_data* VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,struct wpa_ie_data*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_3, VAR_4 = 0;

 FUNC_1(VAR_1, "rsn_ie_parse tests");

 for (VAR_3 = 0; VAR_2[VAR_3].data; VAR_3++) {
  const struct rsn_ie_parse_test_data *VAR_5;
  struct wpa_ie_data VAR_6;

  VAR_5 = &VAR_2[VAR_3];
  if (FUNC_0(VAR_5->data, VAR_5->len, &VAR_6) !=
      VAR_5->result) {
   FUNC_1(VAR_0, "rsn_ie_parse test %d failed", VAR_3);
   VAR_4 = -1;
  }
 }

 return VAR_4;
}
