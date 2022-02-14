
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sb_chinfo {int buffer; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sb_chinfo*) ;
 int FUNC_2 (struct sb_chinfo*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_1, void *VAR_2, int VAR_3)
{
 struct sb_chinfo *VAR_4 = VAR_2;

 if (!FUNC_0(VAR_3))
  return 0;

 FUNC_3(VAR_4->buffer, VAR_3);
 if (VAR_3 == VAR_0)
  FUNC_1(VAR_4);
 else
  FUNC_2(VAR_4);
 return 0;
}
