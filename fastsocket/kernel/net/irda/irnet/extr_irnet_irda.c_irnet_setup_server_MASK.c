
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int __u16 ;
struct TYPE_6__ {int * private; } ;
struct TYPE_8__ {int ckey; int stsap_sel; int * file; TYPE_1__ chan; scalar_t__ ppp_open; } ;
struct TYPE_7__ {TYPE_3__ s; int ias_obj; int skey; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_3__*) ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline int
FUNC_10(void)
{
  __u16 VAR_9;

  FUNC_0(VAR_1, "()\n");


  FUNC_2(&VAR_7.s);


  FUNC_9(&VAR_7.s);


  VAR_7.s.ppp_open = 0;
  VAR_7.s.chan.private = ((void*)0);
  VAR_7.s.file = ((void*)0);






  VAR_9 = FUNC_7(VAR_4);







  VAR_7.ias_obj = FUNC_5(VAR_3, VAR_8);
  FUNC_3(VAR_7.ias_obj, VAR_2,
      VAR_7.s.stsap_sel, VAR_0);
  FUNC_4(VAR_7.ias_obj);
  FUNC_1(VAR_1, " - self=0x%p\n", &VAR_7.s);
  return 0;
}
