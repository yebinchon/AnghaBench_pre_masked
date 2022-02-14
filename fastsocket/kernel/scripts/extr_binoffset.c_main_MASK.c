
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**) ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int VAR_10 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int) ;
 char* VAR_11 ;
 int FUNC_9 () ;
 int VAR_12 ;
 int FUNC_10 () ;

int FUNC_11 (int VAR_13, char *VAR_14 [])
{
 VAR_11 = VAR_14[0];

 if (VAR_13 < 3)
  FUNC_10 ();

 FUNC_4 (VAR_13 - 2, VAR_14 + 2);

 VAR_8 = VAR_14[1];

 VAR_7 = FUNC_7 (VAR_8, VAR_2);
 if (VAR_7 == -1) {
  FUNC_2 (VAR_12, "%s: cannot open '%s'\n",
    VAR_11, VAR_8);
  FUNC_1 (3);
 }

 VAR_5 = FUNC_3 (VAR_7);

 VAR_9 = FUNC_5 (0, VAR_5, VAR_3, VAR_1, VAR_7, 0);
 if (VAR_9 == VAR_0) {
  FUNC_2 (VAR_12, "mmap error = %d\n", VAR_4);
  FUNC_0 (VAR_7);
  FUNC_1 (4);
 }

 FUNC_9 ();

 if (FUNC_6 (VAR_9, VAR_5))
  FUNC_2 (VAR_12, "munmap error = %d\n", VAR_4);

 if (FUNC_0 (VAR_7))
  FUNC_2 (VAR_12, "%s: error %d closing '%s'\n",
    VAR_11, VAR_4, VAR_8);

 FUNC_2 (VAR_12, "number of pattern matches = %d\n", VAR_10);
 if (VAR_10 == 0)
  VAR_6 = ~0;
 FUNC_8 ("%ld\n", VAR_6);
 FUNC_2 (VAR_12, "%d\n", VAR_6);

 FUNC_1 (VAR_10 ? 0 : 2);
}
