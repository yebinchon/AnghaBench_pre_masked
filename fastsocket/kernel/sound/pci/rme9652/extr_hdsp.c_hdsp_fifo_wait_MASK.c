
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdsp*,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct hdsp *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;





 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {

  if ((int)(FUNC_0 (VAR_1, VAR_0) & 0xff) <= VAR_2)
   return 0;





  FUNC_2 (100);
 }

 FUNC_1 ("Hammerfall-DSP: wait for FIFO status <= %d failed after %d iterations\n",
      VAR_2, VAR_3);
 return -1;
}
