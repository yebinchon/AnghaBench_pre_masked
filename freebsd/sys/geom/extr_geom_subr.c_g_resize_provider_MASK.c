
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int flags; scalar_t__ mediasize; } ;
struct g_hh00 {scalar_t__ size; struct g_provider* pp; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (struct g_provider*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct g_hh00* FUNC_1 (int,int) ;
 int FUNC_2 (int ,struct g_hh00*,int,int *) ;
 int VAR_3 ;

void
FUNC_3(struct g_provider *VAR_4, off_t VAR_5)
{
 struct g_hh00 *VAR_6;

 FUNC_0(VAR_4);
 if (VAR_4->flags & VAR_0)
  return;

 if (VAR_5 == VAR_4->mediasize)
  return;

 VAR_6 = FUNC_1(sizeof *VAR_6, VAR_1 | VAR_2);
 VAR_6->pp = VAR_4;
 VAR_6->size = VAR_5;
 FUNC_2(VAR_3, VAR_6, VAR_1, ((void*)0));
}
