
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val_fmt ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (void const*,size_t,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (int *,size_t*,int *) ;
 int FUNC_4 (int *,void*,size_t*,int ) ;
 int FUNC_5 (int *,int const*,void const*,size_t,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (void const*,size_t,int ,void*,size_t*,int ) ;

__attribute__((used)) static int
FUNC_8(bhnd_nvram_val *VAR_4, void *VAR_5, size_t *VAR_6,
    bhnd_nvram_type VAR_7)
{
 bhnd_nvram_val VAR_8;
 const bhnd_nvram_val_fmt *VAR_9;
 const void *VAR_10;
 bhnd_nvram_type VAR_11;
 size_t VAR_12;
 int VAR_13;

 VAR_10 = FUNC_3(VAR_4, &VAR_12, &VAR_11);



 if (!FUNC_2(VAR_7) ||
     VAR_7 == VAR_0)
 {
  return (FUNC_7(VAR_10, VAR_12, VAR_11, VAR_5, VAR_6,
      VAR_7));
 }



 VAR_10 = FUNC_3(VAR_4, &VAR_12, &VAR_11);
 if (FUNC_1(VAR_10, VAR_12, ((void*)0), ((void*)0)))
  VAR_9 = &VAR_2;
 else
  VAR_9 = &VAR_3;


 VAR_13 = FUNC_5(&VAR_8, VAR_9, VAR_10, VAR_12, VAR_11,
     VAR_1);
 if (VAR_13) {
  FUNC_0("error initializing array representation: %d\n",
      VAR_13);
  return (VAR_13);
 }


 VAR_13 = FUNC_4(&VAR_8, VAR_5, VAR_6, VAR_7);
 if (VAR_13)
  FUNC_0("error encoding array representation: %d\n", VAR_13);

 FUNC_6(&VAR_8);

 return (VAR_13);
}
