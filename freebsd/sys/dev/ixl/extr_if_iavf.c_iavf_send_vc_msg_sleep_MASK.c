
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctx; } ;
struct iavf_sc {int dev; TYPE_1__ vsi; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct iavf_sc*,char*,int ,int ,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iavf_sc*,int ) ;
 int FUNC_5 (struct iavf_sc*,int ) ;
 int FUNC_6 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_7(struct iavf_sc *VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;
 if_ctx_t VAR_7 = VAR_4->vsi.ctx;

 VAR_6 = FUNC_5(VAR_4, VAR_5);
 if (VAR_6 != 0) {
  FUNC_1(VAR_4, "Error sending %b: %d\n", VAR_5, VAR_2, VAR_6);
  return (VAR_6);
 }


 if (!FUNC_3(VAR_7)) {
  FUNC_1(VAR_4, "Sleeping for op %b\n", VAR_5, VAR_2);
  VAR_6 = FUNC_6(FUNC_4(VAR_4, VAR_5),
      FUNC_2(VAR_7), VAR_3, "iavf_vc", VAR_1);

  if (VAR_6 == VAR_0)
   FUNC_0(VAR_4->dev, "%b timed out\n", VAR_5, VAR_2);
 }

 return (VAR_6);
}
