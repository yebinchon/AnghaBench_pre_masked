
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinit {int data; int (* func ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const void **VAR_0)
{
 const struct sysinit *VAR_1;

 while ((VAR_1 = *VAR_0) != ((void*)0)) {
  (VAR_1->func) (VAR_1->data);
  VAR_0++;
 }
}
