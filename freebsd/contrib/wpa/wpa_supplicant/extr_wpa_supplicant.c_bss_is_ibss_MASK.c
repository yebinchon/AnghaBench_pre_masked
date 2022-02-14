
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_bss {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct wpa_bss *VAR_2)
{
 return (VAR_2->caps & (VAR_0 | VAR_1)) ==
  VAR_1;
}
