
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iavf_sc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_sc*,char*,int ,int ,int) ;
 int FUNC_1 (struct iavf_sc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct iavf_sc *VAR_1, u32 VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != 0)
  FUNC_0(VAR_1, "Error sending %b: %d\n", VAR_2, VAR_0, VAR_3);

 return (VAR_3);
}
