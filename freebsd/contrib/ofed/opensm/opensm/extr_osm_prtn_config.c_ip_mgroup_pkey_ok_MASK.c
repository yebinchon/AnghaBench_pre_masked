
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * raw; } ;
struct precreate_mgroup {TYPE_2__ mgid; } ;
struct part_conf {TYPE_1__* p_prtn; int p_log; } ;
typedef int ib_net16_t ;
typedef int boolean_t ;
struct TYPE_3__ {int pkey; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,char*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static inline boolean_t FUNC_5(struct part_conf *VAR_5,
       struct precreate_mgroup *VAR_6)
{
 ib_net16_t VAR_7 = *(ib_net16_t *)&VAR_6->mgid.raw[4];
 char VAR_8[VAR_2];

 if (FUNC_4(&VAR_6->mgid)

     || VAR_7 == 0x0000

     || VAR_7 == (VAR_5->p_prtn->pkey | FUNC_1(0x8000)))
  return (VAR_4);

 FUNC_0(VAR_5->p_log, VAR_3,
  "IP MC group (%s) specified with invalid pkey 0x%04x "
  "for partition pkey = 0x%04x (%s)\n",
  FUNC_3(VAR_0, VAR_6->mgid.raw, VAR_8, sizeof VAR_8),
  FUNC_2(VAR_7), FUNC_2(VAR_5->p_prtn->pkey), VAR_5->p_prtn->name);
 return (VAR_1);
}
