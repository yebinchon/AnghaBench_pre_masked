
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soundscape {int lock; int io_base; } ;


 int FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct soundscape *VAR_1, unsigned VAR_2)
{
 unsigned long VAR_3 = VAR_0 + FUNC_2(VAR_2);

 do {
  unsigned long VAR_4;
  unsigned char VAR_5;

  FUNC_4(&VAR_1->lock, VAR_4);
  VAR_5 = FUNC_1(FUNC_0(VAR_1->io_base));
  FUNC_5(&VAR_1->lock, VAR_4);
  if (VAR_5 == 0xfe)
   return 1;

  FUNC_3(10);
 } while (FUNC_6(VAR_0, VAR_3));

 return 0;
}
