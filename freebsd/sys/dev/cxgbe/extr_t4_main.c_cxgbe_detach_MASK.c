
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int flags; int media; int tick; int * vi; struct adapter* adapter; } ;
struct adapter {int traceq; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct port_info* FUNC_4 (int ) ;
 int FUNC_5 (struct adapter*,int *) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct adapter*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_1)
{
 struct port_info *VAR_2 = FUNC_4(VAR_1);
 struct adapter *VAR_3 = VAR_2->adapter;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  return (VAR_4);
 FUNC_3(VAR_1);

 FUNC_5(VAR_3, &VAR_2->vi[0]);

 if (VAR_2->flags & VAR_0) {
  VAR_3->traceq = -1;
  FUNC_8(VAR_3);
 }

 FUNC_2(&VAR_2->vi[0]);
 FUNC_1(&VAR_2->tick);
 FUNC_7(&VAR_2->media);

 FUNC_6(VAR_3, 0);

 return (0);
}
