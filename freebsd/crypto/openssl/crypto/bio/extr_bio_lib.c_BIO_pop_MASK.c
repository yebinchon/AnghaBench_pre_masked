
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* prev_bio; struct TYPE_8__* next_bio; } ;
struct TYPE_7__ {TYPE_2__* next_bio; } ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,TYPE_2__*) ;

BIO *FUNC_1(BIO *VAR_1)
{
    BIO *VAR_2;

    if (VAR_1 == ((void*)0))
        return ((void*)0);
    VAR_2 = VAR_1->next_bio;

    FUNC_0(VAR_1, VAR_0, 0, VAR_1);

    if (VAR_1->prev_bio != ((void*)0))
        VAR_1->prev_bio->next_bio = VAR_1->next_bio;
    if (VAR_1->next_bio != ((void*)0))
        VAR_1->next_bio->prev_bio = VAR_1->prev_bio;

    VAR_1->next_bio = ((void*)0);
    VAR_1->prev_bio = ((void*)0);
    return VAR_2;
}
