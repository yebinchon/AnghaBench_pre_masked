
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_4__ {int desc; void* seg_size; void* seg_num; int cookie; } ;
typedef TYPE_1__ qls_mpid_seg_hdr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(qls_mpid_seg_hdr_t *VAR_1, uint32_t VAR_2,
 uint32_t VAR_3, unsigned char *VAR_4)
{
 FUNC_1(VAR_1, 0, sizeof(qls_mpid_seg_hdr_t));

 VAR_1->cookie = VAR_0;
 VAR_1->seg_num = VAR_2;
 VAR_1->seg_size = VAR_3;

 FUNC_0(VAR_1->desc, VAR_4, (sizeof(VAR_1->desc))-1);

 return;
}
