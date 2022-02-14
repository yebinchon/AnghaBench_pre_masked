
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {size_t fd; } ;
struct dos_ttystate {int txbusy; scalar_t__ base; scalar_t__ fifo; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,char const*,int) ;
 struct dos_ttystate* VAR_7 ;
 long FUNC_2 () ;

__attribute__((used)) static int
FUNC_3 (struct serial *VAR_8, const char *VAR_9, int VAR_10)
{
  volatile struct dos_ttystate *VAR_11 = &VAR_7[VAR_8->fd];
  int VAR_12 = VAR_11->fifo ? 16 : 1;
  long VAR_13;
  int VAR_14;

  while (VAR_10 > 0)
    {

      VAR_14 = VAR_12 > VAR_10 ? VAR_10 : VAR_12;
      VAR_11->txbusy = 1;







      for ( ; VAR_14 > 0; VAR_14--, VAR_10--)
 FUNC_0 (VAR_11->base + VAR_5, *VAR_9++);





      VAR_13 = FUNC_2 () + VAR_2;
      while (VAR_11->txbusy)
 {
   if ((FUNC_2 () - VAR_13) >= 0)
     {
       VAR_6 = VAR_1;
       return VAR_3;
     }
 }
    }
  return 0;
}
