
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc5 {unsigned int tcam_size; scalar_t__ mode; int part_type; scalar_t__ parity_enabled; int * adapter; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct mc5*) ;
 int FUNC_4 (struct mc5*) ;
 int FUNC_5 (struct mc5*) ;
 int FUNC_6 (struct mc5*) ;
 int FUNC_7 (int *,int ,int,int) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int,int,int ) ;
 int FUNC_9 (int *,int ,unsigned int) ;

int FUNC_10(struct mc5 *VAR_13, unsigned int VAR_14, unsigned int VAR_15,
  unsigned int VAR_16)
{
 int VAR_17;
 unsigned int VAR_18 = VAR_13->tcam_size;
 unsigned int VAR_19 = VAR_13->mode == VAR_12;
 adapter_t *VAR_20 = VAR_13->adapter;

 if (!VAR_18)
  return 0;

 if (VAR_16 > VAR_11 || VAR_16 + VAR_14 + VAR_15 > VAR_18)
  return -VAR_6;

 if (VAR_15)
  VAR_13->parity_enabled = 0;


 FUNC_7(VAR_20, VAR_0, VAR_8 | VAR_7,
    FUNC_1(VAR_19) | FUNC_2(VAR_19) | VAR_10);
 if (FUNC_8(VAR_20, VAR_0, VAR_9, 1, 500, 0)) {
  FUNC_0(VAR_20, "TCAM reset timed out\n");
  return -1;
 }

 FUNC_9(VAR_20, VAR_4, VAR_18 - VAR_16);
 FUNC_9(VAR_20, VAR_3,
       VAR_18 - VAR_16 - VAR_15);
 FUNC_9(VAR_20, VAR_5,
       VAR_18 - VAR_16 - VAR_15 - VAR_14);


 FUNC_9(VAR_20, VAR_1, 0);
 FUNC_9(VAR_20, VAR_2, 0);

 FUNC_6(VAR_13);

 switch (VAR_13->part_type) {
 case 128:
  VAR_17 = FUNC_4(VAR_13);
  break;
 case 129:
  VAR_17 = FUNC_3(VAR_13);
  break;
 default:
  FUNC_0(VAR_20, "Unsupported TCAM type %d\n", VAR_13->part_type);
  VAR_17 = -VAR_6;
  break;
 }

 FUNC_5(VAR_13);
 return VAR_17;
}
