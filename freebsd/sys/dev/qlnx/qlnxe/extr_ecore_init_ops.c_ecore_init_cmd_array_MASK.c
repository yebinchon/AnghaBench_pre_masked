
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
union init_array_hdr {TYPE_3__ raw; } ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int array_offset; } ;
struct init_write_op {int data; TYPE_1__ args; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int const* unzip_buf; struct ecore_dev* p_dev; } ;
struct ecore_dev {TYPE_2__* fw_data; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_5__ {int* arr_data; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*,int ,int) ;
 int FUNC_4 (struct ecore_hwfn*,int,int *,int,int *) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,int,int,int,int const*,int,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_9,
       struct ecore_ptt *VAR_10,
       struct init_write_op *VAR_11,
       bool VAR_12,
       bool VAR_13)
{
 u32 VAR_14 = FUNC_2(VAR_11->args.array_offset);
 u32 VAR_15 = FUNC_2(VAR_11->data);
 u32 VAR_16 = FUNC_1(VAR_15, VAR_7) << 2;



 struct ecore_dev *VAR_17 = VAR_9->p_dev;
 union init_array_hdr *VAR_18;
 const u32 *VAR_19;
 enum _ecore_status_t VAR_20 = VAR_1;
 u32 VAR_21;

 VAR_19 = VAR_17->fw_data->arr_data;

 VAR_18 = (union init_array_hdr *) (VAR_19 +
     VAR_14);
 VAR_15 = FUNC_2(VAR_18->raw.data);
 switch (FUNC_1(VAR_15, VAR_4)) {
 case 128:
  FUNC_0(VAR_9, 1,
     "Using zipped firmware without config enabled\n");
  VAR_20 = VAR_0;

  break;
 case 130:
 {
  u32 VAR_22 = FUNC_1(VAR_15,
     VAR_3);
  u32 VAR_23;

  VAR_21 = FUNC_1(VAR_15,
     VAR_2);

  for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++, VAR_16 += VAR_21 << 2) {
   VAR_20 = FUNC_5(VAR_9, VAR_10, VAR_16,
         VAR_14 + 1,
         VAR_21, VAR_19,
         VAR_12, VAR_13);
   if (VAR_20)
    break;
  }
  break;
 }
 case 129:
  VAR_21 = FUNC_1(VAR_15,
     VAR_5);
  VAR_20 = FUNC_5(VAR_9, VAR_10, VAR_16,
        VAR_14 + 1,
        VAR_21, VAR_19,
        VAR_12, VAR_13);
  break;
 }

 return VAR_20;
}
