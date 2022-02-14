
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vm_guest_paging {int dummy; } ;
struct TYPE_2__ {int op_type; } ;
struct vie {TYPE_1__ op; int decoded; } ;
typedef int mem_region_write_t ;
typedef int mem_region_read_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int ,struct vie*,int ,int ,void*) ;
 int FUNC_1 (void*,int,int ,struct vie*,int ,int ,void*) ;
 int FUNC_2 (void*,int,int ,struct vie*,int ,int ,void*) ;
 int FUNC_3 (void*,int,int ,struct vie*,int ,int ,void*) ;
 int FUNC_4 (void*,int,int ,struct vie*,struct vm_guest_paging*,int ,int ,void*) ;
 int FUNC_5 (void*,int,int ,struct vie*,int ,int ,void*) ;
 int FUNC_6 (void*,int,int ,struct vie*,struct vm_guest_paging*,int ,int ,void*) ;
 int FUNC_7 (void*,int,int ,struct vie*,int ,int ,void*) ;
 int FUNC_8 (void*,int,int ,struct vie*,int ,int ,void*) ;
 int FUNC_9 (void*,int,int ,struct vie*,struct vm_guest_paging*,int ,int ,void*) ;
 int FUNC_10 (void*,int,int ,struct vie*,struct vm_guest_paging*,int ,int ,void*) ;
 int FUNC_11 (void*,int,int ,struct vie*,struct vm_guest_paging*,int ,int ,void*) ;
 int FUNC_12 (void*,int,int ,struct vie*,int ,int ,void*) ;
 int FUNC_13 (void*,int,int ,struct vie*,int ,int ,void*) ;
 int FUNC_14 (void*,int,int ,struct vie*,int ,int ,void*) ;

int
FUNC_15(void *VAR_1, int VAR_2, uint64_t VAR_3, struct vie *VAR_4,
    struct vm_guest_paging *VAR_5, mem_region_read_t VAR_6,
    mem_region_write_t VAR_7, void *VAR_8)
{
 int VAR_9;

 if (!VAR_4->decoded)
  return (VAR_0);

 switch (VAR_4->op.op_type) {
 case 139:
  VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8);
  break;
 case 133:
  VAR_9 = FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8);
  break;
 case 132:
  VAR_9 = FUNC_10(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8);
  break;
 case 140:
  VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_6, VAR_7, VAR_8);
  break;
 case 138:
  VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_6, VAR_7, VAR_8);
  break;
 case 136:
 case 135:
  VAR_9 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_6, VAR_7, VAR_8);
  break;
 case 137:
  VAR_9 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8);
  break;
 case 131:
  VAR_9 = FUNC_11(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8);
  break;
 case 142:
  VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_6, VAR_7, VAR_8);
  break;
 case 134:
  VAR_9 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_6, VAR_7, VAR_8);
  break;
 case 130:
  VAR_9 = FUNC_12(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_6, VAR_7, VAR_8);
  break;
 case 141:
  VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_6, VAR_7, VAR_8);
  break;
 case 128:
  VAR_9 = FUNC_14(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_6, VAR_7, VAR_8);
  break;
 case 143:
  VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6,
      VAR_7, VAR_8);
  break;
 case 129:
  VAR_9 = FUNC_13(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_6, VAR_7, VAR_8);
  break;
 default:
  VAR_9 = VAR_0;
  break;
 }

 return (VAR_9);
}
