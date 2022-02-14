
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct uart_bas {int dummy; } ;


 int FUNC_0 (struct uart_bas*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const FUNC_2 () ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static u_int
FUNC_4(struct uart_bas *VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;
 u_int VAR_9, VAR_10, VAR_11, VAR_12;
 static const u_int VAR_13[] = {6, 5, 4, 3, 2, 1, 7, 1};
 static const u_int VAR_14[] = {
  9600, 14400, 19200, 38400, 57600, 115200, 230400, 460800, 921600
 };
 VAR_12 = (FUNC_0(VAR_5, FUNC_1(VAR_4)) & VAR_0) >>
     VAR_1;
 VAR_6 = FUNC_2() / VAR_13[VAR_12];
 VAR_7 = FUNC_0(VAR_5, FUNC_1(VAR_2)) + 1;
 VAR_8 = FUNC_0(VAR_5, FUNC_1(VAR_3)) + 1;
 VAR_9 = ((VAR_6 / 16 ) * VAR_7) / VAR_8;

 VAR_10 = (VAR_9 * 100) / 103;
 VAR_11 = (VAR_9 * 100) / 97;
 for (VAR_12 = 0; VAR_12 < FUNC_3(VAR_14); VAR_12++) {
  VAR_6 = VAR_14[VAR_12];
  if (VAR_6 >= VAR_10 && VAR_6 <= VAR_11) {
   VAR_9 = VAR_6;
   break;
  }
 }

 return (VAR_9);
}
