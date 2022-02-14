
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {int status; } ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline void FUNC_1(struct timex *VAR_7, struct timespec *VAR_8)
{
 if ((VAR_6 & VAR_0) && !(VAR_7->status & VAR_0)) {
  VAR_5 = VAR_3;
  VAR_6 = VAR_2;
 }





 if (!(VAR_6 & VAR_0) && (VAR_7->status & VAR_0))
  VAR_4 = FUNC_0();


 VAR_6 &= VAR_1;
 VAR_6 |= VAR_7->status & ~VAR_1;

}
