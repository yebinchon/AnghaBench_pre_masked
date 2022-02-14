
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; } ;
union nic_mbx {TYPE_1__ msg; } ;
struct nicvf {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nicvf*,int ) ;
 int FUNC_2 (struct nicvf*,int ) ;
 int FUNC_3 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static int
FUNC_4(struct nicvf *VAR_2)
{
 int VAR_3;
 union nic_mbx VAR_4 = {};

 VAR_4.msg.msg = VAR_0;


 FUNC_2(VAR_2, VAR_1);


 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2->dev,
      "Failed to alloc/config VF's QSet resources\n");
  return (VAR_3);
 }


 FUNC_3(VAR_2, &VAR_4);

 return (0);
}
