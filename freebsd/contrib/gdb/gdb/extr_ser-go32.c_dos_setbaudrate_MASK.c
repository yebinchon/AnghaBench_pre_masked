
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {size_t fd; } ;
struct dos_ttystate {int baudrate; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_6 ;
 unsigned char FUNC_4 (struct dos_ttystate*,int ) ;
 int FUNC_5 (struct dos_ttystate*,int ,unsigned char) ;
 struct dos_ttystate* VAR_7 ;

__attribute__((used)) static int
FUNC_6 (struct serial *VAR_8, int VAR_9)
{
  struct dos_ttystate *VAR_10 = &VAR_7[VAR_8->fd];

  if (VAR_10->baudrate != VAR_9)
    {
      int VAR_11;
      unsigned char VAR_12;

      VAR_11 = FUNC_1 (VAR_9);
      if (VAR_11 <= 0)
 {
   FUNC_3 (VAR_6, "%d: impossible baudrate\n", VAR_9);
   VAR_5 = VAR_1;
   return -1;
 }

      FUNC_0 ();
      VAR_12 = FUNC_4 (VAR_10, VAR_2);

      FUNC_5 (VAR_10, VAR_2, VAR_0);
      FUNC_5 (VAR_10, VAR_4, VAR_11 & 0xff);
      FUNC_5 (VAR_10, VAR_3, VAR_11 >> 8);
      FUNC_5 (VAR_10, VAR_2, VAR_12);
      VAR_10->baudrate = VAR_9;
      FUNC_2 ();
    }

  return 0;
}
