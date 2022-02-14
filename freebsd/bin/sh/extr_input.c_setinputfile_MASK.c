
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char const*,int ) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;

void
FUNC_7(const char *VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_3;
 if ((VAR_11 = FUNC_4(VAR_8, VAR_6 | VAR_5)) < 0) {
  VAR_10 = VAR_7;
  FUNC_2(VAR_10 == VAR_0 || VAR_10 == VAR_1 ? 127 : 126,
      "cannot open %s: %s", VAR_8, FUNC_6(VAR_10));
 }
 if (VAR_11 < 10) {
  VAR_12 = FUNC_3(VAR_11, VAR_2, 10);
  FUNC_0(VAR_11);
  if (VAR_12 < 0)
   FUNC_1("Out of file descriptors");
  VAR_11 = VAR_12;
 }
 FUNC_5(VAR_11, VAR_9);
 VAR_4;
}
