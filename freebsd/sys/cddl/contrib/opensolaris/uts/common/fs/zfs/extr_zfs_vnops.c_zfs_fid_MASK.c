
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int z_id; int z_sa_hdl; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_13__ {int z_os; struct TYPE_13__* z_parent; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_14__ {int zf_len; void** zf_gen; void** zf_object; } ;
typedef TYPE_3__ zfid_short_t ;
struct TYPE_15__ {scalar_t__* zf_setgen; void** zf_setid; } ;
typedef TYPE_4__ zfid_long_t ;
typedef int vnode_t ;
typedef void* uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_16__ {int fid_len; } ;
typedef TYPE_5__ fid_t ;
typedef int caller_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_8(vnode_t *VAR_3, fid_t *VAR_4, caller_context_t *VAR_5)
{
 znode_t *VAR_6 = FUNC_2(VAR_3);
 zfsvfs_t *VAR_7 = VAR_6->z_zfsvfs;
 uint32_t VAR_8;
 uint64_t VAR_9;
 uint64_t VAR_10 = VAR_6->z_id;
 zfid_short_t *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 FUNC_3(VAR_7);
 FUNC_5(VAR_6);

 if ((VAR_14 = FUNC_7(VAR_6->z_sa_hdl, FUNC_0(VAR_7),
     &VAR_9, sizeof (uint64_t))) != 0) {
  FUNC_4(VAR_7);
  return (VAR_14);
 }

 VAR_8 = (uint32_t)VAR_9;

 VAR_12 = (VAR_7->z_parent != VAR_7) ? VAR_1 : VAR_2;
 VAR_4->fid_len = VAR_12;


 VAR_11 = (zfid_short_t *)VAR_4;

 VAR_11->zf_len = VAR_12;

 for (VAR_13 = 0; VAR_13 < sizeof (VAR_11->zf_object); VAR_13++)
  VAR_11->zf_object[VAR_13] = (uint8_t)(VAR_10 >> (8 * VAR_13));


 if (VAR_8 == 0)
  VAR_8 = 1;
 for (VAR_13 = 0; VAR_13 < sizeof (VAR_11->zf_gen); VAR_13++)
  VAR_11->zf_gen[VAR_13] = (uint8_t)(VAR_8 >> (8 * VAR_13));

 if (VAR_12 == VAR_1) {
  uint64_t VAR_15 = FUNC_6(VAR_7->z_os);
  zfid_long_t *VAR_16;

  VAR_16 = (zfid_long_t *)VAR_4;

  for (VAR_13 = 0; VAR_13 < sizeof (VAR_16->zf_setid); VAR_13++)
   VAR_16->zf_setid[VAR_13] = (uint8_t)(VAR_15 >> (8 * VAR_13));


  for (VAR_13 = 0; VAR_13 < sizeof (VAR_16->zf_setgen); VAR_13++)
   VAR_16->zf_setgen[VAR_13] = 0;
 }

 FUNC_4(VAR_7);
 return (0);
}
