
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flag; int type; scalar_t__ id_hi; scalar_t__ id_lo; void* fname; void* dir; int * fp; } ;
typedef TYPE_1__ FILEGEN ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char const*) ;

__attribute__((used)) static void
FUNC_1(
 const char * VAR_2,
 const char * VAR_3,
 FILEGEN * VAR_4
 )
{
 VAR_4->fp = ((void*)0);
 VAR_4->dir = FUNC_0(VAR_2);
 VAR_4->fname = FUNC_0(VAR_3);
 VAR_4->id_lo = 0;
 VAR_4->id_hi = 0;
 VAR_4->type = VAR_1;
 VAR_4->flag = VAR_0;
}
