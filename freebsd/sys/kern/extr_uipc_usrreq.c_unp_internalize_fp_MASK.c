
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int unp_msgcount; struct file* unp_file; } ;
struct file {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct unpcb* FUNC_2 (struct file*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct file *VAR_1)
{
 struct unpcb *VAR_2;

 FUNC_0();
 if ((VAR_2 = FUNC_2(VAR_1)) != ((void*)0)) {
  VAR_2->unp_file = VAR_1;
  VAR_2->unp_msgcount++;
 }
 VAR_0++;
 FUNC_1();
}
