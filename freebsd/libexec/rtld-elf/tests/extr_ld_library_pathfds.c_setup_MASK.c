
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descriptors {scalar_t__ testdir; void* root; void* usr; void* etc; int binary; } ;
typedef int atf_tc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (int const*,char*) ;
 int FUNC_2 (scalar_t__,char*,int ) ;
 void* FUNC_3 (char*) ;
 void* FUNC_4 (void*,char*) ;

__attribute__((used)) static void
FUNC_5(struct descriptors *VAR_1, const atf_tc_t *VAR_2)
{

 VAR_1->testdir = FUNC_3(FUNC_1(VAR_2, "srcdir"));
 FUNC_0(VAR_1->testdir >= 0);
 FUNC_0(
     (VAR_1->binary = FUNC_2(VAR_1->testdir, "target", VAR_0)) >= 0);

 FUNC_0((VAR_1->root = FUNC_3("/")) >= 0);
 FUNC_0((VAR_1->etc = FUNC_4(VAR_1->root, "etc")) >= 0);
 FUNC_0((VAR_1->usr = FUNC_4(VAR_1->root, "usr")) >= 0);
}
