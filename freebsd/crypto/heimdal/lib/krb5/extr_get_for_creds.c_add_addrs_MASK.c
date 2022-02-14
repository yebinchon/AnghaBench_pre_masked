
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct addrinfo {int ai_addr; struct addrinfo* ai_next; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_10__ {unsigned int len; TYPE_2__* val; } ;
typedef TYPE_1__ krb5_addresses ;
struct TYPE_11__ {int address; scalar_t__ addr_type; } ;
typedef TYPE_2__ krb5_address ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,TYPE_2__*) ;
 void* FUNC_8 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static krb5_error_code
FUNC_9(krb5_context VAR_2,
   krb5_addresses *VAR_3,
   struct addrinfo *VAR_4)
{
    krb5_error_code VAR_5;
    unsigned VAR_6, VAR_7;
    void *VAR_8;
    struct addrinfo *VAR_9;

    VAR_6 = 0;
    for (VAR_9 = VAR_4; VAR_9 != ((void*)0); VAR_9 = VAR_9->ai_next)
 ++VAR_6;

    VAR_8 = FUNC_8(VAR_3->val, (VAR_3->len + VAR_6) * sizeof(*VAR_3->val));
    if (VAR_8 == ((void*)0) && (VAR_3->len + VAR_6) != 0) {
 VAR_5 = VAR_0;
 FUNC_6(VAR_2, VAR_5, FUNC_0("malloc: out of memory", ""));
 goto fail;
    }
    VAR_3->val = VAR_8;
    for (VAR_7 = VAR_3->len; VAR_7 < (VAR_3->len + VAR_6); ++VAR_7) {
 VAR_3->val[VAR_7].addr_type = 0;
 FUNC_3(&VAR_3->val[VAR_7].address);
    }
    VAR_7 = VAR_3->len;
    for (VAR_9 = VAR_4; VAR_9 != ((void*)0); VAR_9 = VAR_9->ai_next) {
 krb5_address VAR_10;

 VAR_5 = FUNC_7 (VAR_2, VAR_9->ai_addr, &VAR_10);
 if (VAR_5 == 0) {
     if (FUNC_1(VAR_2, &VAR_10, VAR_3))
  FUNC_4(VAR_2, &VAR_10);
     else
  VAR_3->val[VAR_7++] = VAR_10;
 }
 else if (VAR_5 == VAR_1)
     FUNC_2 (VAR_2);
 else
     goto fail;
 VAR_3->len = VAR_7;
    }
    return 0;
fail:
    FUNC_5 (VAR_2, VAR_3);
    return VAR_5;
}
