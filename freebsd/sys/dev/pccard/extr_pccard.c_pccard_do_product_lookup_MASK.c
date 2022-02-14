
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pccard_product {scalar_t__ pp_vendor; scalar_t__ pp_product; int ** pp_cis; scalar_t__ pp_name; } ;
typedef int (* pccard_product_match_fn ) (int ,struct pccard_product const*,int) ;
typedef int intmax_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,char const**) ;
 scalar_t__ FUNC_3 (int ,char const**) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,char const**) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ,char const**) ;
 scalar_t__ FUNC_8 (int *,char const*) ;
 int FUNC_9 (int ,struct pccard_product const*,int) ;

__attribute__((used)) static const struct pccard_product *
FUNC_10(device_t VAR_2, device_t VAR_3,
    const struct pccard_product *VAR_4, size_t VAR_5,
    pccard_product_match_fn VAR_6)
{
 const struct pccard_product *VAR_7;
 int VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 const char *VAR_11;
 const char *VAR_12;
 const char *VAR_13;
 const char *VAR_14;






 if (FUNC_6(VAR_3, &VAR_9))
  return (((void*)0));
 if (FUNC_4(VAR_3, &VAR_10))
  return (((void*)0));
 if (FUNC_7(VAR_3, &VAR_11))
  return (((void*)0));
 if (FUNC_5(VAR_3, &VAR_12))
  return (((void*)0));
 if (FUNC_2(VAR_3, &VAR_13))
  return (((void*)0));
 if (FUNC_3(VAR_3, &VAR_14))
  return (((void*)0));
 for (VAR_7 = VAR_4; VAR_7->pp_vendor != 0; VAR_7 =
     (const struct pccard_product *) ((const char *) VAR_7 + VAR_5)) {
  VAR_8 = 1;
  if (VAR_7->pp_vendor == VAR_1 &&
      VAR_7->pp_product == VAR_0 &&
      VAR_7->pp_cis[0] == ((void*)0) &&
      VAR_7->pp_cis[1] == ((void*)0)) {
   if (VAR_7->pp_name)
    FUNC_0(VAR_3,
        "Total wildcard entry ignored for %s\n",
        VAR_7->pp_name);
   continue;
  }
  if (VAR_8 && VAR_7->pp_vendor != VAR_1 &&
      VAR_9 != VAR_7->pp_vendor)
   VAR_8 = 0;
  if (VAR_8 && VAR_7->pp_product != VAR_0 &&
      VAR_10 != VAR_7->pp_product)
   VAR_8 = 0;
  if (VAR_8 && VAR_7->pp_cis[0] &&
      (VAR_11 == ((void*)0) ||
      FUNC_8(VAR_7->pp_cis[0], VAR_11) != 0))
   VAR_8 = 0;
  if (VAR_8 && VAR_7->pp_cis[1] &&
      (VAR_12 == ((void*)0) ||
      FUNC_8(VAR_7->pp_cis[1], VAR_12) != 0))
   VAR_8 = 0;
  if (VAR_8 && VAR_7->pp_cis[2] &&
      (VAR_13 == ((void*)0) ||
      FUNC_8(VAR_7->pp_cis[2], VAR_13) != 0))
   VAR_8 = 0;
  if (VAR_8 && VAR_7->pp_cis[3] &&
      (VAR_14 == ((void*)0) ||
      FUNC_8(VAR_7->pp_cis[3], VAR_14) != 0))
   VAR_8 = 0;
  if (VAR_6 != ((void*)0))
   VAR_8 = (*VAR_6)(VAR_3, VAR_7, VAR_8);
  if (VAR_8)
   return (VAR_7);
 }
 return (((void*)0));
}
