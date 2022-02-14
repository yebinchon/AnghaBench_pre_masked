
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,int,char*,char const*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_13, const char *VAR_14, const char *VAR_15)
{
 char VAR_16[VAR_0];

 VAR_12 = VAR_10 + VAR_6 + VAR_4;
 if (VAR_9) {
  VAR_11 += VAR_10;
  VAR_5 += VAR_4;
  VAR_7 += VAR_6;
 }

 FUNC_1();
 FUNC_3(VAR_10, VAR_8, 0);
 FUNC_3(VAR_6, VAR_8, 1);
 FUNC_3(VAR_4, VAR_8, 2);
 if (VAR_8 == VAR_3)
  FUNC_3(VAR_12, VAR_3, 3);
 else
  FUNC_3(VAR_12, VAR_1, 3);
 FUNC_3(VAR_12, VAR_2, 4);
 if (VAR_14 != ((void*)0) && VAR_13 != ((void*)0))
  (void) FUNC_0(VAR_16, VAR_0, "%s (%s %s)", VAR_14, VAR_15,
      VAR_13);
 else if (VAR_14 != ((void*)0) && VAR_13 == ((void*)0))
  (void) FUNC_0(VAR_16, VAR_0, "%s (%s)", VAR_14, VAR_15);
 else
  (void) FUNC_0(VAR_16, VAR_0, "%s", VAR_13);
 FUNC_2(VAR_16, 5);
}
