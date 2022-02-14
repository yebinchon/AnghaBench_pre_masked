
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct ks_pkcs12 {scalar_t__ certs; struct ks_pkcs12* fn; } ;
struct hx509_collector {int dummy; } ;
typedef int * hx509_lock ;
typedef int hx509_context ;
typedef int hx509_certs ;
struct TYPE_18__ {int length; int data; } ;
typedef TYPE_5__ heim_octet_string ;
struct TYPE_20__ {size_t len; TYPE_4__* val; } ;
struct TYPE_15__ {TYPE_1__* content; int contentType; } ;
struct TYPE_19__ {TYPE_2__ authSafe; } ;
struct TYPE_17__ {TYPE_3__* content; int contentType; } ;
struct TYPE_16__ {int length; int data; } ;
struct TYPE_14__ {int length; int data; } ;
typedef TYPE_6__ PKCS12_PFX ;
typedef TYPE_7__ PKCS12_AuthenticatedSafe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,struct hx509_collector**) ;
 int FUNC_1 (int ,struct hx509_collector*,scalar_t__*) ;
 int FUNC_2 (struct hx509_collector*) ;
 int * VAR_3 ;
 int VAR_4 ;
 struct ks_pkcs12* FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,TYPE_7__*,int *) ;
 int FUNC_5 (int ,int ,TYPE_5__*,int *) ;
 int FUNC_6 (void*,size_t,TYPE_6__*,int *) ;
 int FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (struct ks_pkcs12*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (scalar_t__*) ;
 int FUNC_13 (int ,char*,int ,int *,scalar_t__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int,char*,...) ;
 int FUNC_16 (int ,struct hx509_collector*,int *,int ,int ,int *) ;
 int FUNC_17 (char const*,void**,size_t*) ;
 int FUNC_18 (void*) ;
 struct ks_pkcs12* FUNC_19 (char const*) ;

__attribute__((used)) static int
FUNC_20(hx509_context VAR_5,
  hx509_certs VAR_6, void **VAR_7, int VAR_8,
  const char *VAR_9, hx509_lock VAR_10)
{
    struct ks_pkcs12 *VAR_11;
    size_t VAR_12;
    void *VAR_13;
    PKCS12_PFX VAR_14;
    PKCS12_AuthenticatedSafe VAR_15;
    int VAR_16;
    size_t VAR_17;
    struct hx509_collector *VAR_18;

    *VAR_7 = ((void*)0);

    if (VAR_10 == ((void*)0))
 VAR_10 = VAR_3;

    VAR_16 = FUNC_0(VAR_5, VAR_10, &VAR_18);
    if (VAR_16)
 return VAR_16;

    VAR_11 = FUNC_3(1, sizeof(*VAR_11));
    if (VAR_11 == ((void*)0)) {
 VAR_16 = VAR_1;
 FUNC_15(VAR_5, 0, VAR_16, "out of memory");
 goto out;
    }

    VAR_11->fn = FUNC_19(VAR_9);
    if (VAR_11->fn == ((void*)0)) {
 VAR_16 = VAR_1;
 FUNC_15(VAR_5, 0, VAR_16, "out of memory");
 goto out;
    }

    if (VAR_8 & VAR_2) {
 VAR_16 = FUNC_13(VAR_5, "MEMORY:ks-file-create",
          0, VAR_10, &VAR_11->certs);
 if (VAR_16 == 0)
     *VAR_7 = VAR_11;
 goto out;
    }

    VAR_16 = FUNC_17(VAR_9, &VAR_13, &VAR_12);
    if (VAR_16) {
 FUNC_14(VAR_5);
 goto out;
    }

    VAR_16 = FUNC_6(VAR_13, VAR_12, &VAR_14, ((void*)0));
    FUNC_18(VAR_13);
    if (VAR_16) {
 FUNC_15(VAR_5, 0, VAR_16,
          "Failed to decode the PFX in %s", VAR_9);
 goto out;
    }

    if (FUNC_8(&VAR_14.authSafe.contentType, &VAR_4) != 0) {
 FUNC_11(&VAR_14);
 VAR_16 = VAR_0;
 FUNC_15(VAR_5, 0, VAR_16,
          "PKCS PFX isn't a pkcs7-data container");
 goto out;
    }

    if (VAR_14.authSafe.content == ((void*)0)) {
 FUNC_11(&VAR_14);
 VAR_16 = VAR_0;
 FUNC_15(VAR_5, 0, VAR_16,
          "PKCS PFX missing data");
 goto out;
    }

    {
 heim_octet_string VAR_19;

 VAR_16 = FUNC_5(VAR_14.authSafe.content->data,
     VAR_14.authSafe.content->length,
     &VAR_19,
     ((void*)0));
 FUNC_11(&VAR_14);
 if (VAR_16) {
     FUNC_14(VAR_5);
     goto out;
 }
 VAR_16 = FUNC_4(VAR_19.data,
           VAR_19.length,
           &VAR_15,
           ((void*)0));
 FUNC_7(&VAR_19);
 if (VAR_16) {
     FUNC_14(VAR_5);
     goto out;
 }
    }

    for (VAR_17 = 0; VAR_17 < VAR_15.len; VAR_17++)
 FUNC_16(VAR_5,
     VAR_18,
     &VAR_15.val[VAR_17].contentType,
     VAR_15.val[VAR_17].content->data,
     VAR_15.val[VAR_17].content->length,
     ((void*)0));

    FUNC_10(&VAR_15);

    VAR_16 = FUNC_1(VAR_5, VAR_18, &VAR_11->certs);
    if (VAR_16 == 0)
 *VAR_7 = VAR_11;

out:
    FUNC_2(VAR_18);

    if (VAR_16 && VAR_11) {
 if (VAR_11->fn)
     FUNC_9(VAR_11->fn);
 if (VAR_11->certs)
     FUNC_12(&VAR_11->certs);
 FUNC_9(VAR_11);
    }

    return VAR_16;
}
