
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_mapper_std_rowcol {int rc_src_rowcol; } ;
struct _citrus_mapper_std {struct _citrus_mapper_std_rowcol ms_rowcol; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct _citrus_mapper_std *VAR_0)
{
 struct _citrus_mapper_std_rowcol *VAR_1;

 VAR_1 = &VAR_0->ms_rowcol;
 FUNC_0(VAR_1->rc_src_rowcol);
}
