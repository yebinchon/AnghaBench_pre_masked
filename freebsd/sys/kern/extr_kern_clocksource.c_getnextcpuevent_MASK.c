
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct pcpu_state {scalar_t__ nexthard; scalar_t__ nextcall; scalar_t__ nextstat; scalar_t__ nextprof; } ;
typedef scalar_t__ sbintime_t ;


 scalar_t__ FUNC_0 () ;
 struct pcpu_state* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static sbintime_t
FUNC_2(int VAR_6)
{
 sbintime_t VAR_7;
 struct pcpu_state *VAR_8;
 u_int VAR_9;

 VAR_8 = FUNC_1(VAR_5);

 VAR_7 = VAR_8->nexthard;
 if (VAR_6) {
  VAR_9 = (u_int)VAR_1 / 2;
  if (VAR_3 > 2



      )
   VAR_9 = VAR_1 / VAR_3;
  if (VAR_9 > 1)
   VAR_7 += VAR_4 * (VAR_9 - 1);
 }

 if (VAR_7 > VAR_8->nextcall)
  VAR_7 = VAR_8->nextcall;
 if (!VAR_6) {
  if (VAR_7 > VAR_8->nextstat)
   VAR_7 = VAR_8->nextstat;
  if (VAR_2 && VAR_7 > VAR_8->nextprof)
   VAR_7 = VAR_8->nextprof;
 }
 return (VAR_7);
}
