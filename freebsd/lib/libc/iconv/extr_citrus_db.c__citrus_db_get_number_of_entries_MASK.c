
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _memstream {int dummy; } ;
struct _citrus_db_header_x {int dhx_num_entries; } ;
struct _citrus_db {int db_region; } ;


 int FUNC_0 (struct _memstream*,int *) ;
 struct _citrus_db_header_x* FUNC_1 (struct _memstream*,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(struct _citrus_db *VAR_0)
{
 struct _citrus_db_header_x *VAR_1;
 struct _memstream VAR_2;

 FUNC_0(&VAR_2, &VAR_0->db_region);

 VAR_1 = FUNC_1(&VAR_2, ((void*)0), sizeof(*VAR_1));
 return ((int)FUNC_2(VAR_1->dhx_num_entries));
}
