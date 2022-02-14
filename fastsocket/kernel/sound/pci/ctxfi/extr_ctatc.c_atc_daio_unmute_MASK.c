
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daio_mgr {int (* commit_write ) (struct daio_mgr*) ;int (* daio_disable ) (struct daio_mgr*,int ) ;int (* daio_enable ) (struct daio_mgr*,int ) ;} ;
struct ct_atc {int * daios; struct daio_mgr** rsc_mgrs; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct daio_mgr*,int ) ;
 int FUNC_1 (struct daio_mgr*,int ) ;
 int FUNC_2 (struct daio_mgr*) ;

__attribute__((used)) static int FUNC_3(struct ct_atc *VAR_1, unsigned char VAR_2, int VAR_3)
{
 struct daio_mgr *VAR_4 = VAR_1->rsc_mgrs[VAR_0];

 if (VAR_2)
  VAR_4->daio_enable(VAR_4, VAR_1->daios[VAR_3]);
 else
  VAR_4->daio_disable(VAR_4, VAR_1->daios[VAR_3]);

 VAR_4->commit_write(VAR_4);

 return 0;
}
