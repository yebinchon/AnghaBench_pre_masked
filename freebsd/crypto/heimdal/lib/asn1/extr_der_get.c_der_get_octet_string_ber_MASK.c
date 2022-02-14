
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int * data; } ;
typedef TYPE_1__ heim_octet_string ;
typedef scalar_t__ Der_type ;
typedef scalar_t__ Der_class ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (unsigned char const*,size_t,size_t*,size_t*) ;
 int FUNC_1 (unsigned char const*,size_t,scalar_t__*,scalar_t__*,unsigned int*,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned char*,unsigned char const*,size_t) ;
 void* FUNC_4 (int *,int) ;

int
FUNC_5 (const unsigned char *VAR_8, size_t VAR_9,
     heim_octet_string *VAR_10, size_t *VAR_11)
{
    int VAR_12;
    Der_type VAR_13;
    Der_class VAR_14;
    unsigned int VAR_15, VAR_16 = 0;
    size_t VAR_17, VAR_18, VAR_19 = VAR_9;

    VAR_10->length = 0;
    VAR_10->data = ((void*)0);

    while (VAR_9) {
 VAR_12 = FUNC_1 (VAR_8, VAR_9, &VAR_14, &VAR_13, &VAR_15, &VAR_17);
 if (VAR_12) goto out;
 if (VAR_14 != VAR_1) {
     VAR_12 = VAR_0;
     goto out;
 }
 if (VAR_13 == VAR_5 && VAR_15 == VAR_6) {
     if (VAR_16 == 0)
  break;
     VAR_16--;
 }
 if (VAR_15 != VAR_7) {
     VAR_12 = VAR_0;
     goto out;
 }

 VAR_8 += VAR_17;
 VAR_9 -= VAR_17;
 VAR_12 = FUNC_0 (VAR_8, VAR_9, &VAR_18, &VAR_17);
 if (VAR_12) goto out;
 VAR_8 += VAR_17;
 VAR_9 -= VAR_17;

 if (VAR_18 > VAR_9)
     return VAR_3;

 if (VAR_13 == VAR_5) {
     void *VAR_20;

     VAR_20 = FUNC_4(VAR_10->data, VAR_10->length + VAR_18);
     if (VAR_20 == ((void*)0)) {
  VAR_12 = VAR_4;
  goto out;
     }
     VAR_10->data = VAR_20;
     FUNC_3(((unsigned char *)VAR_10->data) + VAR_10->length, VAR_8, VAR_18);
     VAR_10->length += VAR_18;
 } else
     VAR_16++;

 VAR_8 += VAR_18;
 VAR_9 -= VAR_18;
    }
    if (VAR_16 != 0)
 return VAR_2;
    if(VAR_11) *VAR_11 = VAR_19 - VAR_9;
    return 0;
 out:
    FUNC_2(VAR_10->data);
    VAR_10->data = ((void*)0);
    VAR_10->length = 0;
    return VAR_12;
}
