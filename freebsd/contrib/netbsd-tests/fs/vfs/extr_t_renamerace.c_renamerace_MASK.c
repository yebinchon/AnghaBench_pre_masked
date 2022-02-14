
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int atf_tc_t ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int const*,char const*,int ) ;
 int FUNC_11 (int *,int *,int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int VAR_2 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char const*,int) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 () ;
 int FUNC_17 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_18(const atf_tc_t *VAR_6, const char *VAR_7)
{
 pthread_t VAR_8[VAR_0], VAR_9[VAR_0];
 int VAR_10;





 if (FUNC_2(VAR_6))
  FUNC_9("filesystem has not enough inodes");
 if (FUNC_1(VAR_6))
  FUNC_9("rename not supported by file system");
 if (FUNC_3(VAR_6))
  FUNC_6("PR kern/49046");

 FUNC_5(FUNC_13(VAR_1));
 FUNC_4(VAR_5 = FUNC_16());

 FUNC_4(FUNC_15(VAR_7));
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_11(&VAR_8[VAR_10], ((void*)0), VAR_3, ((void*)0));

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_11(&VAR_9[VAR_10], ((void*)0), VAR_4, ((void*)0));

 FUNC_17(5);
 VAR_2 = 1;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_12(VAR_8[VAR_10], ((void*)0));
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_12(VAR_9[VAR_10], ((void*)0));
 FUNC_4(FUNC_15("/"));

 if (FUNC_3(VAR_6))
  FUNC_7("race did not trigger this time");

 if (FUNC_0(VAR_6)) {
  FUNC_6("PR kern/43626");




  if (FUNC_10(VAR_6, VAR_7, 0) != 0) {
   FUNC_14(VAR_7, 1);
   FUNC_8("unmount failed");
  }
  FUNC_7("race did not trigger this time");
 }
}
