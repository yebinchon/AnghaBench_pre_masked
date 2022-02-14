
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int t_id; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_21__ {int td_nextid; int td_parlabel; } ;
typedef TYPE_2__ tdata_t ;
typedef int symit_data_t ;
struct TYPE_22__ {scalar_t__ cth_parlabel; scalar_t__ cth_stroff; } ;
typedef TYPE_3__ ctf_header_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_1__**,int,scalar_t__,int *) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,scalar_t__,char*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_1__**,int,scalar_t__,int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,TYPE_1__**,int,scalar_t__,int) ;
 TYPE_2__* FUNC_6 () ;
 void* FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static tdata_t *
FUNC_9(ctf_header_t *VAR_0, caddr_t VAR_1, symit_data_t *VAR_2, char *VAR_3)
{
 tdata_t *VAR_4 = FUNC_6();
 tdesc_t **VAR_5;
 int VAR_6 = FUNC_0(VAR_0, VAR_1);
 int VAR_7, VAR_8;


 VAR_5 = FUNC_7(sizeof (tdesc_t *) * (VAR_6 + 1));
 VAR_5[0] = ((void*)0);
 for (VAR_8 = 1; VAR_8 <= VAR_6; VAR_8++) {
  VAR_5[VAR_8] = FUNC_7(sizeof (tdesc_t));
  VAR_5[VAR_8]->t_id = VAR_8;
 }

 VAR_4->td_parlabel = FUNC_8(VAR_1 + VAR_0->cth_stroff + VAR_0->cth_parlabel);


 VAR_7 = FUNC_3(VAR_0, VAR_4, VAR_1, VAR_3);

 FUNC_4(VAR_0, VAR_4, VAR_5, VAR_6 + 1, VAR_1, VAR_2);
 FUNC_2(VAR_0, VAR_4, VAR_5, VAR_6 + 1, VAR_1, VAR_2);
 FUNC_5(VAR_0, VAR_4, VAR_5, VAR_6 + 1, VAR_1, VAR_7);

 FUNC_1(VAR_5);

 VAR_4->td_nextid = VAR_6 + 1;

 return (VAR_4);
}
