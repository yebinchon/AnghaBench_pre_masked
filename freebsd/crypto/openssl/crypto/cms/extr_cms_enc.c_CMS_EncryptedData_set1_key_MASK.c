
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * encryptedContentInfo; scalar_t__ version; } ;
struct TYPE_5__ {TYPE_3__* encryptedData; } ;
struct TYPE_6__ {TYPE_1__ d; int contentType; } ;
typedef int EVP_CIPHER ;
typedef int CMS_EncryptedContentInfo ;
typedef TYPE_2__ CMS_ContentInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int const*,unsigned char const*,size_t) ;

int FUNC_5(CMS_ContentInfo *VAR_6, const EVP_CIPHER *VAR_7,
                               const unsigned char *VAR_8, size_t VAR_9)
{
    CMS_EncryptedContentInfo *VAR_10;
    if (!VAR_8 || !VAR_9) {
        FUNC_0(VAR_1, VAR_3);
        return 0;
    }
    if (VAR_7) {
        VAR_6->d.encryptedData = FUNC_1(VAR_0);
        if (!VAR_6->d.encryptedData) {
            FUNC_0(VAR_1, VAR_4);
            return 0;
        }
        VAR_6->contentType = FUNC_2(VAR_5);
        VAR_6->d.encryptedData->version = 0;
    } else if (FUNC_3(VAR_6->contentType) != VAR_5) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }
    VAR_10 = VAR_6->d.encryptedData->encryptedContentInfo;
    return FUNC_4(VAR_10, VAR_7, VAR_8, VAR_9);
}
