
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int length; unsigned char* data; int type; } ;
struct TYPE_5__ {int q; } ;
typedef TYPE_1__ DSA ;
typedef TYPE_2__ ASN1_INTEGER ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int *) ;

int FUNC_3(const DSA *VAR_2)
{
    int VAR_3, VAR_4;
    ASN1_INTEGER VAR_5;
    unsigned char VAR_6[4];




    VAR_4 = FUNC_1(VAR_2->q);
    VAR_5.length = (VAR_4 + 7) / 8;
    VAR_5.data = VAR_6;
    VAR_5.type = VAR_0;

    VAR_6[0] = 0xff;

    VAR_4 = FUNC_2(&VAR_5, ((void*)0));
    VAR_4 += VAR_4;
    VAR_3 = FUNC_0(1, VAR_4, VAR_1);
    return VAR_3;
}
