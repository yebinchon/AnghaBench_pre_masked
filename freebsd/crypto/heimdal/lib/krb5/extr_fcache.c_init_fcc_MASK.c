
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef void* krb5_deltat ;
typedef TYPE_1__* krb5_context ;
typedef int krb5_ccache ;
typedef int int8_t ;
typedef void* int32_t ;
typedef int int16_t ;
struct TYPE_10__ {int version; } ;
struct TYPE_9__ {void* kdc_usec_offset; void* kdc_sec_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_8__* FUNC_0 (int ) ;

 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_2 (char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 scalar_t__ FUNC_8 (int *,void**) ;
 scalar_t__ FUNC_9 (int *,int*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,char*,int,...) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (TYPE_1__*,int *,int) ;

__attribute__((used)) static krb5_error_code
FUNC_15 (krb5_context VAR_8,
   krb5_ccache VAR_9,
   krb5_storage **VAR_10,
   int *VAR_11,
   krb5_deltat *VAR_12)
{
    int VAR_13;
    int8_t VAR_14, VAR_15;
    krb5_storage *VAR_16;
    krb5_error_code VAR_17;

    if (VAR_12)
 *VAR_12 = 0;

    VAR_17 = FUNC_4(VAR_8, VAR_9, &VAR_13, VAR_7 | VAR_5 | VAR_6, 0);
    if(VAR_17)
 return VAR_17;

    VAR_16 = FUNC_12(VAR_13);
    if(VAR_16 == ((void*)0)) {
 FUNC_6(VAR_8);
 VAR_17 = VAR_1;
 goto out;
    }
    FUNC_13(VAR_16, VAR_3);
    VAR_17 = FUNC_9(VAR_16, &VAR_14);
    if(VAR_17 != 0) {
 if(VAR_17 == VAR_3) {
     VAR_17 = VAR_0;
     FUNC_10(VAR_8, VAR_17,
       FUNC_2("Empty credential cache file: %s", ""),
       FUNC_1(VAR_9));
 } else
     FUNC_10(VAR_8, VAR_17, FUNC_2("Error reading pvno "
          "in cache file: %s", ""),
       FUNC_1(VAR_9));
 goto out;
    }
    if(VAR_14 != 5) {
 VAR_17 = VAR_2;
 FUNC_10(VAR_8, VAR_17, FUNC_2("Bad version number in credential "
      "cache file: %s", ""),
          FUNC_1(VAR_9));
 goto out;
    }
    VAR_17 = FUNC_9(VAR_16, &VAR_15);
    if(VAR_17 != 0) {
 VAR_17 = VAR_4;
 FUNC_10(VAR_8, VAR_17, "Error reading tag in "
         "cache file: %s", FUNC_1(VAR_9));
 goto out;
    }
    FUNC_0(VAR_9)->version = VAR_15;
    FUNC_14(VAR_8, VAR_16, FUNC_0(VAR_9)->version);
    switch (VAR_15) {
    case 128: {
 int16_t VAR_18;

 VAR_17 = FUNC_7 (VAR_16, &VAR_18);
 if(VAR_17) {
     VAR_17 = VAR_4;
     FUNC_10(VAR_8, VAR_17,
       FUNC_2("Error reading tag length in "
          "cache file: %s", ""), FUNC_1(VAR_9));
     goto out;
 }
 while(VAR_18 > 0) {
     int16_t VAR_19, VAR_20;
     int VAR_21;
     int8_t VAR_22;

     VAR_17 = FUNC_7 (VAR_16, &VAR_19);
     if(VAR_17) {
  VAR_17 = VAR_4;
  FUNC_10(VAR_8, VAR_17, FUNC_2("Error reading dtag in "
       "cache file: %s", ""),
           FUNC_1(VAR_9));
  goto out;
     }
     VAR_17 = FUNC_7 (VAR_16, &VAR_20);
     if(VAR_17) {
  VAR_17 = VAR_4;
  FUNC_10(VAR_8, VAR_17,
           FUNC_2("Error reading dlength "
       "in cache file: %s",""),
           FUNC_1(VAR_9));
  goto out;
     }
     switch (VAR_19) {
     case 132 : {
  int32_t VAR_23;

  VAR_17 = FUNC_8 (VAR_16, &VAR_23);
  VAR_17 |= FUNC_8 (VAR_16, &VAR_8->kdc_usec_offset);
  if(VAR_17) {
      VAR_17 = VAR_4;
      FUNC_10(VAR_8, VAR_17,
        FUNC_2("Error reading kdc_sec in "
           "cache file: %s", ""),
        FUNC_1(VAR_9));
      goto out;
  }
  VAR_8->kdc_sec_offset = VAR_23;
  if (VAR_12)
      *VAR_12 = VAR_23;
  break;
     }
     default :
  for (VAR_21 = 0; VAR_21 < VAR_20; ++VAR_21) {
      VAR_17 = FUNC_9 (VAR_16, &VAR_22);
      if(VAR_17) {
   VAR_17 = VAR_4;
   FUNC_10(VAR_8, VAR_17,
            FUNC_2("Error reading unknown "
        "tag in cache file: %s", ""),
            FUNC_1(VAR_9));
   goto out;
      }
  }
  break;
     }
     VAR_18 -= 4 + VAR_20;
 }
 break;
    }
    case 129:
    case 130:
    case 131:
 break;
    default :
 VAR_17 = VAR_2;
 FUNC_10(VAR_8, VAR_17,
          FUNC_2("Unknown version number (%d) in "
      "credential cache file: %s", ""),
          (int)VAR_15, FUNC_1(VAR_9));
 goto out;
    }
    *VAR_10 = VAR_16;
    *VAR_11 = VAR_13;

    return 0;
  out:
    if(VAR_16 != ((void*)0))
 FUNC_11(VAR_16);
    FUNC_5(VAR_8, VAR_13);
    FUNC_3(VAR_13);
    return VAR_17;
}
