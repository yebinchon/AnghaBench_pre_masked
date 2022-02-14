
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ minor; } ;
struct iavf_sc {TYPE_1__ version; } ;
typedef int caps ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iavf_sc*,char*,int,int ) ;
 int FUNC_1 (struct iavf_sc*,int ,int *,int) ;

int
FUNC_2(struct iavf_sc *VAR_6)
{
 u32 VAR_7;

 VAR_7 = VAR_3 |
     VAR_4 |
     VAR_5;

 FUNC_0(VAR_6, "Sending offload flags: 0x%b\n",
     VAR_7, VAR_0);

 if (VAR_6->version.minor == VAR_2)
  return FUNC_1(VAR_6, VAR_1,
      ((void*)0), 0);
 else
  return FUNC_1(VAR_6, VAR_1,
      (u8 *)&VAR_7, sizeof(VAR_7));
}
