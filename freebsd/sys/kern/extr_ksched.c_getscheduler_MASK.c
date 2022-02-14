
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct rtprio {int type; } ;
struct ksched {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,struct rtprio*) ;

__attribute__((used)) static __inline int
FUNC_1(struct ksched *VAR_3, struct thread *VAR_4, int *VAR_5)
{
 struct rtprio VAR_6;
 int VAR_7;

 VAR_7 = 0;
 FUNC_0(VAR_4, &VAR_6);
 switch (VAR_6.type) {
 case 129:
  *VAR_5 = VAR_0;
  break;
 case 128:
  *VAR_5 = VAR_2;
  break;
 default:
  *VAR_5 = VAR_1;
  break;
 }
 return (VAR_7);
}
