
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {size_t kck_len; size_t kek_len; int kek; int kck; } ;
struct wpa_sm {int ptk_set; TYPE_1__ ptk; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct wpa_sm *VAR_3,
       const u8 *VAR_4, size_t VAR_5,
       const u8 *VAR_6, size_t VAR_7)
{
 if (VAR_4 && VAR_5 <= VAR_1) {
  FUNC_0(VAR_3->ptk.kck, VAR_4, VAR_5);
  VAR_3->ptk.kck_len = VAR_5;
  FUNC_1(VAR_0, "Updated PTK KCK");
 }
 if (VAR_6 && VAR_7 <= VAR_2) {
  FUNC_0(VAR_3->ptk.kek, VAR_6, VAR_7);
  VAR_3->ptk.kek_len = VAR_7;
  FUNC_1(VAR_0, "Updated PTK KEK");
 }
 VAR_3->ptk_set = 1;
}
