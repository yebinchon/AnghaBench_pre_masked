
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct twsi_softc {int clk_core; } ;
struct twsi_baud_rate {int m; int n; int param; void* raw; } ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct twsi_softc *VAR_0, const uint32_t VAR_1,
    struct twsi_baud_rate *VAR_2)
{
 uint64_t VAR_3;
 uint32_t VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;


 VAR_9 = VAR_10 = 4;
 VAR_6 = 0xffffffff;



 VAR_3 = FUNC_4();


 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
   VAR_4 = FUNC_2(VAR_3,VAR_7,VAR_8);
   VAR_5 = FUNC_0(VAR_1, VAR_4);
   if (VAR_5 < VAR_6) {
    VAR_9 = VAR_7;
    VAR_10 = VAR_8;
    VAR_6 = VAR_5;
   }
  }
 }
 VAR_2->raw = FUNC_2(VAR_3, VAR_9, VAR_10);
 VAR_2->param = FUNC_1(VAR_9, VAR_10);
 VAR_2->m = VAR_9;
 VAR_2->n = VAR_10;
}
