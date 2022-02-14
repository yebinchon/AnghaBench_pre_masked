
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tp_params {int ingress_config; } ;
struct TYPE_3__ {scalar_t__ ftids_in_use; scalar_t__ hpftids_in_use; } ;
struct TYPE_4__ {struct tp_params tp; } ;
struct adapter {TYPE_1__ tids; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct adapter*,int *,int,char*) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct adapter*,int,int) ;
 scalar_t__ FUNC_5 (struct adapter*,int ) ;

int
FUNC_6(struct adapter *VAR_7, uint32_t VAR_8)
{
 struct tp_params *VAR_9 = &VAR_7->params.tp;
 uint32_t VAR_10, VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_8);
 if ((VAR_11 ^ VAR_9->ingress_config) & VAR_1) {
  return (VAR_0);
 }

 VAR_10 = FUNC_2(VAR_8);

 VAR_12 = FUNC_0(VAR_7, ((void*)0), VAR_2 | VAR_5 | VAR_3,
     "t4setfm");
 if (VAR_12)
  return (VAR_12);

 if (VAR_7->tids.ftids_in_use > 0 || VAR_7->tids.hpftids_in_use > 0) {
  VAR_12 = VAR_0;
  goto done;
 }
 VAR_12 = -FUNC_4(VAR_7, VAR_10, 1);
done:
 FUNC_1(VAR_7, VAR_4);
 return (VAR_12);
}
