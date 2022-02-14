
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (char*,unsigned long) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void*,size_t,int ) ;
 int FUNC_8 (char*,int *,size_t*) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (void*,size_t) ;
 unsigned long FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(const atf_tc_t *VAR_4, const char *VAR_5)
{
 size_t VAR_6;
 void *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_9(VAR_8 = FUNC_11(((void*)0)));
 FUNC_4("RNG seed %lu\n", VAR_8);

 FUNC_0(FUNC_5(VAR_5));
 VAR_6 = 0;
 if (FUNC_8(".", ((void*)0), &VAR_6) == -1) {
  if (VAR_3 == VAR_1) {
   FUNC_2("file handles not supported");
  } else if (VAR_3 != VAR_0) {
   FUNC_1("getfh size");
  }
 }

 VAR_7 = FUNC_3(VAR_6);
 FUNC_10(VAR_7, VAR_6);
 VAR_9 = FUNC_7(VAR_7, VAR_6, VAR_2);
 if (VAR_9 != -1)
  FUNC_6(VAR_9);

 FUNC_0(FUNC_5("/"));
}
