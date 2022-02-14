
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_node {int dummy; } ;
struct udf_mnt {int dummy; } ;
struct udf_dirstream {int offset; int fsize; struct udf_mnt* udfmp; struct udf_node* node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct udf_dirstream* FUNC_0 (int ,int) ;

__attribute__((used)) static struct udf_dirstream *
FUNC_1(struct udf_node *VAR_3, int VAR_4, int VAR_5, struct udf_mnt *VAR_6)
{
 struct udf_dirstream *VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_0 | VAR_1);

 VAR_7->node = VAR_3;
 VAR_7->offset = VAR_4;
 VAR_7->udfmp = VAR_6;
 VAR_7->fsize = VAR_5;

 return (VAR_7);
}
