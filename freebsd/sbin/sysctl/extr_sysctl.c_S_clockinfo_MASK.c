
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockinfo {int stathz; int profhz; int tick; int hz; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,size_t,int) ;

__attribute__((used)) static int
FUNC_2(size_t VAR_1, void *VAR_2)
{
 struct clockinfo *VAR_3 = (struct clockinfo*)VAR_2;

 if (VAR_1 != sizeof(*VAR_3)) {
  FUNC_1("S_clockinfo %zu != %zu", VAR_1, sizeof(*VAR_3));
  return (1);
 }
 FUNC_0(VAR_0 ? "{ hz = %'d, tick = %'d, profhz = %'d, stathz = %'d }" :
  "{ hz = %d, tick = %d, profhz = %d, stathz = %d }",
  VAR_3->hz, VAR_3->tick, VAR_3->profhz, VAR_3->stathz);
 return (0);
}
