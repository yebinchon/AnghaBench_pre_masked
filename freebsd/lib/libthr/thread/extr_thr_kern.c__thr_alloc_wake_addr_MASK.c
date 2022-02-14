
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wake_addr {scalar_t__ value; struct wake_addr* link; } ;
struct pthread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 struct pthread* FUNC_2 () ;
 int * VAR_4 ;
 int VAR_5 ;
 struct wake_addr VAR_6 ;
 unsigned int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,unsigned int,int,int,int,int ) ;
 struct wake_addr* VAR_7 ;

struct wake_addr *
FUNC_5(void)
{
 struct pthread *VAR_8;
 struct wake_addr *VAR_9;

 if (VAR_4 == ((void*)0)) {
  return &VAR_6;
 }

 VAR_8 = FUNC_2();

 FUNC_0(VAR_8, &VAR_5);
 if (VAR_7 == ((void*)0)) {
  unsigned VAR_10;
  unsigned VAR_11 = FUNC_3();
  struct wake_addr *VAR_12 = (struct wake_addr *)
   FUNC_4(((void*)0), FUNC_3(), VAR_2|VAR_3,
   VAR_0|VAR_1, -1, 0);
  for (VAR_10 = 1; VAR_10 < VAR_11/sizeof(struct wake_addr); ++VAR_10)
   VAR_12[VAR_10].link = &VAR_12[VAR_10+1];
  VAR_12[VAR_10-1].link = ((void*)0);
  VAR_7 = &VAR_12[1];
  VAR_9 = &VAR_12[0];
 } else {
  VAR_9 = VAR_7;
  VAR_7 = VAR_9->link;
 }
 FUNC_1(VAR_8, &VAR_5);
 VAR_9->value = 0;
 return (VAR_9);
}
