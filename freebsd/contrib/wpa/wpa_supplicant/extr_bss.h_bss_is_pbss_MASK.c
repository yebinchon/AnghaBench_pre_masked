
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_bss {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct wpa_bss*) ;

__attribute__((used)) static inline int FUNC_1(struct wpa_bss *VAR_2)
{
 return FUNC_0(VAR_2) &&
  (VAR_2->caps & VAR_0) == VAR_1;
}
