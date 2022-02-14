
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callout_cpu {int cc_callout; } ;
struct callout {int dummy; } ;
typedef int cc_cpu ;


 struct callout_cpu* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (struct callout_cpu*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (struct callout_cpu*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_8(void *VAR_12)
{
 struct callout_cpu *VAR_13;







 FUNC_7(FUNC_0(VAR_5), 0, sizeof(cc_cpu));
 VAR_8 = FUNC_5(16 + VAR_7 + VAR_6, 18508);
 FUNC_2("kern.ncallout", &VAR_8);





 VAR_3 = 1 << FUNC_4(VAR_8);
 VAR_2 = VAR_3 - 1;




 FUNC_2("kern.pin_default_swi", &VAR_9);
 FUNC_2("kern.pin_pcpu_swi", &VAR_10);







 VAR_11 = FUNC_1(VAR_4);
 VAR_13 = FUNC_0(VAR_11);
 VAR_13->cc_callout = FUNC_6(VAR_8 * sizeof(struct callout),
     VAR_0, VAR_1);
 FUNC_3(VAR_13, VAR_11);
}
