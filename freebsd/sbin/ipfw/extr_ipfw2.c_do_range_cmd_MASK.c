
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int rh ;
struct TYPE_9__ {int new_set; } ;
typedef TYPE_2__ ipfw_range_tlv ;
struct TYPE_8__ {int length; int type; } ;
struct TYPE_11__ {int new_set; TYPE_1__ head; } ;
struct TYPE_10__ {TYPE_5__ range; int opheader; } ;
typedef TYPE_3__ ipfw_range_header ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *,size_t*) ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_1, ipfw_range_tlv *VAR_2)
{
 ipfw_range_header VAR_3;
 size_t VAR_4;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 FUNC_1(&VAR_3.range, VAR_2, sizeof(*VAR_2));
 VAR_3.range.head.length = sizeof(*VAR_2);
 VAR_3.range.head.type = VAR_0;
 VAR_4 = sizeof(VAR_3);

 if (FUNC_0(VAR_1, &VAR_3.opheader, &VAR_4) != 0)
  return (-1);

 VAR_2->new_set = VAR_3.range.new_set;
 return (0);
}
