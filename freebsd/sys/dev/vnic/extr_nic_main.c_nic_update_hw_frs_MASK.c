
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int maxlen; } ;
struct nicpf {TYPE_1__ pkind; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (struct nicpf*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct nicpf *VAR_5, int VAR_6, int VAR_7)
{

 if ((VAR_6 > VAR_2) || (VAR_6 < VAR_3)) {
  FUNC_0(VAR_5->dev,
      "Invalid MTU setting from VF%d rejected, "
      "should be between %d and %d\n",
      VAR_7, VAR_3, VAR_2);
  return (VAR_0);
 }
 VAR_6 += VAR_1;
 if (VAR_6 <= VAR_5->pkind.maxlen)
  return (0);

 VAR_5->pkind.maxlen = VAR_6;
 FUNC_1(VAR_5, VAR_4, *(uint64_t *)&VAR_5->pkind);
 return (0);
}
