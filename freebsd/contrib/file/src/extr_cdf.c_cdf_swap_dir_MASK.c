
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* d_size; void* d_stream_first_sector; void* d_modified; void* d_created; void* d_flags; void** d_storage_uuid; void* d_storage; void* d_right_child; void* d_left_child; int d_namelen; } ;
typedef TYPE_1__ cdf_directory_t ;


 void* FUNC_0 (int ,void*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_4(cdf_directory_t *VAR_2)
{
 VAR_2->d_namelen = FUNC_1(VAR_2->d_namelen);
 VAR_2->d_left_child = FUNC_2(FUNC_0(VAR_0, VAR_2->d_left_child));
 VAR_2->d_right_child = FUNC_2(FUNC_0(VAR_0, VAR_2->d_right_child));
 VAR_2->d_storage = FUNC_2(FUNC_0(VAR_0, VAR_2->d_storage));
 VAR_2->d_storage_uuid[0] = FUNC_3(VAR_2->d_storage_uuid[0]);
 VAR_2->d_storage_uuid[1] = FUNC_3(VAR_2->d_storage_uuid[1]);
 VAR_2->d_flags = FUNC_2(VAR_2->d_flags);
 VAR_2->d_created = FUNC_3(FUNC_0(VAR_1, VAR_2->d_created));
 VAR_2->d_modified = FUNC_3(FUNC_0(VAR_1, VAR_2->d_modified));
 VAR_2->d_stream_first_sector = FUNC_2(
     FUNC_0(VAR_0, VAR_2->d_stream_first_sector));
 VAR_2->d_size = FUNC_2(VAR_2->d_size);
}
