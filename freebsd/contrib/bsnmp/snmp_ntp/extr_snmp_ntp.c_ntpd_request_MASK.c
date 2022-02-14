
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int *,int,int ) ;
 scalar_t__ VAR_9 ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_8(u_int VAR_10, u_int VAR_11, const char *VAR_12)
{
 u_char *VAR_13;
 u_char *VAR_14;
 size_t VAR_15;
 ssize_t VAR_16;

 if ((VAR_13 = FUNC_2(VAR_4)) == ((void*)0)) {
  FUNC_7(VAR_1, "%m");
  return (-1);
 }
 FUNC_4(VAR_13, 0, VAR_4);

 VAR_14 = VAR_13;
 *VAR_14++ = (VAR_6 << 3) | VAR_5;
 *VAR_14++ = VAR_10;

 if (++VAR_9 == 0)
  VAR_9++;
 *VAR_14++ = VAR_9 >> 8;
 *VAR_14++ = VAR_9;


 VAR_14 += 2;

 *VAR_14++ = VAR_11 >> 8;
 *VAR_14++ = VAR_11;


 VAR_14 += 2;

 if (VAR_12 != ((void*)0)) {
  VAR_15 = FUNC_6(VAR_12);
  if (VAR_15 > VAR_3) {
   FUNC_7(VAR_1, "NTP request too long (%zu)", VAR_15);
   FUNC_1(VAR_13);
   return (-1);
  }
  *VAR_14++ = VAR_15 >> 8;
  *VAR_14++ = VAR_15;

  FUNC_3(VAR_14, VAR_12, VAR_15);
  VAR_14 += VAR_15;
 } else

  VAR_14 += 2;

 while ((VAR_14 - VAR_13) % 4 != 0)
  *VAR_14++ = 0;

 if (VAR_7 & VAR_0) {
  FUNC_7(VAR_2, "sending %zd bytes", VAR_14 - VAR_13);
  FUNC_0(VAR_13, VAR_14 - VAR_13);
 }

 VAR_16 = FUNC_5(VAR_8, VAR_13, VAR_14 - VAR_13, 0);
 if (VAR_16 == -1) {
  FUNC_7(VAR_1, "cannot send to ntpd: %m");
  FUNC_1(VAR_13);
  return (-1);
 }
 return (0);
}
