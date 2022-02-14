
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int ;
struct pcpu_state {int nexttick; } ;
typedef int sbintime_t ;
struct TYPE_3__ {int et_flags; } ;


 int FUNC_0 (int ,char*,int ,int,int ,int) ;
 int FUNC_1 (int ,char*,int ,int,int ,int,int ) ;
 struct pcpu_state* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5(sbintime_t VAR_8, int VAR_9)
{
 struct pcpu_state *VAR_10;
 sbintime_t VAR_11;
 sbintime_t *VAR_12;
 uint64_t VAR_13;
 int VAR_14;

 if (VAR_5->et_flags & VAR_0) {
  VAR_10 = FUNC_2(VAR_7);
  VAR_12 = &VAR_10->nexttick;
 } else
  VAR_12 = &VAR_3;
 if (VAR_4) {
  if (VAR_9) {




   VAR_13 = VAR_8 % VAR_6;
   VAR_11 = VAR_6 - VAR_13;
   if (VAR_11 < VAR_13)
    VAR_11 += VAR_6;
   FUNC_1(VAR_1, "load p at %d:   now %d.%08x first in %d.%08x",
       VAR_2, (int)(VAR_8 >> 32), (u_int)(VAR_8 & 0xffffffff),
       (int)(VAR_11 >> 32), (u_int)(VAR_11 & 0xffffffff));
   *VAR_12 = VAR_11 + VAR_8;
   FUNC_3(VAR_5, VAR_11, VAR_6);
  }
 } else {
  VAR_11 = FUNC_4();
  VAR_14 = (VAR_11 == *VAR_12);
  FUNC_0(VAR_1, "load at %d:    next %d.%08x eq %d",
      VAR_2, (int)(VAR_11 >> 32), (u_int)(VAR_11 & 0xffffffff), VAR_14);
  if (!VAR_14) {
   *VAR_12 = VAR_11;
   FUNC_3(VAR_5, VAR_11 - VAR_8, 0);
  }
 }
}
