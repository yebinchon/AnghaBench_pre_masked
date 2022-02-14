
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tty {int t_ififosize; int t_ispeedwat; int t_ospeedwat; } ;
struct com_s {int ibufsize; scalar_t__ ibufold; scalar_t__ ibuf; scalar_t__ iptr; int ierroff; int * ihighwater; int * ibufend; struct tty* tp; } ;
typedef int speed_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct com_s*) ;
 int VAR_3 ;
 int * FUNC_5 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct com_s *VAR_4, speed_t VAR_5)
{
 int VAR_6;
 u_char *VAR_7;
 int VAR_8;
 struct tty *VAR_9;







 VAR_6 = VAR_5 / 10 / VAR_3 * 4;
 for (VAR_8 = 128; VAR_8 < VAR_6;)
  VAR_8 <<= 1;
 if (VAR_8 == VAR_4->ibufsize) {
  return (0);
 }





 VAR_7 = FUNC_5(2 * VAR_8, VAR_1, VAR_2);
 if (VAR_7 == ((void*)0)) {
  return (VAR_0);
 }


 VAR_4->ibufold = VAR_4->ibuf;
 VAR_4->ibufsize = VAR_8;
 VAR_9 = VAR_4->tp;
 if (VAR_9 != ((void*)0)) {
  VAR_9->t_ififosize = 2 * VAR_8;
  VAR_9->t_ispeedwat = (speed_t)-1;
  VAR_9->t_ospeedwat = (speed_t)-1;
 }





 FUNC_2();
 FUNC_0();
 if (VAR_4->iptr != VAR_4->ibuf)
  FUNC_4(VAR_4);
 VAR_4->iptr = VAR_4->ibuf = VAR_7;
 VAR_4->ibufend = VAR_7 + VAR_8;
 VAR_4->ierroff = VAR_8;
 VAR_4->ihighwater = VAR_7 + 3 * VAR_8 / 4;

 FUNC_1();
 FUNC_3();
 return (0);
}
