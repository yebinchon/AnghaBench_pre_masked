
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; int enc; int modified; } ;
struct TYPE_8__ {TYPE_1__ enc; } ;
struct TYPE_9__ {TYPE_2__ cert_info; int sha1_hash; } ;
typedef TYPE_3__ X509 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2(const X509 *VAR_1, const X509 *VAR_2)
{
    int VAR_3;

    FUNC_0((X509 *)VAR_1, -1, 0);
    FUNC_0((X509 *)VAR_2, -1, 0);

    VAR_3 = FUNC_1(VAR_1->sha1_hash, VAR_2->sha1_hash, VAR_0);
    if (VAR_3)
        return VAR_3;

    if (!VAR_1->cert_info.enc.modified && !VAR_2->cert_info.enc.modified) {
        if (VAR_1->cert_info.enc.len < VAR_2->cert_info.enc.len)
            return -1;
        if (VAR_1->cert_info.enc.len > VAR_2->cert_info.enc.len)
            return 1;
        return FUNC_1(VAR_1->cert_info.enc.enc, VAR_2->cert_info.enc.enc,
                      VAR_1->cert_info.enc.len);
    }
    return VAR_3;
}
