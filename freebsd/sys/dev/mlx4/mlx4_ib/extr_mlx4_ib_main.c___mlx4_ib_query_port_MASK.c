
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_attr {int dummy; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,struct ib_port_attr*,int) ;
 int FUNC_1 (struct ib_device*,int ,struct ib_port_attr*,int) ;
 int FUNC_2 (struct ib_port_attr*,int ,int) ;
 scalar_t__ FUNC_3 (struct ib_device*,int ) ;

int FUNC_4(struct ib_device *VAR_1, u8 VAR_2,
    struct ib_port_attr *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_3, 0, sizeof *VAR_3);

 VAR_5 = FUNC_3(VAR_1, VAR_2) == VAR_0 ?
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4) :
    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
