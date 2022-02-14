
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int t_id; } ;
typedef TYPE_2__ tdesc_t ;
struct TYPE_7__ {int rmd_map; TYPE_1__* rmd_tgt; } ;
typedef TYPE_3__ redir_mstr_data_t ;
struct TYPE_5__ {int td_idhash; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,void*,void*) ;
 int FUNC_2 (int,char*,int,int ) ;
 int FUNC_3 (int ,void*,void*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_0, void *VAR_1, void *VAR_2)
{
 tdesc_t *VAR_3 = VAR_0;
 int VAR_4 = (uintptr_t)VAR_1;
 redir_mstr_data_t *VAR_5 = VAR_2;
 tdesc_t VAR_6;
 tdesc_t *VAR_7;

 VAR_6.t_id = VAR_4;

 if (!FUNC_3(VAR_5->rmd_tgt->td_idhash, (void *)&VAR_6,
     (void *)&VAR_7)) {
  FUNC_0("Couldn't unforward %d (%s)\n", VAR_4,
      FUNC_4(VAR_7));
 }

 FUNC_2(3, "Forward map: resolved %d to %s\n", VAR_4, FUNC_4(VAR_7));

 FUNC_1(VAR_5->rmd_map, (void *)VAR_3, (void *)VAR_7);

 return (1);
}
