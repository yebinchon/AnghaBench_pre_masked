
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int port_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int*,int*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int FUNC_10 (int ,int ) ;
 int VAR_4 ;
 int FUNC_11 (int,int ) ;

int FUNC_12 (port_t VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10=0, VAR_11=0, VAR_12;

 if (! FUNC_11 (VAR_5, VAR_4))
  return 0;

 if (VAR_6 > 0 && ! FUNC_11 (VAR_6, VAR_3))
  return 0;

 if (VAR_7 > 0 && ! FUNC_11 (VAR_7, VAR_2))
  return 0;

 if (FUNC_6 (VAR_5)) {

  if (! (FUNC_9 (FUNC_1(VAR_5)) & VAR_1)) {

   if (! FUNC_6 (VAR_5+0x10))

    return (0);
   if (! (FUNC_9 (FUNC_1(VAR_5+0x10)) & VAR_1))

    return (0);
  }
  return 1;
 }
 if (FUNC_7 (VAR_5, &VAR_8, &VAR_9)) {

  if (! (FUNC_9 (FUNC_1(VAR_5)) & VAR_1)) {

   if (! FUNC_7 (VAR_5+0x10, &VAR_10, &VAR_11))

    return (0);
   if (! (FUNC_9 (FUNC_1(VAR_5+0x10)) & VAR_1))

    return (0);
  }
 } else if (FUNC_5 (VAR_5)) {
  VAR_8 = 1;
  VAR_9 = 0;
 } else
  return (0);


 FUNC_10 (FUNC_0(VAR_5), VAR_0);
 if (VAR_10 || VAR_11)
  FUNC_10 (FUNC_0(VAR_5 + 0x10), VAR_0);

 VAR_12 = 1;
 if (VAR_8 && ! FUNC_8 (FUNC_2(VAR_5)))
  VAR_12 = 0;
 else if (VAR_9 && ! FUNC_8 (FUNC_4(VAR_5)) &&
     ! FUNC_8 (FUNC_3(VAR_5)))
  VAR_12 = 0;
 else if (VAR_10 && ! FUNC_8 (FUNC_2(VAR_5 + 0x10)))
  VAR_12 = 0;
 else if (VAR_11 && ! FUNC_8 (FUNC_3(VAR_5 + 0x10)))
  VAR_12 = 0;


 FUNC_10 (FUNC_0(VAR_5), 0);
 if (VAR_10 || VAR_11)
  FUNC_10 (FUNC_0(VAR_5 + 0x10), 0);


 return (VAR_12);
}
