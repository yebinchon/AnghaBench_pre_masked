
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlbl_unlhsh_iface {scalar_t__ valid; } ;


 int VAR_0 ;
 struct netlbl_unlhsh_iface* FUNC_0 (int) ;
 struct netlbl_unlhsh_iface* FUNC_1 (int ) ;

__attribute__((used)) static struct netlbl_unlhsh_iface *FUNC_2(int VAR_1)
{
 struct netlbl_unlhsh_iface *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != ((void*)0))
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 != ((void*)0) && VAR_2->valid)
  return VAR_2;

 return ((void*)0);
}
