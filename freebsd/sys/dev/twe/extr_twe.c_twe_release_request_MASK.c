
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_request {int tr_sc; int * tr_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct twe_request*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct twe_request *VAR_1)
{
    FUNC_1(4);

    if (!VAR_0)
 FUNC_0(VAR_1->tr_sc);
    if (VAR_1->tr_private != ((void*)0))
 FUNC_3(VAR_1->tr_sc, "tr_private != NULL");
    FUNC_2(VAR_1);
}
