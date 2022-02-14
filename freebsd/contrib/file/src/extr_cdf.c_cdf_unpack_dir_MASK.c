
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d_unused0; int d_size; int d_stream_first_sector; int d_modified; int d_created; int d_flags; int d_storage_uuid; int d_storage; int d_right_child; int d_left_child; int d_color; int d_type; int d_namelen; int d_name; } ;
typedef TYPE_1__ cdf_directory_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(cdf_directory_t *VAR_0, char *VAR_1)
{
 size_t VAR_2 = 0;

 FUNC_1(VAR_0->d_name);
 FUNC_0(VAR_0->d_namelen);
 FUNC_0(VAR_0->d_type);
 FUNC_0(VAR_0->d_color);
 FUNC_0(VAR_0->d_left_child);
 FUNC_0(VAR_0->d_right_child);
 FUNC_0(VAR_0->d_storage);
 FUNC_1(VAR_0->d_storage_uuid);
 FUNC_0(VAR_0->d_flags);
 FUNC_0(VAR_0->d_created);
 FUNC_0(VAR_0->d_modified);
 FUNC_0(VAR_0->d_stream_first_sector);
 FUNC_0(VAR_0->d_size);
 FUNC_0(VAR_0->d_unused0);
}
