
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_wstring {int length; int s; } ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (struct archive_wstring*,int ,int ) ;

void
FUNC_2(struct archive_wstring *VAR_0,
    struct archive_wstring *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1->s, VAR_1->length) == ((void*)0))
  FUNC_0(1, "Out of memory");
}
