
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* hx509_crypto ;
struct TYPE_11__ {unsigned char* data; size_t length; } ;
typedef TYPE_4__ heim_octet_string ;
struct TYPE_9__ {int * data; } ;
struct TYPE_10__ {int flags; int c; TYPE_2__ key; TYPE_1__* cipher; } ;
struct TYPE_8__ {int flags; } ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned char*,void const*,size_t const) ;
 int FUNC_5 (int *,int ,int *,int *,void*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (size_t const) ;

int
FUNC_8(hx509_crypto VAR_7,
       const void *VAR_8,
       const size_t VAR_9,
       heim_octet_string *VAR_10,
       heim_octet_string *VAR_11)
{
    EVP_CIPHER_CTX *VAR_12;
    void *VAR_13 = ((void*)0);
    int VAR_14;

    VAR_11->data = ((void*)0);
    VAR_11->length = 0;

    if ((VAR_7->cipher->flags & VAR_1) &&
 (VAR_7->flags & VAR_0) == 0)
 return VAR_4;

    if (VAR_10 && FUNC_3(VAR_7->c) < (int)VAR_10->length)
 return VAR_5;

    if (VAR_7->key.data == ((void*)0))
 return VAR_5;

    if (VAR_10)
 VAR_13 = VAR_10->data;

    VAR_12 = FUNC_1();
    if (VAR_12 == ((void*)0))
 return VAR_2;

    VAR_14 = FUNC_5(VAR_12, VAR_7->c, ((void*)0),
       VAR_7->key.data, VAR_13, 0);
    if (VAR_14 != 1) {
 FUNC_0(VAR_12);
 return VAR_5;
    }

    VAR_11->length = VAR_9;
    VAR_11->data = FUNC_7(VAR_9);
    if (VAR_11->data == ((void*)0)) {
 FUNC_0(VAR_12);
 VAR_11->length = 0;
 return VAR_2;
    }

    if (FUNC_4(VAR_12, VAR_11->data, VAR_8, VAR_9) != 1) {
 FUNC_0(VAR_12);
 return VAR_5;
    }
    FUNC_0(VAR_12);

    if ((VAR_7->flags & VAR_6) && FUNC_2(VAR_7->c) > 1) {
 int VAR_15;
 unsigned char *VAR_16;
 int VAR_17, VAR_18 = FUNC_2(VAR_7->c);

 if ((int)VAR_11->length < VAR_18) {
     VAR_14 = VAR_3;
     goto out;
 }

 VAR_16 = VAR_11->data;
 VAR_16 += VAR_11->length - 1;
 VAR_15 = *VAR_16;
 if (VAR_15 > VAR_18) {
     VAR_14 = VAR_3;
     goto out;
 }
 VAR_11->length -= VAR_15;
 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
     if (*VAR_16-- != VAR_15) {
  VAR_14 = VAR_3;
  goto out;
     }
 }
    }

    return 0;

 out:
    if (VAR_11->data)
 FUNC_6(VAR_11->data);
    VAR_11->data = ((void*)0);
    VAR_11->length = 0;
    return VAR_14;
}
