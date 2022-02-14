
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct preloaded_file*,int ,size_t,int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;

void
FUNC_1(struct preloaded_file *VAR_5)
{
 size_t VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == 0)
  return;
 VAR_6 = VAR_4 * sizeof(*VAR_3);
 FUNC_0(VAR_5, VAR_0, VAR_6, VAR_3);
 if (VAR_2 != ((void*)0)) {
  VAR_6 = VAR_4 * sizeof(*VAR_2);
  FUNC_0(VAR_5, VAR_1, VAR_6, VAR_2);
 }
}
