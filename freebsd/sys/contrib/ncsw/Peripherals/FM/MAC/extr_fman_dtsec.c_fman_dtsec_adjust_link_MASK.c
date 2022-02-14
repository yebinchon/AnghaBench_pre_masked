
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dtsec_regs {int ecntrl; int maccfg2; } ;
typedef enum enet_speed { ____Placeholder_enet_speed } enet_speed ;
typedef enum enet_interface { ____Placeholder_enet_interface } enet_interface ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

int FUNC_3(struct dtsec_regs *VAR_7,
  enum enet_interface VAR_8,
  enum enet_speed VAR_9, bool VAR_10)
{
 uint32_t VAR_11;

 FUNC_0(VAR_8);

 if ((VAR_9 == VAR_3) && !VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_1(&VAR_7->maccfg2);
 if (!VAR_10)
  VAR_11 &= ~VAR_5;
 else
  VAR_11 |= VAR_5;

 VAR_11 &= ~(VAR_6 | VAR_4);
 if (VAR_9 < VAR_3)
  VAR_11 |= VAR_6;
 else if (VAR_9 == VAR_3)
  VAR_11 |= VAR_4;
 FUNC_2(VAR_11, &VAR_7->maccfg2);

 VAR_11 = FUNC_1(&VAR_7->ecntrl);
 if (VAR_9 == VAR_2)
  VAR_11 |= VAR_0;
 else
  VAR_11 &= ~VAR_0;
 FUNC_2(VAR_11, &VAR_7->ecntrl);

 return 0;
}
