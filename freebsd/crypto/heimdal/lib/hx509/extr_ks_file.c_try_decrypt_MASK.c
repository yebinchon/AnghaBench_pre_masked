
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hx509_collector {int dummy; } ;
typedef int hx509_context ;
struct TYPE_3__ {void* data; size_t length; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;
typedef int AlgorithmIdentifier ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ,void const*,void const*,size_t,int,void*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (int *,void*,void const*,size_t) ;
 int FUNC_5 (int *,int const*,int *,void*,void const*,int ) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int FUNC_7 (int ,struct hx509_collector*,int const*,int *,TYPE_1__*,int *) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int,char*) ;
 void* FUNC_11 (size_t) ;
 int FUNC_12 (void*,int ,size_t) ;

__attribute__((used)) static int
FUNC_13(hx509_context VAR_2,
     struct hx509_collector *VAR_3,
     const AlgorithmIdentifier *VAR_4,
     const EVP_CIPHER *VAR_5,
     const void *VAR_6,
     const void *VAR_7,
     size_t VAR_8,
     const void *VAR_9,
     size_t VAR_10)
{
    heim_octet_string VAR_11;
    size_t VAR_12;
    void *VAR_13;
    int VAR_14;

    VAR_12 = FUNC_3(VAR_5);

    VAR_13 = FUNC_11(VAR_12);
    if (VAR_13 == ((void*)0)) {
 FUNC_9(VAR_2);
 return VAR_0;
    }

    VAR_14 = FUNC_0(VAR_5, FUNC_6(), VAR_6,
    VAR_7, VAR_8,
    1, VAR_13, ((void*)0));
    if (VAR_14 <= 0) {
 FUNC_10(VAR_2, 0, VAR_1,
          "Failed to do string2key for private key");
 return VAR_1;
    }

    VAR_11.data = FUNC_11(VAR_10);
    if (VAR_11.data == ((void*)0)) {
 FUNC_10(VAR_2, 0, VAR_0,
          "Out of memory to decrypt for private key");
 VAR_14 = VAR_0;
 goto out;
    }
    VAR_11.length = VAR_10;

    {
 EVP_CIPHER_CTX *VAR_15;

 VAR_15 = FUNC_2();
 if (VAR_15 == ((void*)0)) {
  FUNC_10(VAR_2, 0, VAR_0,
           "Out of memory to decrypt for private key");
  VAR_14 = VAR_0;
  goto out;
 }
 FUNC_5(VAR_15, VAR_5, ((void*)0), VAR_13, VAR_6, 0);
 FUNC_4(VAR_15, VAR_11.data, VAR_9, VAR_10);
 FUNC_1(VAR_15);
    }

    VAR_14 = FUNC_7(VAR_2,
        VAR_3,
        VAR_4,
        ((void*)0),
        &VAR_11,
        ((void*)0));

    FUNC_12(VAR_11.data, 0, VAR_11.length);
out:
    FUNC_8(VAR_11.data);
    FUNC_12(VAR_13, 0, VAR_12);
    FUNC_8(VAR_13);
    return VAR_14;
}
