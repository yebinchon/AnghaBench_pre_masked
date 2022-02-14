
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct xae_softc {scalar_t__* counters; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct xae_softc*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static uint64_t
FUNC_3(struct xae_softc *VAR_2, int VAR_3)
{
 uint64_t VAR_4, VAR_5;
 uint64_t VAR_6;

 FUNC_0(VAR_3 < VAR_1,
  ("counter %d is out of range", VAR_3));

 VAR_4 = FUNC_1(VAR_2, FUNC_2(VAR_3));
 VAR_5 = VAR_2->counters[VAR_3];

 if (VAR_4 >= VAR_5)
  VAR_6 = VAR_4 - VAR_5;
 else
  VAR_6 = VAR_0 - VAR_5 + VAR_4;
 VAR_2->counters[VAR_3] = VAR_4;

 return (VAR_6);
}
