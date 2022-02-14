
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unicode_t ;
struct vfsconf {int dummy; } ;
struct udf_node {int dummy; } ;
struct udf_dirstream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 void* FUNC_1 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct vfsconf *VAR_5)
{






 VAR_4 = FUNC_1("UDF translation buffer, zone", VAR_1 *
     sizeof(unicode_t), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0);

 VAR_3 = FUNC_1("UDF Node zone", sizeof(struct udf_node),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0);

 VAR_2 = FUNC_1("UDF Dirstream zone",
     sizeof(struct udf_dirstream), ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0);

 if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) ||
     (VAR_2 == ((void*)0))) {
  FUNC_0("Cannot create allocation zones.\n");
  return (VAR_0);
 }

 return 0;
}
