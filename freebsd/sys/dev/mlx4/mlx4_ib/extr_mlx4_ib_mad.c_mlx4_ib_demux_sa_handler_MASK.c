
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attr_id; } ;
struct ib_sa_mad {TYPE_1__ mad_hdr; } ;
struct ib_device {int dummy; } ;



 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*,int,int,struct ib_sa_mad*) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_0, int VAR_1, int VAR_2,
            struct ib_sa_mad *VAR_3)
{
 int VAR_4 = 0;


 switch (FUNC_0(VAR_3->mad_hdr.attr_id)) {
 case 128:
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 default:
  break;
 }
 return VAR_4;
}
