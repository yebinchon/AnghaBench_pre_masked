
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_clock_dev {int id; } ;
struct omap4_clk_details {scalar_t__ src_freq; } ;


 int VAR_0 ;
 struct omap4_clk_details* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct ti_clock_dev *VAR_1,
                                  unsigned int *VAR_2
                                  )
{
 struct omap4_clk_details* VAR_3 = FUNC_0(VAR_1->id);

 if (VAR_3 == ((void*)0))
  return (VAR_0);


 if (VAR_2)
  *VAR_2 = (unsigned int)VAR_3->src_freq;

 return (0);
}
