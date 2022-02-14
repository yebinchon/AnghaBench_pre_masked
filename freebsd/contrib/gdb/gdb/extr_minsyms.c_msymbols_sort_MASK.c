
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int minimal_symbol_count; int msymbols; } ;
struct minimal_symbol {int dummy; } ;


 int FUNC_0 (struct objfile*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int ) ;

void
FUNC_2 (struct objfile *VAR_1)
{
  FUNC_1 (VAR_1->msymbols, VAR_1->minimal_symbol_count,
  sizeof (struct minimal_symbol), VAR_0);
  FUNC_0 (VAR_1);
}
