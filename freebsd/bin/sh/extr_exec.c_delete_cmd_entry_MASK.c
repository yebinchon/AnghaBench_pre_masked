
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tblentry {struct tblentry* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tblentry*) ;
 struct tblentry** VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct tblentry *VAR_3;

 VAR_0;
 VAR_3 = *VAR_2;
 *VAR_2 = VAR_3->next;
 FUNC_0(VAR_3);
 VAR_1;
}
