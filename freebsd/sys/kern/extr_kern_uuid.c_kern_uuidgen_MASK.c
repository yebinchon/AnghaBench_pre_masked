
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int mid; int hi; scalar_t__ low; } ;
struct TYPE_4__ {long long ll; TYPE_1__ x; } ;
struct uuid_private {scalar_t__* node; int seq; TYPE_2__ time; } ;
struct uuid {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct uuid_private VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__*) ;
 size_t FUNC_5 () ;

struct uuid *
FUNC_6(struct uuid *VAR_2, size_t VAR_3)
{
 struct uuid_private VAR_4;
 uint64_t VAR_5;
 size_t VAR_6;

 FUNC_2(&VAR_1);

 FUNC_4(VAR_4.node);
 VAR_5 = FUNC_5();

 if (VAR_0.time.ll == 0LL || VAR_0.node[0] != VAR_4.node[0] ||
     VAR_0.node[1] != VAR_4.node[1] ||
     VAR_0.node[2] != VAR_4.node[2])
  VAR_4.seq = (uint16_t)FUNC_0() & 0x3fff;
 else if (VAR_0.time.ll >= VAR_5)
  VAR_4.seq = (VAR_0.seq + 1) & 0x3fff;
 else
  VAR_4.seq = VAR_0.seq;

 VAR_0 = VAR_4;
 VAR_0.time.ll = (VAR_5 + VAR_3 - 1) & ((1LL << 60) - 1LL);

 FUNC_3(&VAR_1);


 VAR_4.seq = FUNC_1(VAR_4.seq | 0x8000);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {

  VAR_4.time.x.low = (uint32_t)VAR_5;
  VAR_4.time.x.mid = (uint16_t)(VAR_5 >> 32);
  VAR_4.time.x.hi = ((uint16_t)(VAR_5 >> 48) & 0xfff) | (1 << 12);
  VAR_2[VAR_6] = *(struct uuid *)&VAR_4;
  VAR_5++;
 }

 return (VAR_2);
}
