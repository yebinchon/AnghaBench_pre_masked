
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm3008_setup_data {int pdda_pin; int pdad_pin; int dem1_pin; int dem0_pin; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pcm3008_setup_data *VAR_0)
{
 FUNC_0(VAR_0->dem0_pin);
 FUNC_0(VAR_0->dem1_pin);
 FUNC_0(VAR_0->pdad_pin);
 FUNC_0(VAR_0->pdda_pin);
}
