
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nvlist_t ;
struct TYPE_4__ {scalar_t__ cch_magic; int cch_sock; } ;
typedef TYPE_1__ cap_channel_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int * FUNC_2 (int ,int ) ;

nvlist_t *
FUNC_3(const cap_channel_t *VAR_1)
{

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_1->cch_magic == VAR_0);

 return (FUNC_2(VAR_1->cch_sock,
     FUNC_1(VAR_1)));
}
