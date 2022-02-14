
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer {int* data; scalar_t__ index; int size; } ;
typedef int len ;
struct TYPE_2__ {int (* decode ) (int ,int*,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,int*,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int*,int) ;
 int FUNC_3 (int ,int*,int,int ) ;

__attribute__((used)) static int
FUNC_4(int VAR_3, struct buffer *VAR_4, int VAR_5)
{
    int VAR_6;
    int VAR_7;
    void *VAR_8;

    VAR_7 = FUNC_0(VAR_3, &VAR_6, sizeof(VAR_6));
    if (VAR_7 == 0)
 return 0;
    else if (VAR_7 < 0)
 return -1;
    VAR_6 = FUNC_1(VAR_6);
    VAR_8 = FUNC_2(VAR_4->data, VAR_6);
    if (VAR_8 == ((void*)0))
 return -1;
    VAR_4->data = VAR_8;
    VAR_7 = FUNC_0(VAR_3, VAR_4->data, VAR_6);
    if (VAR_7 == 0)
 return 0;
    else if (VAR_7 < 0)
 return -1;
    VAR_4->size = (*VAR_2->decode)(VAR_0, VAR_4->data, VAR_6, VAR_1);
    VAR_4->index = 0;
    return 0;
}
