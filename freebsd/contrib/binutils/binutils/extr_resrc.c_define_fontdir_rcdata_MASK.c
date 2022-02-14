
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bin_fontdir_item {scalar_t__ device_name; int * index; } ;
typedef scalar_t__ rc_uint_type ;
struct TYPE_5__ {TYPE_3__* fontdir; } ;
struct TYPE_6__ {int res_info; TYPE_1__ u; int type; } ;
typedef TYPE_2__ rc_res_resource ;
typedef int rc_res_res_info ;
typedef int rc_res_id ;
typedef int rc_rcdata_item ;
struct TYPE_7__ {struct TYPE_7__* next; scalar_t__ length; int * data; void* index; } ;
typedef TYPE_3__ rc_fontdir ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ,int ,int,int ) ;
 int * FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int *,int *,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5 (rc_res_id VAR_4,const rc_res_res_info *VAR_5,
         rc_rcdata_item *VAR_6)
{
  rc_res_resource *VAR_7;
  rc_fontdir *VAR_8, *VAR_9, *VAR_10;
  rc_uint_type VAR_11;
  bfd_byte *VAR_12;
  rc_uint_type VAR_13;

  VAR_10 = VAR_9 = ((void*)0);
  VAR_7 = FUNC_0 (&VAR_2, VAR_1, VAR_4, 0x409, 0);

  VAR_12 = FUNC_1 (VAR_6, &VAR_11);

  if (VAR_12)
    {
      rc_uint_type VAR_14 = 2;
      VAR_13 = FUNC_4 (&VAR_3, VAR_12, VAR_11);
      for (; VAR_13 > 0; VAR_13--)
 {
   size_t VAR_15;
   rc_uint_type VAR_16 = VAR_14;
   const struct bin_fontdir_item *VAR_17;

   VAR_17 = (const struct bin_fontdir_item *) VAR_12 + VAR_14;
   VAR_8 = (rc_fontdir *) FUNC_2 (sizeof (rc_fontdir));
   VAR_8->index = FUNC_4 (&VAR_3, VAR_17->index, VAR_11 - VAR_14);
   VAR_8->data = VAR_12 + VAR_14;
   VAR_14 += 56;
   VAR_15 = FUNC_3 ((char *) VAR_17->device_name) + 1;
   VAR_14 += (rc_uint_type) VAR_15;
   VAR_14 += (rc_uint_type) FUNC_3 ((char *) VAR_17->device_name + VAR_15) + 1;
   VAR_8->length = (VAR_14 - VAR_16);
   VAR_8->next = ((void*)0);
   if (VAR_9 == ((void*)0))
     VAR_9 = VAR_8;
   else
     VAR_10->next = VAR_8;
   VAR_10 = VAR_8;
 }
    }
  VAR_7->type = VAR_0;
  VAR_7->u.fontdir = VAR_9;
  VAR_7->res_info = *VAR_5;
}
