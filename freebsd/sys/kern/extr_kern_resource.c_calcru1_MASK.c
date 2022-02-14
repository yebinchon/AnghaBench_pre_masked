
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct rusage_ext {int rux_uticks; int rux_sticks; int rux_iticks; int rux_tu; int rux_uu; int rux_su; int rux_runtime; } ;
struct proc {int p_comm; int p_pid; } ;
typedef int intmax_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (char*,int ,int ,int ,...) ;

__attribute__((used)) static void
FUNC_4(struct proc *VAR_0, struct rusage_ext *VAR_1, struct timeval *VAR_2,
    struct timeval *VAR_3)
{

 uint64_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_4 = VAR_1->rux_uticks;
 VAR_6 = VAR_1->rux_sticks;
 VAR_8 = VAR_1->rux_iticks;
 VAR_9 = VAR_4 + VAR_6 + VAR_8;
 if (VAR_9 == 0) {

  VAR_6 = 1;
  VAR_9 = 1;
 }
 VAR_10 = FUNC_1(VAR_1->rux_runtime);
 if ((int64_t)VAR_10 < 0) {

  FUNC_3("calcru: negative runtime of %jd usec for pid %d (%s)\n",
      (intmax_t)VAR_10, VAR_0->p_pid, VAR_0->p_comm);
  VAR_10 = VAR_1->rux_tu;
 }


 if (FUNC_0(VAR_10 <= ((uint64_t)1 << 38) && VAR_9 <= (1 << 26))) {

  VAR_5 = (VAR_10 * VAR_4) / VAR_9;
  VAR_7 = (VAR_10 * VAR_6) / VAR_9;
 } else {
  VAR_5 = FUNC_2(VAR_10, VAR_4, VAR_9);
  VAR_7 = FUNC_2(VAR_10, VAR_6, VAR_9);
 }

 if (VAR_10 >= VAR_1->rux_tu) {




  if (VAR_5 < VAR_1->rux_uu)
   VAR_5 = VAR_1->rux_uu;
  if (VAR_7 < VAR_1->rux_su)
   VAR_7 = VAR_1->rux_su;
 } else if (VAR_10 + 3 > VAR_1->rux_tu || 101 * VAR_10 > 100 * VAR_1->rux_tu) {
  VAR_5 = VAR_1->rux_uu;
  VAR_7 = VAR_1->rux_su;
  VAR_10 = VAR_1->rux_tu;
 } else {
  FUNC_3("calcru: runtime went backwards from %ju usec "
      "to %ju usec for pid %d (%s)\n",
      (uintmax_t)VAR_1->rux_tu, (uintmax_t)VAR_10,
      VAR_0->p_pid, VAR_0->p_comm);
 }

 VAR_1->rux_uu = VAR_5;
 VAR_1->rux_su = VAR_7;
 VAR_1->rux_tu = VAR_10;

 VAR_2->tv_sec = VAR_5 / 1000000;
 VAR_2->tv_usec = VAR_5 % 1000000;
 VAR_3->tv_sec = VAR_7 / 1000000;
 VAR_3->tv_usec = VAR_7 % 1000000;
}
