
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_7 ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (void*,size_t,int ) ;
 int FUNC_11 (int ,void*,size_t*) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(const atf_tc_t *VAR_8, const char *VAR_9)
{
 size_t VAR_10;
 void *VAR_11;
 int VAR_12;

 FUNC_2(FUNC_8(VAR_9));
 FUNC_2(VAR_12 = FUNC_12(VAR_3, VAR_6 | VAR_4, 0777));
 FUNC_2(FUNC_9(VAR_12));

 VAR_10 = 0;
 if (FUNC_11(VAR_3, ((void*)0), &VAR_10) == -1) {
  if (VAR_7 == VAR_1) {
   FUNC_6("file handles not supported");
  } else if (VAR_7 != VAR_0) {
   FUNC_5("getfh size");
  }
 }

 VAR_11 = FUNC_7(VAR_10);
 FUNC_2(FUNC_11(VAR_3, VAR_11, &VAR_10));
 FUNC_2(FUNC_13(VAR_3));

 if (FUNC_1(VAR_8))
  FUNC_3("fhopen() for removed file succeeds "
      "(PR kern/43745)");
 FUNC_0(VAR_2, FUNC_10(VAR_11, VAR_10, VAR_5) == -1);
 FUNC_4();

 FUNC_2(FUNC_8("/"));
}
