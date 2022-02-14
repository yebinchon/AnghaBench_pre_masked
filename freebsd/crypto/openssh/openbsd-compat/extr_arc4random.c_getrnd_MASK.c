
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int *,size_t,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int,int *,size_t) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(u_char *VAR_6, size_t VAR_7)
{
 int VAR_8;
 ssize_t VAR_9;
 size_t VAR_10 = 0;






 if ((VAR_8 = FUNC_3(VAR_4, VAR_3)) == -1)
  FUNC_1("Couldn't open %s: %s", VAR_4, FUNC_5(VAR_5));
 while (VAR_10 < VAR_7) {
  VAR_9 = FUNC_4(VAR_8, VAR_6 + VAR_10, VAR_7 - VAR_10);
  if (VAR_9 < 0) {
   if (VAR_5 == VAR_0 || VAR_5 == VAR_1 ||
       VAR_5 == VAR_2)
    continue;
   FUNC_1("read %s: %s", VAR_4, FUNC_5(VAR_5));
  }
  VAR_10 += VAR_9;
 }
 FUNC_0(VAR_8);
}
