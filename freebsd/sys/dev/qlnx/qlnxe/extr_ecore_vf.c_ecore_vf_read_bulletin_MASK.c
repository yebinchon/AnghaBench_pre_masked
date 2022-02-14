
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ size; struct ecore_bulletin_content* p_virt; } ;
struct ecore_bulletin_content {scalar_t__ version; int crc; } ;
struct ecore_vf_iov {TYPE_1__ bulletin; struct ecore_bulletin_content bulletin_shadow; } ;
struct ecore_hwfn {struct ecore_vf_iov* vf_iov_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int*,scalar_t__) ;
 int FUNC_2 (struct ecore_bulletin_content*,struct ecore_bulletin_content*,scalar_t__) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_3,
         u8 *VAR_4)
{
 struct ecore_vf_iov *VAR_5 = VAR_3->vf_iov_info;
 struct ecore_bulletin_content VAR_6;
 u32 VAR_7, VAR_8;

 VAR_8 = sizeof(VAR_5->bulletin.p_virt->crc);
 *VAR_4 = 0;


 FUNC_2(&VAR_6, VAR_5->bulletin.p_virt, VAR_5->bulletin.size);


 if (VAR_6.version == VAR_5->bulletin_shadow.version)
  return VAR_2;


 VAR_7 = FUNC_1(0, (u8 *)&VAR_6 + VAR_8,
    VAR_5->bulletin.size - VAR_8);
 if (VAR_7 != VAR_6.crc)
  return VAR_0;


 FUNC_2(&VAR_5->bulletin_shadow, &VAR_6, VAR_5->bulletin.size);

 FUNC_0(VAR_3, VAR_1,
     "Read a bulletin update %08x\n", VAR_6.version);

 *VAR_4 = 1;

 return VAR_2;
}
