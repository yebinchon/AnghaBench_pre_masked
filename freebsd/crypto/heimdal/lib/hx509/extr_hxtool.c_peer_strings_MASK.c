
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hx509_peer_info ;
typedef int hx509_context ;
struct TYPE_8__ {int num_strings; int * strings; } ;
typedef TYPE_1__ getarg_strings ;
struct TYPE_9__ {int algorithm; } ;
typedef TYPE_2__ AlgorithmIdentifier ;


 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int,int,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,TYPE_2__*,int) ;
 int FUNC_7 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_8(hx509_context VAR_0,
      hx509_peer_info *VAR_1,
      const getarg_strings *VAR_2)
{
    AlgorithmIdentifier *VAR_3;
    int VAR_4, VAR_5;

    VAR_4 = FUNC_5(VAR_0, VAR_1);
    if (VAR_4)
 FUNC_4(VAR_0, 1, VAR_4, "hx509_peer_info_alloc");

    VAR_3 = FUNC_0(VAR_2->num_strings, sizeof(*VAR_3));
    if (VAR_3 == ((void*)0))
 FUNC_1(1, "malloc");

    for (VAR_5 = 0; VAR_5 < VAR_2->num_strings; VAR_5++)
 FUNC_7(VAR_2->strings[VAR_5], ((void*)0), &VAR_3[VAR_5].algorithm);

    VAR_4 = FUNC_6(VAR_0, *VAR_1, VAR_3, VAR_2->num_strings);
    if (VAR_4)
 FUNC_4(VAR_0, 1, VAR_4, "hx509_peer_info_set_cms_algs");

    for (VAR_5 = 0; VAR_5 < VAR_2->num_strings; VAR_5++)
 FUNC_3(&VAR_3[VAR_5]);
    FUNC_2(VAR_3);
}
