
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_8__ {size_t data_len; int * data; } ;
typedef TYPE_1__ br_x509_certificate ;
typedef int UINT8 ;
struct TYPE_10__ {int SignatureData; } ;
struct TYPE_9__ {size_t SignatureListSize; int SignatureHeaderSize; size_t SignatureSize; int SignatureType; } ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_2__ EFI_SIGNATURE_LIST ;
typedef TYPE_3__ EFI_SIGNATURE_DATA ;
typedef int EFI_GUID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char const*,int *,size_t*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 void* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,size_t) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static br_x509_certificate*
FUNC_7(const char *VAR_4, size_t *VAR_5)
{
 br_x509_certificate *VAR_6;
 UINT8 *VAR_7;
 EFI_SIGNATURE_LIST *VAR_8;
 EFI_SIGNATURE_DATA *VAR_9;
 size_t VAR_10;
 ssize_t VAR_11;
 EFI_STATUS VAR_12;

 VAR_7 = ((void*)0);
 VAR_6 = ((void*)0);
 VAR_10 = 0;
 VAR_11 = 0;




 VAR_12 = FUNC_0(&VAR_2, VAR_4, VAR_7, &VAR_10);
 if (VAR_12 != VAR_0)
  return (((void*)0));

 VAR_7 = FUNC_2(VAR_10);
 if (VAR_7 == ((void*)0))
  return (((void*)0));

 VAR_12 = FUNC_0(&VAR_2, VAR_4, VAR_7, &VAR_10);
 if (VAR_12 != VAR_1)
  goto fail;

 for (VAR_8 = (EFI_SIGNATURE_LIST*) VAR_7;
     VAR_10 >= VAR_8->SignatureListSize && VAR_10 > 0;
     VAR_10 -= VAR_8->SignatureListSize,
     VAR_8 = (EFI_SIGNATURE_LIST*)
     ((UINT8*)VAR_8 + VAR_8->SignatureListSize)) {


  if (FUNC_3(&VAR_3,
      &VAR_8->SignatureType,
      sizeof(EFI_GUID)) != 0) {
   continue;
  }

  VAR_9 = (EFI_SIGNATURE_DATA*)
      ((UINT8*)VAR_8 +
      sizeof(EFI_SIGNATURE_LIST) +
      VAR_8->SignatureHeaderSize);

  VAR_6 = FUNC_5(VAR_6,
      (VAR_11 + 1) * sizeof(br_x509_certificate));
  if (VAR_6 == ((void*)0)) {
   VAR_11 = 0;
   goto fail;
  }

  VAR_6[VAR_11].data_len = VAR_8->SignatureSize - sizeof(EFI_GUID);
  VAR_6[VAR_11].data = FUNC_2(VAR_6[VAR_11].data_len);
  if (VAR_6[VAR_11].data == ((void*)0))
   goto fail;

  FUNC_4(VAR_6[VAR_11].data,
      VAR_9->SignatureData,
      VAR_6[VAR_11].data_len);

  VAR_11++;
 }

 *VAR_5 = VAR_11;

 FUNC_6(VAR_7);
 return (VAR_6);

fail:
 FUNC_1(VAR_6, VAR_11);
 FUNC_6(VAR_7);
 return (((void*)0));

}
