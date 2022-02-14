
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct TYPE_2__ {int (* ra_read ) (int*,int) ;int (* ra_pre_read ) () ;int (* ra_seeded ) () ;} ;


 int VAR_0 ;
 size_t FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(void *VAR_2)
{
 size_t VAR_3, VAR_4;
 u_int VAR_5;
 uint8_t *VAR_6, *VAR_7;
 int VAR_8;




 VAR_3 = (size_t)VAR_2;
 FUNC_3("Thread #%zd starts\n", VAR_3);

 while (!VAR_1.ra_seeded())
 {
  VAR_1.ra_pre_read();
  FUNC_9(100);
 }

 for (VAR_8 = 0; VAR_8 < 100000; VAR_8++) {
  VAR_5 = VAR_8 + VAR_0;
  VAR_5 -= VAR_5%VAR_0;
  VAR_6 = FUNC_2(VAR_5);
  VAR_7 = FUNC_2(2*VAR_8 + 1024);
  if (VAR_8 % 1000 == 0)
   FUNC_3("Thread read %zd - %d\n", VAR_3, VAR_8);
  if (VAR_6 != ((void*)0) && VAR_7 != ((void*)0)) {
   VAR_1.ra_pre_read();
   VAR_1.ra_read(VAR_6, VAR_5);
   VAR_4 = FUNC_0(VAR_6, VAR_7, VAR_8);
   if (VAR_4 < VAR_8)
    FUNC_3("ERROR!! Compressible RNG output!\n");
   FUNC_1(VAR_7);
   FUNC_1(VAR_6);
  }
  FUNC_9(100);
 }

 FUNC_3("Thread #%zd ends\n", VAR_3);

 FUNC_8(0);

 return (0);
}
