
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct bhnd_core_info {scalar_t__ vendor; scalar_t__ device; } ;
struct bcma_erom_core {int dummy; } ;
struct bcma_erom {int dummy; } ;
typedef int bus_size_t ;
typedef int bhnd_erom_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcma_erom*,struct bcma_erom_core*) ;
 int FUNC_1 (struct bcma_erom*) ;
 int FUNC_2 (struct bcma_erom*,int ) ;
 int FUNC_3 (struct bcma_erom*,int ) ;
 int FUNC_4 (struct bcma_erom*) ;
 int FUNC_5 (struct bcma_erom_core*,scalar_t__,int,struct bhnd_core_info*) ;
 int FUNC_6 (struct bhnd_core_info*,int ) ;
 struct bhnd_core_info* FUNC_7 (scalar_t__,int,int ,int ) ;

__attribute__((used)) static int
FUNC_8(bhnd_erom_t *VAR_5, struct bhnd_core_info **VAR_6,
    u_int *VAR_7)
{
 struct bcma_erom *VAR_8;
 struct bhnd_core_info *VAR_9;
 bus_size_t VAR_10;
 u_int VAR_11;
 int VAR_12;

 VAR_8 = (struct bcma_erom *)VAR_5;

 VAR_9 = ((void*)0);
 VAR_10 = FUNC_4(VAR_8);


 FUNC_1(VAR_8);
 for (VAR_11 = 0, VAR_12 = 0; !VAR_12; VAR_11++) {
  struct bcma_erom_core VAR_13;


  VAR_12 = FUNC_3(VAR_8, VAR_0);
  if (VAR_12 == VAR_1)
   break;
  else if (VAR_12)
   goto cleanup;


  if ((VAR_12 = FUNC_0(VAR_8, &VAR_13)))
   goto cleanup;
 }


 VAR_9 = FUNC_7(VAR_11, sizeof(struct bhnd_core_info), VAR_3,
     VAR_4);
 if (VAR_9 == ((void*)0)) {
  VAR_12 = VAR_2;
  goto cleanup;
 }


 FUNC_1(VAR_8);
 for (u_int VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  struct bcma_erom_core VAR_15;
  int VAR_16;


  VAR_12 = FUNC_3(VAR_8, VAR_0);
  if (VAR_12)
   goto cleanup;

  VAR_12 = FUNC_0(VAR_8, &VAR_15);
  if (VAR_12)
   goto cleanup;


  VAR_16 = 0;
  for (u_int VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
   if (VAR_9[VAR_14].vendor == VAR_9[VAR_17].vendor &&
       VAR_9[VAR_14].device == VAR_9[VAR_17].device)
    VAR_16++;
  }


  FUNC_5(&VAR_15, VAR_14, VAR_16, &VAR_9[VAR_14]);
 }

cleanup:
 if (!VAR_12) {
  *VAR_6 = VAR_9;
  *VAR_7 = VAR_11;
 } else {
  if (VAR_9 != ((void*)0))
   FUNC_6(VAR_9, VAR_3);
 }


 FUNC_2(VAR_8, VAR_10);
 return (VAR_12);
}
