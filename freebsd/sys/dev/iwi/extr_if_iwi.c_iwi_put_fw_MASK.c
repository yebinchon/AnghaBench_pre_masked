
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_fw {int * name; scalar_t__ size; int * data; int * fp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct iwi_fw *VAR_1)
{
 if (VAR_1->fp != ((void*)0)) {
  FUNC_0(VAR_1->fp, VAR_0);
  VAR_1->fp = ((void*)0);
 }
 VAR_1->data = ((void*)0);
 VAR_1->size = 0;
 VAR_1->name = ((void*)0);
}
