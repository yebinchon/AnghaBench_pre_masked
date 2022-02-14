
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct dumperinfo {scalar_t__ maxiosize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 size_t VAR_3 ;
 int FUNC_1 (struct dumperinfo*,char*,int ,size_t) ;
 int VAR_4 ;
 size_t FUNC_2 (scalar_t__,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 size_t VAR_5 ;
 int FUNC_5 (size_t,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct dumperinfo *VAR_6, char *VAR_7, size_t VAR_8)
{
 size_t VAR_9;
 int VAR_10, VAR_11;
 u_int VAR_12;

 VAR_12 = VAR_6->maxiosize;

 if (VAR_12 == 0)
  VAR_12 = VAR_1;

 VAR_10 = 0;

 while (VAR_8) {
  VAR_9 = FUNC_2(VAR_12, VAR_8);
  VAR_3 += VAR_9;
  VAR_5 -= VAR_9;

  if (VAR_3 >> 22) {
   FUNC_5(VAR_5, VAR_4);
   VAR_3 &= (1<<22) - 1;
  }

  FUNC_6(VAR_2);

  if (VAR_7) {
   VAR_10 = FUNC_1(VAR_6, VAR_7, 0, VAR_9);
   if (VAR_10)
    return (VAR_10);
   VAR_7 += VAR_9;
   VAR_8 -= VAR_9;
  } else {
   FUNC_3("pa is not supported");
  }


  VAR_11 = FUNC_0();
  if (VAR_11 == 0x03)
   return (VAR_0);
  if (VAR_11 != -1)
   FUNC_4(" (CTRL-C to abort) ");
 }

 return (0);
}
