
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_bss {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct wpa_bss*) ;

__attribute__((used)) static int FUNC_1(struct wpa_bss *VAR_4)
{
 if (FUNC_0(VAR_4)) {
  return (VAR_4->caps & VAR_1) ==
   VAR_0;
 }

 return ((VAR_4->caps & (VAR_2 | VAR_3)) ==
  VAR_2);
}
