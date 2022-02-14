
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int time_t ;
struct stat {int st_mtime; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_8__ {TYPE_1__ signatureValue; } ;
typedef TYPE_2__ CRLCertificateList ;


 int VAR_0 ;
 int FUNC_0 (void*,size_t,TYPE_2__*,size_t*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char const*,void**,size_t*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2, time_t *VAR_3, CRLCertificateList *VAR_4)
{
    size_t VAR_5, VAR_6;
    struct stat VAR_7;
    void *VAR_8;
    int VAR_9;

    FUNC_2(VAR_4, 0, sizeof(*VAR_4));

    VAR_9 = FUNC_3(VAR_2, &VAR_8, &VAR_5);
    if (VAR_9)
 return VAR_9;

    VAR_9 = FUNC_5(VAR_2, &VAR_7);
    if (VAR_9)
 return VAR_1;

    *VAR_3 = VAR_7.st_mtime;

    VAR_9 = FUNC_0(VAR_8, VAR_5, VAR_4, &VAR_6);
    FUNC_4(VAR_8);
    if (VAR_9)
 return VAR_9;


    if (VAR_4->signatureValue.length & 7) {
 FUNC_1(VAR_4);
 return VAR_0;
    }
    return 0;
}
