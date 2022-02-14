
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nm_ifreq {int nifr_name; } ;
struct TYPE_2__ {int (* config ) (struct nm_ifreq*) ;} ;
struct nm_bridge {TYPE_1__ bdg_ops; } ;


 int FUNC_0 (struct nm_bridge*) ;
 int FUNC_1 (struct nm_bridge*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct nm_bridge* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct nm_ifreq*) ;

int
FUNC_6(struct nm_ifreq *VAR_1)
{
 struct nm_bridge *VAR_2;
 int VAR_3 = VAR_0;

 FUNC_2();
 VAR_2 = FUNC_4(VAR_1->nifr_name, 0, ((void*)0));
 if (!VAR_2) {
  FUNC_3();
  return VAR_3;
 }
 FUNC_3();

 FUNC_0(VAR_2);
 if (VAR_2->bdg_ops.config != ((void*)0))
  VAR_3 = VAR_2->bdg_ops.config(VAR_1);
 FUNC_1(VAR_2);
 return VAR_3;
}
