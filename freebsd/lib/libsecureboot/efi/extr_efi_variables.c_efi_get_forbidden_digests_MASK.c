
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {size_t hash_size; struct TYPE_11__* data; } ;
typedef TYPE_1__ hash_data ;
typedef TYPE_1__ UINT8 ;
struct TYPE_13__ {int SignatureData; } ;
struct TYPE_12__ {size_t SignatureListSize; int SignatureHeaderSize; int SignatureSize; int SignatureType; } ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_3__ EFI_SIGNATURE_LIST ;
typedef TYPE_4__ EFI_SIGNATURE_DATA ;
typedef int EFI_GUID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *,char*,TYPE_1__*,size_t*) ;
 void* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_1__*,int ,size_t) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;

hash_data*
FUNC_6(size_t *VAR_9)
{
 UINT8 *VAR_10;
 hash_data *VAR_11;
 EFI_SIGNATURE_LIST *VAR_12;
 EFI_SIGNATURE_DATA *VAR_13;
 size_t VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;
 EFI_STATUS VAR_19;

 VAR_14 = 0;
 VAR_17 = 0;
 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);

 VAR_19 = FUNC_0(&VAR_2, "dbx", VAR_10, &VAR_14);
 if (VAR_19 != VAR_0)
  return (((void*)0));

 VAR_10 = FUNC_1(VAR_14);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 VAR_19 = FUNC_0(&VAR_2, "dbx", VAR_10, &VAR_14);
 if (VAR_19 != VAR_1)
  goto fail;


 for (VAR_12 = (EFI_SIGNATURE_LIST*) VAR_10;
     VAR_14 >= VAR_12->SignatureListSize && VAR_14 > 0;
     VAR_14 -= VAR_12->SignatureListSize,
     VAR_12 = (EFI_SIGNATURE_LIST*)
     ((UINT8*)VAR_12 + VAR_12->SignatureListSize)) {


  if (FUNC_2(&VAR_6, &VAR_12->SignatureType,
      sizeof(EFI_GUID)) == 0) {
   VAR_16 = VAR_3;
  } else if (FUNC_2(&VAR_7, &VAR_12->SignatureType,
      sizeof(EFI_GUID)) == 0) {
   VAR_16 = VAR_4;
  } else if (FUNC_2(&VAR_8, &VAR_12->SignatureType,
      sizeof(EFI_GUID)) == 0) {
   VAR_16 = VAR_5;
  } else {
   continue;
  }





  VAR_15 = sizeof(EFI_SIGNATURE_LIST) + VAR_12->SignatureHeaderSize;


  VAR_18 = VAR_12->SignatureListSize - VAR_15;
  VAR_18 /= VAR_12->SignatureSize;
  VAR_13 = (EFI_SIGNATURE_DATA*)((UINT8*)VAR_12 + VAR_15);
  while (VAR_18-- > 0) {
   VAR_11 = FUNC_4(VAR_11,
       (VAR_17 + 1) * sizeof(hash_data));
   if (VAR_11 == ((void*)0)) {
    VAR_17 = 0;
    goto fail;
   }

   VAR_11[VAR_17].data = FUNC_1(VAR_16);
   if (VAR_11[VAR_17].data == ((void*)0))
    goto fail;

   FUNC_3(VAR_11[VAR_17].data,
       VAR_13->SignatureData,
       VAR_16);
   VAR_11[VAR_17].hash_size = VAR_16;

   VAR_13 = (EFI_SIGNATURE_DATA*)(VAR_13 + VAR_12->SignatureSize);
   VAR_17++;
  }
 }
 FUNC_5(VAR_10);
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_17;

 return (VAR_11);

fail:
 while (VAR_17--)
  FUNC_5(VAR_11[VAR_17].data);

 FUNC_5(VAR_10);
 FUNC_5(VAR_11);
 return (((void*)0));
}
