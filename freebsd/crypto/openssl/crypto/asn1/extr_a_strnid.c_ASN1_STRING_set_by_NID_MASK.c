
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long mask; int flags; int maxsize; int minsize; } ;
typedef TYPE_1__ ASN1_STRING_TABLE ;
typedef int ASN1_STRING ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int **,unsigned char const*,int,int,unsigned long) ;
 int FUNC_2 (int **,unsigned char const*,int,int,unsigned long,int ,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

ASN1_STRING *FUNC_3(ASN1_STRING **VAR_3,
                                    const unsigned char *VAR_4, int VAR_5,
                                    int VAR_6, int VAR_7)
{
    ASN1_STRING_TABLE *VAR_8;
    ASN1_STRING *VAR_9 = ((void*)0);
    unsigned long VAR_10;
    int VAR_11;

    if (VAR_3 == ((void*)0))
        VAR_3 = &VAR_9;
    VAR_8 = FUNC_0(VAR_7);
    if (VAR_8 != ((void*)0)) {
        VAR_10 = VAR_8->mask;
        if (!(VAR_8->flags & VAR_1))
            VAR_10 &= VAR_2;
        VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_10,
                                  VAR_8->minsize, VAR_8->maxsize);
    } else {
        VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
                                 VAR_0 & VAR_2);
    }
    if (VAR_11 <= 0)
        return ((void*)0);
    return *VAR_3;
}
