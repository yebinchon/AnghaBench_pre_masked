
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bai_family; int bai_socktype; int * bai_addr; int * bai_next; scalar_t__ bai_protocol; } ;
typedef TYPE_1__ BIO_ADDRINFO ;
typedef int BIO_ADDR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int,void const*,size_t,unsigned short) ;
 int * FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(int VAR_7, int VAR_8,
                         const void *VAR_9, size_t VAR_10,
                         unsigned short VAR_11,
                         BIO_ADDRINFO **VAR_12)
{
    if ((*VAR_12 = FUNC_5(sizeof(**VAR_12))) == ((void*)0)) {
        FUNC_4(VAR_1, VAR_2);
        return 0;
    }

    (*VAR_12)->bai_family = VAR_7;
    (*VAR_12)->bai_socktype = VAR_8;
    if (VAR_8 == VAR_6)
        (*VAR_12)->bai_protocol = VAR_3;
    if (VAR_8 == VAR_5)
        (*VAR_12)->bai_protocol = VAR_4;




    {





        BIO_ADDR *VAR_13 = FUNC_1();
        if (VAR_13 != ((void*)0)) {
            FUNC_2(VAR_13, VAR_7, VAR_9, VAR_10, VAR_11);
            (*VAR_12)->bai_addr = FUNC_3(VAR_13);
        }
    }
    (*VAR_12)->bai_next = ((void*)0);
    if ((*VAR_12)->bai_addr == ((void*)0)) {
        FUNC_0(*VAR_12);
        *VAR_12 = ((void*)0);
        return 0;
    }
    return 1;
}
