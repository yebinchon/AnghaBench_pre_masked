
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_bss_anqp {int users; } ;
struct wpa_bss {struct wpa_bss_anqp* anqp; } ;


 struct wpa_bss_anqp* FUNC_0 () ;
 struct wpa_bss_anqp* FUNC_1 (struct wpa_bss_anqp*) ;

int FUNC_2(struct wpa_bss *VAR_0)
{
 struct wpa_bss_anqp *VAR_1;

 if (VAR_0->anqp && VAR_0->anqp->users > 1) {

  VAR_1 = FUNC_1(VAR_0->anqp);
  if (VAR_1 == ((void*)0))
   return -1;
  VAR_1->users = 1;
  VAR_0->anqp->users--;
  VAR_0->anqp = VAR_1;
  return 0;
 }

 if (VAR_0->anqp)
  return 0;


 VAR_0->anqp = FUNC_0();
 return VAR_0->anqp ? 0 : -1;
}
