
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_handler; } ;
typedef int sa ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (struct sigaction*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char const*,char**) ;
 char* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct sigaction*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (char*,char const*,char const*) ;
 int FUNC_10 (char*,char const*) ;

__attribute__((used)) static void
FUNC_11(char *VAR_8[])
{
 struct sigaction VAR_9;
 const char *VAR_10, *VAR_11;
 int VAR_12;

 FUNC_1(&VAR_9, sizeof(VAR_9));
 FUNC_7(&VAR_9.sa_mask);
 VAR_9.sa_handler = VAR_4;
 FUNC_6(VAR_3, &VAR_9, ((void*)0));
 FUNC_6(VAR_2, &VAR_9, ((void*)0));

 FUNC_4();

 FUNC_8(VAR_5, &VAR_9.sa_mask, ((void*)0));
 VAR_11 = VAR_8[1];
 VAR_12 = FUNC_0(VAR_11, VAR_6);
 if (VAR_12 == 0) {
  FUNC_2(VAR_11, VAR_8 + 1);
  FUNC_10("can't directly exec %s: %m", VAR_11);
 } else if (VAR_7 != VAR_0) {
  FUNC_10("can't access %s: %m", VAR_11);
 }

 VAR_10 = FUNC_3();
 FUNC_2(VAR_10, VAR_8);
 FUNC_9("can't exec %s for %s: %m", VAR_10, VAR_11);
}
