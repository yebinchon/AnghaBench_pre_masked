
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {size_t ft_ies_len; int * ft_ies; int mobility_domain; scalar_t__ ft_used; } ;
struct wpa_supplicant {TYPE_1__ sme; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int const*,int ) ;
 int * FUNC_2 (int const*,size_t) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_4 (int ,char*,int const*,size_t) ;

int FUNC_5(struct wpa_supplicant *VAR_2, const u8 *VAR_3,
        const u8 *VAR_4, size_t VAR_5)
{
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
  FUNC_3(VAR_2, VAR_1, "SME: Remove mobility domain");
  FUNC_0(VAR_2->sme.ft_ies);
  VAR_2->sme.ft_ies = ((void*)0);
  VAR_2->sme.ft_ies_len = 0;
  VAR_2->sme.ft_used = 0;
  return 0;
 }

 FUNC_1(VAR_2->sme.mobility_domain, VAR_3, VAR_0);
 FUNC_4(VAR_1, "SME: FT IEs", VAR_4, VAR_5);
 FUNC_0(VAR_2->sme.ft_ies);
 VAR_2->sme.ft_ies = FUNC_2(VAR_4, VAR_5);
 if (VAR_2->sme.ft_ies == ((void*)0))
  return -1;
 VAR_2->sme.ft_ies_len = VAR_5;
 return 0;
}
