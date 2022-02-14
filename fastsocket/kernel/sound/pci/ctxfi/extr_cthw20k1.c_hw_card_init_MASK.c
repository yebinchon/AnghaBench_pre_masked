
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trn_conf {int vm_pgt_phys; int member_0; } ;
struct hw {int model; } ;
struct daio_conf {int msr; int member_0; } ;
struct dac_conf {int msr; int member_0; } ;
struct card_conf {int msr; int vm_pgt_phys; int rsr; } ;
struct adc_conf {scalar_t__ mic20db; int input; int msr; int member_0; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct hw*,struct adc_conf*) ;
 int FUNC_1 (struct hw*) ;
 int FUNC_2 (struct hw*) ;
 int FUNC_3 (struct hw*,struct dac_conf*) ;
 int FUNC_4 (struct hw*,struct daio_conf*) ;
 int FUNC_5 (struct hw*,int ) ;
 void* FUNC_6 (struct hw*,int ) ;
 int FUNC_7 (struct hw*,struct trn_conf*) ;
 int FUNC_8 (struct hw*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct hw *VAR_11, struct card_conf *VAR_12)
{
 int VAR_13;
 unsigned int VAR_14;
 u32 VAR_15;
 struct dac_conf VAR_16 = {0};
 struct adc_conf VAR_17 = {0};
 struct daio_conf VAR_18 = {0};
 struct trn_conf VAR_19 = {0};


 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_5(VAR_11, VAR_12->rsr);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_14 = FUNC_6(VAR_11, VAR_1);
 FUNC_10(&VAR_14, VAR_3, 1);
 FUNC_10(&VAR_14, VAR_2, 1);
 FUNC_10(&VAR_14, VAR_6, 1);
 FUNC_10(&VAR_14, VAR_5, 1);
 FUNC_10(&VAR_14, VAR_4, 1);
 FUNC_8(VAR_11, VAR_1, VAR_14);
 FUNC_9(10);


 FUNC_8(VAR_11, VAR_7, 0);

 FUNC_8(VAR_11, VAR_9, 0);
 FUNC_9(30);


 switch (VAR_11->model) {
 case 130:
  FUNC_8(VAR_11, VAR_8, 0x13fe);
  break;
 case 129:
  FUNC_8(VAR_11, VAR_8, 0x00e6);
  break;
 case 128:
  FUNC_8(VAR_11, VAR_8, 0x00c2);
  break;
 default:
  FUNC_8(VAR_11, VAR_8, 0x01e6);
  break;
 }

 VAR_19.vm_pgt_phys = VAR_12->vm_pgt_phys;
 VAR_13 = FUNC_7(VAR_11, &VAR_19);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_18.msr = VAR_12->msr;
 VAR_13 = FUNC_4(VAR_11, &VAR_18);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_16.msr = VAR_12->msr;
 VAR_13 = FUNC_3(VAR_11, &VAR_16);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_17.msr = VAR_12->msr;
 VAR_17.input = VAR_0;
 VAR_17.mic20db = 0;
 VAR_13 = FUNC_0(VAR_11, &VAR_17);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_15 = FUNC_6(VAR_11, VAR_10);
 VAR_15 |= 0x1;
 FUNC_8(VAR_11, VAR_10, VAR_15);

 return 0;
}
